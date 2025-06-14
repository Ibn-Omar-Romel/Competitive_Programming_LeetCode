#include<bits/stdc++.h>

using namespace std;

string maximumOddBinaryNumber(string s) {
        
    int n = s.size();
    int one = 0;
    for (auto x : s) {
        if (x == '1')
            one++;
    }
    int zero = n - one;

    string st = "";
    while(one > 1) {
        st.push_back('1');
        one--;
    }
    while(zero > 0) {
        st.push_back('0');
        zero--;
    }
    st.push_back('1');
    return st;
}

int main() {

    string s;
    cin >> s;

    cout << maximumOddBinaryNumber(s) << endl;
    return 0;
}