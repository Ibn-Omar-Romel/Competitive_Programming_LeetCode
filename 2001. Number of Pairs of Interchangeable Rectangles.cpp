#include<bits/stdc++.h>

using namespace std;

long long interchangeableRectanglestangles(vector<vector<int>>& rectangles) {

    int n = rectangles.size();
    long long count = 0;

    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++) {

        int a = rectangles[i][0], b = rectangles[i][1];
        int value = gcd(a, b);
        a = a / value;
        b = b / value;
        mp[{a, b}]++;
    }
    for (auto it : mp) {
        long long value = it.second;
        value--;
        count += ((value * (value + 1)) / 2);
    }
    return count;
}


int main() {

    
    return 0;
}