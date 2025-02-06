#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    set<int> s(nums.begin(), nums.end());
    int x = nums.size();
    int y = s.size();

    if (x == y)
        return false;
    else
        return true;
}

bool containsDuplicateV2(vector<int> &nums)
{
    unordered_set<int> seen;

    for (int num : nums)
    {
        if (seen.count(num))
        {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    cout << containsDuplicate(nums) << endl;
    return 0;
}