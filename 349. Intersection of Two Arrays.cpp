#include<bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> st1{nums1.begin(), nums1.end()};
    vector<int>vec;

    for (auto x : nums2) {

        if ( st1.find(x) != st1.end()) {
            vec.push_back(x);
            st1.erase(x);
        }
    }
    return vec;
}

int main() {


    return 0;
}