#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int result = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        result ^= (nums[i] ^ i);
    }

    return result ^= n;
}

int bruteForce(vector<int> &nums)
{
    int n = nums.size();
    return n * (n + 1) * 0.5 - accumulate(nums.begin(), nums.end(), 0);
}

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << missingNumber(nums) << endl;
    return 0;
}