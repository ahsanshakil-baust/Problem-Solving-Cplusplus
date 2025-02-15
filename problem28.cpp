#include <iostream>
using namespace std;

// int strStr(string haystack, string needle)
// {
//     int n = needle.size();
//     int m = haystack.size();

//     if (m < n)
//         return -1;

//     for (int i = 0; i <= m - n; i++)
//     {
//         int j = 0;

//         while (j < n && haystack[i + j] == needle[j])
//         {
//             j++;
//         }

//         if (j == n)
//             return i;
//     }

//     return -1;
// }

int strStr(string haystack, string needle)
{
    // bruteforce
    for (int i = 0; i < haystack.size(); i++)
    {
        for (int j = 0; j < needle.size(); j++)
        {
            if (haystack[i + j] != needle[j])
                break;
            else if (haystack[i + j] == needle[j] && j == needle.size() - 1)
                return i;
        }
    }
    return -1;
    // knuth-morris-pratt
}

int main()
{
    string haystack = "leetcode", needle = "leeto";
    cout << strStr(haystack, needle) << endl;
    return 0;
}