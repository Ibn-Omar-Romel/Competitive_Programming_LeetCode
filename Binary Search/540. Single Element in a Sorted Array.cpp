#include<bits/stdc++.h>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {

    int l = 0, r = nums.size()-1;

    while(l < r) {
        int mid = l + (r-l)/2;

        if (mid % 2) {
            mid--;
        }
        
        if (nums[mid] == nums[mid+1]) {
            l = mid + 2;
        }
        else {
            r = mid;
        }
    }
    return nums[l];
}

int main() {

    int n;
    cin >> n;

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << singleNonDuplicate(vec) << endl;

    return 0;
}