#include "grid.h"

void Grid::Create(int row, int col)
{
	cells[row][col].Create();
}

void Grid::Draw()
{
	// clears screen
	cout << "\x1b[2J";

	for (int row = 0; row < row_max; ++row)
	{
		for (int col = 0; col < col_max; ++col)
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

	for (int row = 1; row < row_max; ++row)
	{
		for (int col = 1; col < col_max; ++col)
		{
			if (rand() / cutoff == 0)
			{
				Create(row, col);
			}
		}
	}
}
