#include<bits/stdc++.h>

using namespace std;

int countPrefixes(vector<string>& words, string s) {
        
    int count = 0;
    for (auto w : words) {
        int i = 0;
        while(i < w.size()) {
            if (w[i] != s[i]) {
                break;
            }
            i++;
        }
        if (i == w.size()) {
            count++;
        }     
    }
    return count;
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

    int answer = countPrefixes(words, s);
    cout << answer << endl;

    return 0;
}