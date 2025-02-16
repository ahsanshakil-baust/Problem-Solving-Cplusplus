#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

// bool isPalindrome(string s)
// {
//     s.erase(remove_if(s.begin(), s.end(),
//                       [](unsigned char c)
//                       { return !isalnum(c); }),
//             s.end());

//     transform(s.begin(), s.end(), s.begin(),
//               [](unsigned char c)
//               { return std::tolower(c); });

//     int n = s.size();

//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] != s[n - i - 1])
//         {
//             return false;
//         }
//     }

//     return true;
// }

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
            return false;
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    return 0;
}