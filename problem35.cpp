#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start / 2);

        if (nums[mid] == target)
            return mid;

        else if (target > nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return end + 1;
}

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    cout << searchInsert(nums, 7) << endl;

    return 0;
}