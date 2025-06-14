#include<bits/stdc++.h>

using namespace std;

bool makeEqual(vector<string>& words) {

    int arra[26] = {0};
    for (auto s : words) {
        for (int i = 0; i < s.size(); i++) {
            arra[s[i] - 'a']++;
        }
    }
    int n = words.size();
    for (int i = 0; i < 26; i++) {
        if (arra[i] == 0)
            continue;
        else if (arra[i] % n != 0) {
            return false;
        }
    }
    return true;
}

int main() {


    return 0;
}