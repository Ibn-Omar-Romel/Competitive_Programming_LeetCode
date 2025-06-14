#include<bits/stdc++.h>

using namespace std;


void rotate(vector<int>& nums, int k) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = nums.size();
    k = k % n; 

    reverse(begin(nums), end(nums));
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());



    // Using Additional Space:
    // vector<int> first;
    // vector<int> last;
    // int n = nums.size();
    // k = k % n; // for making k within the range [0,n]

    // for (int i = 0; i < n; i++) {

    //     if (i < n - k)
    //         last.push_back(nums[i]);
    //     else {
    //         first.push_back(nums[i]);
    //     }
    // }

    // for (int i = 0, j = 0; i < n; i++) {

    //     if (i < k)
    //         nums[i] = first[i];
    //     else {
    //         nums[i] = last[j];
    //         j++;
    //     }
    // }




    // By Reversing Array:
    // reverse(begin(nums), end(nums));

    // k = k % nums.size();

    // int l = 0;
    // int r = k-1;
    // while(l < r) {
    //     swap(nums[l],nums[r]);
    //     l++;
    //     r--;
    // }

    // l = k;
    // r = nums.size()-1;
    // while(l < r) {
    //     swap(nums[l],nums[r]);
    //     l++;
    //     r--;
    // }
}


int main() {


}