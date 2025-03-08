#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result;
        int i = 0;

        while (i < n - 1)
        {
            if (nums[i] == nums[i + 1] && nums[i] != 0)
            {
                result.push_back(nums[i] * 2);
                i += 2;
            }
            else
            {
                if (nums[i] != 0)
                {
                    result.push_back(nums[i]);
                }
                i++;
            }
        }

        if (i == n - 1 && nums[i] != 0)
        {
            result.push_back(nums[i]);
        }

        while (result.size() < n)
        {
            result.push_back(0);
        }

        return result;
    }
};

int main()
{
    vector<int> nums = {0, 1};
    Solution solution;
    vector<int> result = solution.applyOperations(nums);

    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
