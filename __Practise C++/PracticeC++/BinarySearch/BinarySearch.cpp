#include <iostream>
#include <vector>

using namespace std;

int SearchOddVector(vector<int>& nums, int target);
int SearchEvenVector(vector<int>& nums, int target);



int search(vector<int>& nums, int target) {

    if (nums.size() % 2 == 1)
    {
        return SearchOddVector(nums, target);
    }

    return SearchEvenVector(nums, target);

}

int SearchOddVector(vector<int>& nums, int target)
{
    return -1;
}

int SearchEvenVector(vector<int>& nums, int target)
{
    int index = nums.size() / 2;

    if (nums[index] == target || nums[index] < target) return index;

    index = index / 2;

    return -1;
}


int main()
{
    vector<int> nums = { -1,0,3,5,9,12 };

    cout << search(nums, 9) << endl;
    //cout << search(nums, 2) << endl;

}
