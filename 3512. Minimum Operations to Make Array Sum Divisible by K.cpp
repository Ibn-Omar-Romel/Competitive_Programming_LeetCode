#include<bits/stdc++.h>

using namespace std;

int minOperations(vector<int>& nums, int k) {
        
    int sum = 0;
    for(auto x : nums) 
        sum += x;

    return sum % k;
}

int main() {

    int n;
    cin >> n;

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int k;
    cin >> k;

    cout << minOperations(vec, k) << endl;
    return 0;
}