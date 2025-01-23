#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(vector<int> &arr)
{
    int start = 0;
    int n = arr.size();
    int end = n - 1;

    if (n == 1)
        return arr[0];

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid == 0 && arr[0] != arr[1])
            return arr[mid];
        if (mid == n - 1 && arr[n - 1] != arr[n - 2])
            return arr[mid];

        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            return arr[mid];

        if (mid % 2 == 0)
        {

            if (arr[mid] == arr[mid - 1])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << findSingleElement(arr) << endl;

    return 0;
}