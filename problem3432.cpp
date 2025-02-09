#include <iostream>
#include <vector>

using namespace std;

int countPartitions(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j <= i; j++)
        {
            leftSum += nums[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            rightSum += nums[k];
        }

        int check = leftSum - rightSum;

        if (check % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {10, 10, 3, 7, 6};
    cout << countPartitions(nums) << endl;
    return 0;
}