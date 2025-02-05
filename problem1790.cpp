#include <iostream>
#include <vector>
using namespace std;

bool areAlmostEqual(string s1, string s2)
{
    vector<int> mismatch;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            mismatch.push_back(i);
        }
    }

    int i = mismatch[0], j = mismatch[1];
    if (mismatch.size() > 2)
        return false;
    else if (mismatch.empty())
        return true;

    else if (s1[i] == s2[j] && s1[j] == s2[i])
        return true;
    else
        return false;
}

bool areAlmostEqualV2(string s1, string s2)
{
    int count = 0;
    int x = 0;
    int y = 0;

    if (s1.size() != s2.size())
        return false;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            count++;

            if (count > 2)
                return false;
            else
            {
                if (count == 1)
                    x = i;
                else
                    y = i;
            }
        }
    }

    return (s1[x] == s2[y] && s2[x] == s1[y]);
}

int main()
{

    string s1 = "bank";
    string s2 = "kanb";

    cout << areAlmostEqualV2(s1, s2) << endl;

    return 0;
}