#include<bits/stdc++.h>

using namespace std;

vector<int> getSumAbsoluteDifferences(vector<int>& nums) {

    int n = nums.size();
    vector<long long> prefixSum(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        total += nums[i];
        prefixSum[i] = total;
    }

    vector<int> vec(n);
    vec[0] = total - (nums[0] * n);

    for (int i = 1; i < n - 1; i++) {
        long long value = (i * nums[i]) - prefixSum[i - 1];
        long long temp = total - prefixSum[i];
        vec[i] = temp + value - ((n - i - 1) * nums[i]);
    }
    int i = n - 1;
    vec[i] = (i * nums[i]) - prefixSum[i - 1];

    return vec;
}

int main() {


    return 0;
}