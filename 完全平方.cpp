#include<iostream>
using namespace std;

class Solution {
public:
	bool isPerfectSquare(int num) {
		int l = 0, r = num, ans = -1;
		while (l <= r) {
			int m = l + (r - l) / 2;
			if ((long)m*m < num) {
				l = m + 1;
			}
			else if ((long)m*m == num) {
				return true;
			}
			else {
				r = m - 1;
			}
		}
		return false;

	}
};
int main() {
	Solution sol;
	bool result;
	result = sol.isPerfectSquare(25);
	cout << result << endl;
    return 0;
}