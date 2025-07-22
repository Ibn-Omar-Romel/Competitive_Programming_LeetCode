bool wordPattern(string pattern, string s) {
        
    s += " ";
    vector<string> st;
    string temp = "";
    for ( int i = 0 ; i < s.size(); i++ ) {

        if ( s[i] == ' ') {
            st.push_back(temp);
            temp = "";
        }
        else {
            temp += s[i];
        }
    }
    

    if ( pattern.size() != st.size() )
        return false;
        
    map<string, char >mp;
    int arra[26] = {0};

    for ( int i = 0 ; i < st.size(); i++ ) {

        if ( mp.find(st[i]) == mp.end() ) {

            if ( arra[pattern[i] - 'a'] == 1 )
                return false;

            mp[st[i]] = pattern[i];
            arra[pattern[i] - 'a'] = 1;
        }
        else if ( mp[st[i]] != pattern[i]){
            return false;
        }

    }
    return true;
}