#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<int> result(rowIndex + 1, 1);

    for (int i = 1; i < rowIndex; i++)
    {

        for (int j = i; j > 0; j--)
        {
            result[j] += result[j - 1];
        }
    }

    return result;
}

int main()
{
    vector<int> result = getRow(0);
    for (int x = 0; x < result.size(); x++)
    {
        cout << result[x] << endl;
    }
    return 0;
}