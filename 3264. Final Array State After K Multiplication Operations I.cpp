#include<bits/stdc++.h>

using namespace std;

vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    while(k--) {
        auto minvalue = min_element(nums.begin(), nums.end());
        *minvalue *= multiplier;
    }
    return nums;
}

int main() {

    return 0;
}