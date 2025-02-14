#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            result.push_back(i);
        }
    }

    return result;
}

int main()
{

    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 5;

    vector<int> result = targetIndices(nums, target);

    for (int x : result)
    {
        cout << x << endl;
    }

    return 0;
}