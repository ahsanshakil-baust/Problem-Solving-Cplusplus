#include <iostream>
#include <vector>
using namespace std;

void generate(int numRows)
{
    vector<vector<int>> result;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> arr(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            arr[j] = result[i - 1][j] + result[i - 1][j - 1];
        }

        result.push_back(arr);
    }

    for (int i = 0; i < result.size(); i++)
    {
        for (int x = 0; x < result[i].size(); x++)
            cout << result[i][x] << " ";

        cout << endl;
    }
}

int main()
{
    generate(5);
    return 0;
}