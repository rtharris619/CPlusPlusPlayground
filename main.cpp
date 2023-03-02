#include <iostream>
#include <vector>

using namespace std;

void TestVectors()
{
    vector <vector<int>> movie_ratings
    {
        {
            1, 2, 3, 4
        },
        {
            1, 2, 4, 4
        },
        {
            1, 3, 4, 5
        }
    };

    cout << "Movie Ratings: " << movie_ratings.at(0).at(1) << endl;
}

void TestStatementsAndOperators()
{
    int total{};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double avg{0.0};

    avg = static_cast<double>(total) / count;

    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The avg of the numbers is: " << avg << endl;
}

void TestEqualityOperators()
{
    bool equal_result{ false };
    bool not_equal_result{ false };

    int num1{}, num2{};

    cout << noboolalpha;

    cout << "Enter 2 integers separated by a space: " << endl;

    cin >> num1 >> num2;

    equal_result = (num1 == num2);

    cout << "Comparison result (equals): " << equal_result << endl;
}

int PointerFunc(int& y)
{
    cout << "Address of y is: " << &y << endl;
    y = 1;
    return y;
}

void TestPointers()
{
    int x = 2;
    cout << "Address of x is: " << &x << endl;
    int z = PointerFunc(x);
    cout << "Address of z is: " << &z << endl;
    cout << "After calling PointerFunc(), x = " << x << endl;
    cout << "After calling PointerFunc(), z = " << z << endl;
}

void Simulate2dArray()
{
    int rowCount = 2;
    int columnCount = 4;

    string names[] = { "Fred", "Joe", "Sarah", "John", // [0, 0], [0, 1] ... [0, 3]
        "Dino", "Betty", "Claudene", "Ryan"}; // [1, 0], [1, 1] ... [1, 3]

    //cout << "names[1][2] = " << names[1 * 4 + 2] << endl;

    cout << "\nThe elements of names are:\n";
    for (int row = 0; row < rowCount; ++row)
    {
        for (int col = 0; col < columnCount; ++col)
        {
            cout << names[row * columnCount + col] << ", ";
        }
    }
}

void ConwayGame()
{
    #include "Conway/conway.h"
    SimulateConwayGame();
}

int main()
{
    ConwayGame();
	return 0;
}
