#include<bits/stdc++.h>

using namespace std;

string minRemoveToMakeValid(string s) {
        
    int count = 0;
    for ( int i = 0 ; i < s.size() ; i++ ) {

        if ( s[i] == '(' ) 
            count++;
        else if ( s[i] == ')' ) {
            
            if ( count > 0 )
                count--;
            else 
                s[i] = '0';
        }
    }

    count = 0;
    for ( int i = s.size()-1 ; i >= 0 ; i-- ) {

        if ( s[i] == ')' ) 
            count++;
        else if ( s[i] == '(' ) {
            
            if ( count > 0 )
                count--;
            else 
                s[i] = '0';
        }
    }

    string st = "";
    for( auto &x : s ) {
        if ( x != '0' )
            st = st + x;
    }

    return st;
}

int main() {

    string s;
    cin >> s;

    cout << minRemoveToMakeValid(s) << endl;
}