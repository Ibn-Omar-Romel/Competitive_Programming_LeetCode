#include<bits/stdc++.h>

using namespace std;

int minSwaps(string s) {
    int n = s.size();
    stack<char> stk;
    for (int i = 0; i < n; i++) {

        if (!stk.empty() and s[i] == ']' and stk.top() == '[') {
            stk.pop();
        } else {
            stk.push(s[i]);
        }
    }
    int value = stk.size() / 2;
    value = ceil((double)value / (double)2);
    return value;
}

int main() {

    return 0;
}