#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		int k = nums.size() - 1;
		vector<int>result(nums.size(), 0);//创建一个相同长度的数组
		//首尾双指针不断比较来排序
		for (int i = 0, j = nums.size() - 1; i <= j;) {
			if (nums[i] * nums[i] < nums[j] * nums[j]) {
				result[k--] = nums[j] * nums[j];
				j--;
			}
			else {
				result[k--] = nums[i] * nums[i];
				i++;
			}
		}
		return result;
	}
};