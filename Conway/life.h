#ifndef LIFE_H
#define LIFE_H

const char live_cell{ 'X' };
const char dead_cell{ ' ' };

const int row_max{ 23 };
const int col_max{ 79 };

const int min_neighbors{ 2 };
const int max_neighbors{ 3 };
const int min_parents{ 3 };
const int max_parents{ 3 };

#endif // !LIFE_H
