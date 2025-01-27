#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxSubarray(vector<int> &arr)
{
    // int n = arr.size();
    // int maxSum = INT_MIN;
    // int currentSum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     currentSum += arr[i];
    //     maxSum = max(currentSum, maxSum);
    //     if (currentSum <= 0)
    //     {
    //         currentSum = 0;
    //     }
    // }

    // return maxSum;

    int maxSum = arr[0], currentSum = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-2, -1};
    cout << maxSubarray(arr) << endl;
    return 0;
}