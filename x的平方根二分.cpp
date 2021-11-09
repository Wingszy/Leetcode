#include<iostream>
using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		int l = 0;
		int r = x, ans = 9;
		while (l <= r) {
			int m = l + (r - l) / 2;
			if ((long)m*m <= x) {
				ans = m;
				l = m + 1;
			}
			else {
				r = m - 1;
			}
		}
		return ans;
	}
};

int main() {
	int x = 22;
	int result;
	Solution sol;
	result=sol.mySqrt(x);
	cout << result << endl;

	return 0;
}