#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

// string reverseVowels(string s)
// {
//     unordered_set<char> check = {'a', 'e', 'i', 'o', 'u'};
//     int i = 0, j = s.size() - 1;
//     string result = s;

//     while (i <= j)
//     {
//         if (check.count(tolower(result[i])) && check.count(tolower(result[j])))
//         {
//             char temp = result[j];
//             result[j] = result[i];
//             result[i] = temp;

//             i++;
//             j--;
//         }

//         if (!check.count(tolower(result[i])))
//         {

//             i++;
//         }

//         if (!check.count(tolower(result[j])))
//         {

//             j--;
//         }
//     }

//     return result;
// }

string reverseVowels(string s)
{
    int i = 0, j = s.size() - 1;
    unordered_set<char> vow{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    while (i < j)
    {
        while (i < s.size() && vow.find(s[i]) == vow.end())
            i++;
        while (j > 0 && vow.find(s[j]) == vow.end())
            j--;
        if (i < j)
            swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int main()
{
    string s = "IceCreAm";
    cout << reverseVowels(s) << endl;
    return 0;
}