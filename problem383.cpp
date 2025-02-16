#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

// bool canConstruct(string ransomNote, string magazine)
// {
//     int i = 0, j = 0;
//     int n = ransomNote.size() - 1;
//     int m = magazine.size() - 1;

//     if (m < n)
//         return false;

//     sort(ransomNote.begin(), ransomNote.end(), [](char a, char b)
//          { return (tolower(a) == tolower(b)) ? (a < b) : (tolower(a) < tolower(b)); });

//     sort(magazine.begin(), magazine.end(), [](char a, char b)
//          { return (tolower(a) == tolower(b)) ? (a < b) : (tolower(a) < tolower(b)); });

//     while (i <= n && j <= m)
//     {
//         if (ransomNote[i] == magazine[j])
//         {
//             i++;
//             j++;
//         }
//         else
//         {
//             j++;
//         }
//     }

//     return i - 1 == n;
// }

// bool canConstruct(string ransomNote, string magazine)
// {
//     unordered_map<char, int> letters = {};
//     for (auto i : magazine)
//     {
//         letters[i]++;
//     }

//     for (auto i : ransomNote)
//     {
//         if (letters[i]-- < 1)
//         {
//             return false;
//         }
//     }
//     return true;
// }

bool canConstruct(string ransomNote, string magazine)
{
    vector<int> freq(26, 0);

    for (char c : magazine)
    {
        freq[c - 'a']++;
    }

    for (char c : ransomNote)
    {
        cout << freq[c - 'a'] << endl;
        if (freq[c - 'a'] == 0)
            return false;
        freq[c - 'a']--;
    }

    return true;
}

int main()
{
    string ransomNote = "ab", magazine = "aa";
    cout << canConstruct(ransomNote, magazine) << endl;
    return 0;
}