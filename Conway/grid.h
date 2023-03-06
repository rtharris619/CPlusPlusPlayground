#ifndef GRID_H_
#define GRID_H_

#include <string>
#include <vector>
#include <cstdlib>

#include "cell.h"

class Grid
{
	Cell cells[ROW_MAX + 2][COL_MAX + 2];

public:
	void Create(int row, int col);

	void Draw();

	void Randomise();

	bool WillSurvive(int row, int col);

	bool WillCreate(int row, int col);

	void Update(const Grid& next);

	int GetNeigbours(int row, int col);
};

void Calculate(Grid& old_generation, Grid& new_generation);

#endif // !GRID_H_
