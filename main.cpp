#include <iostream>
#include <vector>

using namespace std;

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

//void TestPointers()
//{
//    int x = 2;
//    cout << "Address of x is: " << &x << endl;
//    int z = PointerFunc(x);
//    cout << "Address of z is: " << &z << endl;
//    cout << "After calling PointerFunc(), x = " << x << endl;
//    cout << "After calling PointerFunc(), z = " << z << endl;
//}

void TestVectors()
{
    #include "Fundamentals/vectors.h"
    VectorsDriver();
}

void TestArrays()
{
    #include "Fundamentals/arrays.h"
    ArraysDriver();
}

void TestPointers()
{
    #include "Fundamentals/pointers.h"
    PointersDriver();
}

void TestConwayGame()
{
    #include "Conway/conway.h"
    SimulateConwayGame();
}

int main()
{
    TestPointers();
	return 0;
}
