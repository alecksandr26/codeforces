#include <bits/stdc++.h>

#define st size_t
#define ll long long
#define ul unsigned long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define abs(a) (((a) > 0) ? (a) : -1 * (a))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
template<typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
using namespace std;

// url = https://leetcode.com/problems/rotate-array/

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		ios;
		k = k % nums.size();
		vector<int> buffer(k);

		// copy the first piece
		copy(nums.end() - k, nums.end(), buffer.begin());
		
		// paste the second piece
		copy(nums.begin(), nums.end() - k, nums.begin() + k);
		
		// paste the first piece
		copy(buffer.begin(), buffer.end(), nums.begin());
	}
};


