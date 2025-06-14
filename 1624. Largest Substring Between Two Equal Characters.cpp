#include<bits/stdc++.h>

using namespace std;

int maxLengthBetweenEqualCharacters(string s) {
    map<char, int> mp;
    int maxCount = -1;
    for (int i = 0; i < s.size(); i++) {
        if (mp.find(s[i]) != mp.end()) {
            int value = i - mp[s[i]] - 1;
            maxCount = max(value, maxCount);
        } else {
            mp[s[i]] = i;
        }
    }
    return maxCount;
}

int main() {


    return 0;
}