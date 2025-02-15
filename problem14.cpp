#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string result = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        for (int j = 0; j < result.size(); j++)
        {
            if (strs[i][j] != result[j])
            {
                result.erase(j);
            }
        }
    }

    return result;
}

int main()
{
    vector<string> strs = {"dog", "racecar", "car"};
    cout << longestCommonPrefix(strs) << endl;

    return 0;
}