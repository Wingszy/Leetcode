#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int moveZeroes(vector<int>& nums) {
		int n = nums.size(), left = 0, right = 0;
		for (right = 0; right < n; right++) {
			if (nums[right] != 0) {
				swap(nums[left], nums[right]);
				left++;
			}
		}
		return right;
	}
};