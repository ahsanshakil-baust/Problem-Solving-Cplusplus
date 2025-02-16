#include <iostream>
#include <vector>
using namespace std;

// void reverseString(vector<char> &s)
// {
//     int n = s.size();
//     for (int i = 0; i < n / 2; i++)
//     {
//         char temp = s[n - i - 1];
//         s[n - i - 1] = s[i];
//         s[i] = temp;
//     }

//     for (char x : s)
//     {
//         cout << x << endl;
//     }
// }

void reverseString(vector<char> &s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i <= j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    return 0;
}