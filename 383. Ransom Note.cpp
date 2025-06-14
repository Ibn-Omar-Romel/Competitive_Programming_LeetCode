#include<bits/stdc++.h>

using namespace std;

bool canConstruct(string r, string m) {

    // using additional space : -3ms
    int a[26] = {0};
    int b[26] = {0};

    for (char it : r) {
        a[it - 'a']++;
    }
    for (char it : m) {
        b[it - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (a[i] > b[i])
            return false;
    }
    return true;



    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    // Using Brute Force: - 17ms
    // sort(r.begin(), r.end());
    // sort(m.begin(), m.end());

    // int j = 0;
    // for( int i = 0 ; i < m.size(); i++ ) {

    //     if ( m[i] == r[j] )
    //         j++;

    //     if(j == r.size())
    //         return true;
    // }
    // return false;



    // Using Map: - 22ms
    // map<char, int> mp1;
    // map<char, int> mp2;

    // for (auto x : r) {
    //     mp1[x]++;
    // }
    // for (auto x : m) {
    //     mp2[x]++;
    // }

    // for (auto it : mp1) {

    //     if (mp2.find(it.first) == mp2.end() or mp2[it.first] < it.second)
    //     {
    //         return false;
    //     }
    // }
    // return true;
}

int main() {

}