#include<bits/stdc++.h>

using namespace std;

// string clearStars(string s) {
//     map<char, int>mp;
//     for (auto x : s) {
//         if (x != '*')
//             mp[x]++;
//     }

//     int n = s.size();
    
//     set<int>st;
//     bool flag  = false;
//     for (int i = n-1; i >= 0; i--) {
//         if (s[i] == '*') {
//             flag = true;
//             for (int j = i-1; j >= 0; j--) {
//                 if (s[j] == mp.begin()->first and st.find(j) == st.end()) {
//                     st.insert(j);
//                     mp[s[j]]--;
//                     if (mp[s[j]] == 0)
//                         mp.erase(s[j]);

//                     break;
//                 }
//             }
//         } else if (flag) {
//             mp[s[i]]--;
//             if (mp[s[i]] == 0)
//                 mp.erase(s[i]);

//         }
//     }

//     // for(auto it : st) {
//     //     cout << it << " ";
//     // }
//     // cout << endl;


//     string ans = "";
//     for (int i = 0; i < n; i++) {
//         if (st.find(i) == st.end() and s[i] != '*')
//             ans.push_back(s[i]);
//     }
//     return ans;
// }


string clearStars(string s) {
    map<char, int> mp;
    for (auto x : s) {
        if (x != '*')
            mp[x]++;
    }

    int n = s.size();
    set<int> st;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '*') {
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == mp.begin()->first && st.find(j) == st.end()) {
                    st.insert(j);
                    mp[s[j]]--;
                    if (mp[s[j]] == 0)
                        mp.erase(s[j]);
                    break;
                }
            }
        } 
        else if (st.find(i) == st.end()) {
            mp[s[i]]--;
            if (mp[s[i]] == 0)
                mp.erase(s[i]);
        }
    }

    string ans = "";
    for (int i = 0; i < n; i++) {
        if (st.find(i) == st.end() && s[i] != '*')
            ans.push_back(s[i]);
    }
    return ans;
}


int main() {

    string s;
    cin >> s;

    string st = clearStars(s);
    cout << st << endl;

    return 0;
}