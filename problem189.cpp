#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    vector<int> temp = nums;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }

    nums = temp;
}

int main()
{

    vector<int> nums = {-1, -100, 3, 99};
    int k = 2;
    rotate(nums, k);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}