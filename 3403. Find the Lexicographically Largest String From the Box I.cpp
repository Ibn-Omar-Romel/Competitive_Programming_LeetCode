#include<bits/stdc++.h>

using namespace std;

string answerString(string word, int numFriends) {
    
    int n = word.size();
    int maxLength = n - numFriends + 1;

    if (numFriends == 1)
        return word;

    string result = word.substr(0, maxLength);
    for (int i = 1; i < n; i++) {
        if (i + maxLength - 1 < n) {
            string currentSubstring = word.substr(i, maxLength);
            if (currentSubstring > result) {
                result = currentSubstring;
            }
        }
        else {
            int length = n - i;
            string currentSubstring = word.substr(i, length);
            if (currentSubstring > result) {
                result = currentSubstring; 
            } 
        }
    }
    return result;
}

int main() {

    int t;
    cin >> t;

    string s;
    cin >> s;

    int n;
    cin >> n;

    cout << answerString(s, n) << endl;
    return 0;
}