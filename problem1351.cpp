#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{
    int i = 0, j = grid[0].size() - 1, n = grid.size() - 1, count = 0;

    while (i <= n && j >= 0)
    {
        if (grid[i][j] < 0)
        {
            count++;
            j--;
        }
        else
        {
            i++;
            j = grid[0].size() - 1;
        }

        if (j < 0)
        {
            i++;
            j = grid[0].size() - 1;
        }
    }

    return count;
}

int main()
{
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}};

    // vector<vector<int>> grid = {
    //     {3, 2},
    //     {-3, -3},
    //     {-3, -3},
    //     {-3, -3}};

    cout << countNegatives(grid) << endl;
    return 0;
}