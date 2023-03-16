#include "arrays.h"

void ArraysDriver()
{
    int rowCount = 2;
    int columnCount = 4;

    string names[] = { "Fred", "Joe", "Sarah", "John", // [0, 0], [0, 1] ... [0, 3]
        "Dino", "Betty", "Claudene", "Ryan" }; // [1, 0], [1, 1] ... [1, 3]

    cout << "\nThe elements of names are:\n";
    for (int row = 0; row < rowCount; ++row)
    {
        for (int col = 0; col < columnCount; ++col)
        {
            cout << names[row * columnCount + col] << ", ";
        }
    }
}
