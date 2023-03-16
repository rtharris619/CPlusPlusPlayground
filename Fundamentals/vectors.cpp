#include "vectors.h"

void VectorsDriver()
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
