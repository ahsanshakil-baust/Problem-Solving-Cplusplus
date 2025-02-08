#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int myApproach(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    unordered_set<int> seen;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int product = nums[i] * nums[j];
            if (seen.count(product))
            {
                count++;
            }
            seen.insert(product);
        }
    }
    return count * 8;
}

int bruteForce(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int prod1 = nums[i] * nums[j];

            for (int k = i + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {

                    int prod2 = nums[k] * nums[l];

                    if (prod1 == prod2)
                    {
                        count++;
                    }
                }
            }
        }
    }

    return count * 8;
}

int bruteForceV2(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            int product = nums[i] * nums[j];
            unordered_set<int> seen;

            for (int k = i + 1; k < j; k++)
            {
                if (product % nums[k] == 0 && seen.count(product / nums[k]))
                {
                    count += 8;
                }
                seen.insert(nums[k]);
            }
        }
    }

    return count;
}

int tupleSameProduct(vector<int> &nums)
{
    unordered_map<int, int> productCount;
    int count = 0, n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int product = nums[i] * nums[j];
            count += 8 * productCount[product];
            productCount[product]++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {1, 2, 4, 5, 10};
    // cout << bruteForce(nums) << endl;
    // cout << bruteForceV2(nums) << endl;
    cout << tupleSameProduct(nums) << endl;

    return 0;
}