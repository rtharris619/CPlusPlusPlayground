#include "grid.h"

void Grid::Create(int row, int col)
{
	cells[row][col].Create();
}

void Grid::Draw()
{
	// clears screen
	cout << "\x1b[2J";

	for (int row = 0; row < ROW_MAX; ++row)
	{
		for (int col = 0; col < COL_MAX; ++col)
		{
			cells[row][col].Draw(row, col);
		}
	}
}

void Grid::Randomise()
{
	const int factor{ 5 };
	const int cutoff = RAND_MAX / factor;
	time_t now;
	time(&now);
	//srand(now);

	for (int row = 1; row < ROW_MAX; ++row)
	{
		for (int col = 1; col < COL_MAX; ++col)
		{
			if (rand() / cutoff == 0)
			{
				Create(row, col);
			}
		}
	}
}

int Grid::GetNeigbours(int row, int col)
{
	/* Find the number of live neighbours for this cell
	x x x
	x o x
	x x x
	*/
	return cells[row - 1][col - 1].IsAlive() + cells[row - 1][col].IsAlive() + cells[row - 1][col + 1].IsAlive() +
		cells[row][col - 1].IsAlive() + cells[row][col + 1].IsAlive() +
		cells[row + 1][col - 1].IsAlive() + cells[row + 1][col].IsAlive() + cells[row + 1][col + 1].IsAlive();
}

bool Grid::WillSurvive(int row, int col) 
{
	if (!cells[row][col].IsAlive())
	{
		return false;
	}
	
	int neighbours = Grid::GetNeigbours(row, col);

	if (neighbours < MIN_NEIGHBOURS || neighbours > MAX_NEIGHBOURS) // < 2 OR > 3 
	{
		return false;
	}

	// 2 or 3 neighbours
	return true;
}

// Will a cell be born at (row, column) in the next generation?
bool Grid::WillCreate(int row, int col)
{
	if (cells[row][col].IsAlive())
	{
		// There already is a cell at this position!
		return false;
	}

	int parents = Grid::GetNeigbours(row, col);

	if (parents < MIN_PARENTS || parents > MAX_PARENTS) // < 3 OR > 3
	{
		return false;
	}

	// If we get here, a new cell can be born -> i.e. We have 3 parents
	return true;
}

// Update to the next generation
void Grid::Update(const Grid& next)
{
	for (int row = 1; row < ROW_MAX; ++row)
	{
		for (int col = 1; col < COL_MAX; ++col)
		{
			cells[row][col] = next.cells[row][col];
		}
	}
}

void Calculate(Grid& old_generation, Grid& new_generation)
{
	for (int row = 1; row < ROW_MAX; ++row)
	{
		for (int col = 1; col < COL_MAX; ++col)
		{
			if (old_generation.WillSurvive(row, col))
			{
				new_generation.Create(row, col);
			}
			else if (old_generation.WillCreate(row, col))
			{
				new_generation.Create(row, col);
			}
		}
	}
}
