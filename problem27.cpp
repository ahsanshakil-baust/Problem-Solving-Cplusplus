#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[count] = nums[i];
            count++;
        }
    }

    for (int num : nums)
    {
        cout << num << endl;
    }

    return count;
}

int main()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int value = removeElement(nums, 2);
    cout << value << endl;
    return 0;
}