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

int main()
{
    TestEqualityOperators();
	return 0;
}
