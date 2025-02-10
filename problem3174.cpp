#include <iostream>
#include <cctype>
using namespace std;

string clearDigits(string s)
{
    string result = s;
    int i = 0;

    while (i < result.size())
    {
        if (isdigit(result[i]))
        {
            result.erase(i);
        }
        else if (!isdigit(result[i]) && isdigit(result[i + 1]))
        {
            result.erase(i, 2);
            i = 0;
        }
        else
        {

            i++;
        }
    }

    return result;
}

int main()
{
    string s = "cb34";
    cout << clearDigits(s) << endl;
    return 0;
}