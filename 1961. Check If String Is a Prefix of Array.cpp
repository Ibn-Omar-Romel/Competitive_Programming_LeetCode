#include<bits/stdc++.h>

using namespace std;

bool isPrefixString(string s, vector<string>& words) {
       
    string st = "";
    for (auto w : words) {
        st += w;

        if(st == s)
            return true;
    }
    return false;
}

int main() {

    int n;
    cin >> n;

    vector<string>words(n);
    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    string s;
    cin >> s;

    bool answer = isPrefixString(s, words);
    cout << answer << endl;

    return 0;
}