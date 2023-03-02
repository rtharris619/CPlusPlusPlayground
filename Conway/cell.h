#ifndef CELL_H_
#define CELL_H_

#include <iostream>
#include "life.h"

using namespace std;

class Cell
{
	bool alive;

public:
	Cell() : alive(false) {}

	void Draw(int row, int col) const;

	void Create() {
		alive = true;
	}

	void Erase() {
		alive = false;
	}

	bool IsAlive() const { return alive; }
};

#endif // !CELL_H_
