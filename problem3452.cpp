#include <iostream>
#include <vector>
using namespace std;

int sumOfGoodNumbers(vector<int> &nums, int k)
{
    // int sum = 0;
    // int n = nums.size();

    // for (int i = 0; i < n; i++)
    // {
    //     if ((i - k) < 0)
    //     {

    //         if (nums[i] > nums[i + k])
    //         {
    //             sum += nums[i];
    //         }
    //     }

    //     if ((i + k) > n - 1)
    //     {
    //         if (nums[i] > nums[i - k])
    //         {
    //             sum += nums[i];
    //         }
    //     }
    // }

    // int sum = 0;
    // int n = nums.size();

    // int left = 0, right = n - 1;

    // while (left <= right)
    // {
    //     if (left == right)
    //     {
    //         sum += nums[left];
    //     }
    //     else
    //     {

    //         if (left < k)
    //         {
    //             if (nums[left] > nums[left + k])
    //             {
    //                 sum += nums[left];
    //             }
    //         }
    //         else
    //         {
    //             if (nums[left] > nums[left - k] && nums[left] > nums[left + k])
    //             {
    //                 sum += nums[left];
    //             }
    //         }

    //         if (right + k > n - 1)
    //         {
    //             if (nums[right] > nums[right - k])
    //             {
    //                 sum += nums[right];
    //             }
    //         }
    //         else
    //         {

    //             if (nums[right] > nums[right + k] && nums[right] > nums[right - k])
    //             {
    //                 sum += nums[right];
    //             }
    //         }
    //     }

    //     left++;
    //     right--;
    // }

    int sum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        bool isGood = true;

        if (i - k >= 0 && nums[i] <= nums[i - k])
            isGood = false;

        if (i + k < n && nums[i] <= nums[i + k])
            isGood = false;

        if (isGood)
            sum += nums[i];
    }

    return sum;
}

int main()
{
    vector<int> nums = {1, 3, 2, 1, 5, 4};
    int k = 2;

    cout << sumOfGoodNumbers(nums, k) << endl;
    return 0;
}