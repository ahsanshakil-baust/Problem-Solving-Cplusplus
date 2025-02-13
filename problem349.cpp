#include <iostream>
#include <vector>
#include <set>
#include <iterator>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    set<int> sortedNums1(nums1.begin(), nums1.end());
    set<int> sortedNums2(nums2.begin(), nums2.end());

    vector<int> result;

    for (int x : sortedNums2)
    {
        if (sortedNums1.count(x))
        {
            result.push_back(x);
        }
    }
    return result;
}

int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> result = intersection(nums1, nums2);

    for (int x : result)
    {
        cout << x << endl;
    }
    return 0;
}