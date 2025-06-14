#include<bits/stdc++.h>

using namespace std;



int majorityElement(vector<int>& nums) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int elem = nums[0];
    int count = 0;

    for (int x : nums) {
        if (elem == x) {
            count++;
        } else {
            count--;
            if (count == 0) {
                elem = x;
                count = 1;
            }
        }
    }
    return elem;


    //Using Map:
    // Time Complexity: O(n)
    // Space Complexity: O(n)

    // map<int,int>mp;
    // for(auto& x : nums) {
    //     mp[x]++;
    // }

    // int ma = 0;
    // int ans = 0;
    // int n = nums.size();
    // for (auto& a : mp) {

    //     if ( a.second >= n/2 and ma <= a.second) {
    //         ma = max(ma,a.second);
    //         ans = a.first;
    //     }  
    // }
    // return ans;


    // Brute Force Approach:
    // Time Complexity: O(nlog n)
    // Space Complexity: O(1)

    // sort(begin(nums), end(nums));  // sorting function takes O(n log n)

    // int n = nums.size(), count = 1, ans = 0, ansCount = 0;
    // for ( int i = 0; i < n - 1; i++) {
    //     if ( nums[i] == nums[i+1] ) {
    //         count++;
    //     }
    //     else {
    //         if ( count > ansCount ) {
    //             ansCount = count;
    //             ans = nums[i];
    //         }
    //         count = 1;
    //     }
    // }

    // if ( count > ansCount ) {
    //     ansCount = count;
    //     ans = nums[n-1];
    // }

    // return ans;



}


int main() {


}