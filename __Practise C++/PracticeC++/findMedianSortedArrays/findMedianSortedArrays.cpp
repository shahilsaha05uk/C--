#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

//Given two sorted arrays nums1and nums2 of size mand n respectively, return the median of the two sorted arrays.
//
//The overall run time complexity should be O(log(m + n)).
//
//
//
//Example 1:
//
//Input: nums1 = [1, 3], nums2 = [2]
//Output : 2.00000
//Explanation : merged array = [1, 2, 3] and median is 2.
//Example 2 :
//
//	Input : nums1 = [1, 2], nums2 = [3, 4]
//	Output : 2.50000
//	Explanation : merged array = [1, 2, 3, 4] and median is(2 + 3) / 2 = 2.5.

void combineMap(vector<int>& numVec, map<int, int>& mNums);
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);

void combineMap(vector<int>& numVec, map<int, int>& mNums)
{
	for (size_t i = 0; i < numVec.size(); i++)
	{
		mNums.emplace(pair<int, int>(numVec[i], numVec[i]));
	}
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
	map<int, int> mNums;	// key: vecNum, val: index
	int median = 0;

	combineMap(nums1, mNums);
	combineMap(nums2, mNums);
	
	// check if the map is populated properly
	for (auto it: mNums)
	{
		cout << "key: " << it.first << ", val: "<< it.second << endl;
	}

	// if odd
	if ((mNums.size() % 2 == 1))
	{
		int midIndex = (mNums.size() / 2) + 1;
		int midVal = mNums.a[midIndex];
		float mapVal = static_cast<float>(midVal);
		return mapVal;
	}
	else
	{
		float midIndex;
	}

	//else if even

	return 0;
}

// 1,2,3,5,7

int main()
{
	vector<int> nums1 = {1,4 };
	vector<int> nums2 = { 2,7,5 };

	cout << "Median: " << findMedianSortedArrays(nums1, nums2) << endl;
	//cout << "Median: " << findMedianSortedArrays(nums1, nums2) << endl;
}
