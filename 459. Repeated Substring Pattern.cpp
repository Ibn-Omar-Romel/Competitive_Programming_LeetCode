#include<bits/stdc++.h>

using namespace std;

bool repeatedSubstringPattern(string s) {
        
    int n = s.size();
    string st = "";
    for (int i = 0; i < n/2; i++) {
        st.push_back(s[i]);

        if (n % (i+1) == 0) {
            string temp = "";
            for (int k = 1; k <= n/(i+1); k++) {
                temp += st;
            }
            if (temp == s)
                return true;
        }
        
    }
    return false;
}

int main() {

    string s;
    cin >> s;
    if (repeatedSubstringPattern(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}