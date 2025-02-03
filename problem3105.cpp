#include <iostream>
#include <vector>
using namespace std;

int longestMonotonicSubarray(vector<int> &nums)
{
    int inc = 1;
    int dec = 1;
    int maxLength = 1;
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            inc++;
            dec = 1;
        }
        else if (nums[i] < nums[i - 1])
        {
            dec++;
            inc = 1;
        }
        else
        {
            inc = 1;
            dec = 1;
        }

        maxLength = max(inc, max(dec, maxLength));
    }

    return maxLength;
}

int main()
{
    vector<int> nums = {1, 10, 10};
    cout << longestMonotonicSubarray(nums) << endl;
    return 0;
}