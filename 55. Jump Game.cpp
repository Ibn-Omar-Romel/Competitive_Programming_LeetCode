#include<bits/stdc++.h>

using namespace std;


// int t[10001];
// bool Solve(vector<int>& nums, int n, int index) {

//     if (index == n - 1)
//         return true;

//     if (t[index] != -1) {
//         return t[index];
//     }

//     for (int i = 1; i <= nums[index]; i++) {
//         if (Solve(nums, n, index + i) == true)
//             return t[index] = true;
//     }
//     return t[index] = false;
// }
// bool canJump(vector<int>& nums) {
//     memset(t, -1, sizeof(t));
//     return Solve(nums, nums.size(), 0);
// }


bool canJump(vector<int>& nums) {
    int n=nums.size();

    int reachable=0;
    for(int i=0;i<n;i++){
        if(reachable<i){
            return false;
        }
        reachable=max(reachable,i+nums[i]);
    }
    return true;
}


int main() {


}