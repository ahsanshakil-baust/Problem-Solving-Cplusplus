#include <iostream>
#include <vector>
using namespace std;

int maxAscendingSum(vector<int> &nums)
{
    int n = nums.size();
    int maxSum = 0;

    if (n == 1)
        return nums[0];

    int sum = nums[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            sum += nums[i + 1];
        }
        else
        {
            maxSum = max(sum, maxSum);
            sum = nums[i + 1];
        }
        maxSum = max(sum, maxSum);
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {10, 20, 30, 5, 10, 50};
    cout << maxAscendingSum(nums) << endl;
    return 0;
}