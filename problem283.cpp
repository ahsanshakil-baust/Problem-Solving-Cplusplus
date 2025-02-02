#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int insertPos = 0;

    for (int num : nums)
    {
        if (num != 0)
        {
            nums[insertPos++] = num;
        }
    }

    while (insertPos < nums.size())
    {
        nums[insertPos++] = 0;
    }

    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    return 0;
}