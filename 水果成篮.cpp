#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
	int totalFruit(vector<int>& fruits) {
		//求只包含两个不同的数字，且长度最长的子串
		//双指针中，用一个指针i来枚举端点，另一个指针是和i相关的，是靠近i最左的且和i之间只有两个元素的位置
		int result = 0, sublen = 0;
		unordered_map<int, int> basket;
		for (int i = 0, left = 0; i < fruits.size(); i++) {
			basket[fruits[i]]++;
			sublen++;
			while (basket.size() > 2) {
				basket[fruits[left]]--;
				if (basket[fruits[left]] == 0) basket.erase(fruits[left]);
				left++;
				sublen--;//这是在清零，因为之前的满足条件的最大max已经实时更新到result中了
			}
			if (sublen > result) result = sublen;
		}
		return result;
	}
};