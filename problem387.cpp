#include <iostream>
#include <vector>
using namespace std;

int firstUniqChar(string s)
{
    vector<int> freq(26, 0);

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (freq[s[i] - 'a'] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s = "aaadd";
    cout << firstUniqChar(s) << endl;
    return 0;
}