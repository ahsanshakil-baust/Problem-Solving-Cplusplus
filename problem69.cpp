#include <iostream>
using namespace std;

int sqrtp(int num)
{
    if (num < 2)
        return num;
    int left = 1, right = num / 2, ans = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (mid <= num / mid)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int num = 8;
    cout << sqrtp(num) << endl;
    return 0;
}