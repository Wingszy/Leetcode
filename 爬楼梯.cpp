#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		if (n <= 1) return n;
		vector<int> dp(n + 1);
		dp[1] = 1;
		dp[2] = 2;
		for (int i = 3; i <= n; i++) { // i��3��ʼ
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[n];
	}
};