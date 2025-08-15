vector<int> minOperations(string boxes) {
        
    set<int>st;
    for(int i = 0; i < boxes.size(); i++) {
        if (boxes[i] == '1')
            st.insert(i);
    }
    vector<int>vec;
    for (int i = 0; i < boxes.size(); i++) {
        int count = 0;
        for (auto it : st) {
            if (i != it) {
                count += abs(it - i);
            }
        }
        vec.push_back(count);
    }
    return vec;
}