#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[idx--] = nums1[i--];
        }
        else
        {
            nums1[idx--] = nums2[j--];
        }
    }

    while (j >= 0)
    {
        nums1[idx--] = nums2[j--];
    }
}

int main()
{
    vector<int> nums1 = {1};
    vector<int> nums2 = {};
    int m = 1, n = 0;
    merge(nums1, m, nums2, n);

    for (int num : nums1)
    {
        cout << num << endl;
    }

    return 0;
}