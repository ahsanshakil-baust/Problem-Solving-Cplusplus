#include <iostream>
#include <cctype>
using namespace std;

string clearDigits(string s)
{
    string result = s;
    int i = 0;

    while (i < result.size())
    {
        if (!isdigit(s[i]) && isdigit(s[i + 1]))
        {
            result.erase(i, 2);
            i++;
        }
        i++;

        if (i == result.size() - 1)
        {
            i = 0;
        }
    }

    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (!isdigit(s[i]) && !isdigit(s[i + 1]))
    //     {
    //         result += s[i];
    //     }
    // }

    return result;
}

int main()
{
    string s = "cb34";
    cout << clearDigits(s) << endl;
    return 0;
}