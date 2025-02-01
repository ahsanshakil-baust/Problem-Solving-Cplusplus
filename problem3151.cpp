#include <iostream>
#include <vector>
using namespace std;

bool isArraySpecial(vector<int> &nums)
{
    int n = nums.size();
    bool isTrue = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] % 2 == 0 && nums[i + 1] % 2 == 0)
        {
            isTrue = false;
            break;
        }
        else if (nums[i] % 2 != 0 && nums[i + 1] % 2 != 0)
        {
            isTrue = false;
            break;
        }
        else
            isTrue = true;
    }

    return isTrue;
}

int main()
{
    vector<int> nums = {4, 3, 1, 6};
    cout << isArraySpecial(nums) << endl;
    return 0;
}