#include <iostream>
#include <algorithm>
using namespace std;

string sumOfTwoBinaryNums(string a, string b)
{
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    string result = "";

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int x = (i >= 0 && a[i] == '1') ? 1 : 0;
        int y = (j >= 0 && b[j] == '1') ? 1 : 0;

        result = to_string((x + y + carry) % 2) + result;
        carry = (x + y + carry) / 2;

        if (i >= 0)
            i--;
        if (j >= 0)
            j--;
    }

    return result;
}

int main()
{
    string a = "11";
    string b = "1";
    cout << sumOfTwoBinaryNums(a, b) << endl;

    return 0;
}