#include <iostream>
#include <vector>
using namespace std;

int findSingleNumber(vector<int> &arr)
{
    int ans = 0;

    for (int val : arr)
    {
        ans ^= val;
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 2, 1};
    cout << findSingleNumber(arr) << endl;
    return 0;
}