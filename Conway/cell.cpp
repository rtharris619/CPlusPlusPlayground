#include "cell.h"

void Cell::Draw(int row, int col) const 
{
	cout << "\x1b[" << row + 1 << ";" << col + 1 << "H";
	cout << (alive ? LIVE_CELL : DEAD_CELL);
}