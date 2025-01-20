#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    int index = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[index - 1])
        {
            nums[index] = nums[i];
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        cout << nums[i] << " ";
    }

    return index;
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int lengthOfArr = removeDuplicates(nums);
    cout << "Length of the array after removing duplicates: " << lengthOfArr << endl;
    return 0;
}