vector<int> frequencySort(vector<int>& nums) {
    map<int,int>mp;
    for (auto x : nums) {
        mp[x]++;
    }
    map<int, vector<int>>mpp;
    for (auto it : mp) {
        mpp[it.second].push_back(it.first);
    }

    vector<int>result;
    for (auto it : mpp) {
        vector<int>temp = it.second;
        reverse(temp.begin(), temp.end());

        for (int i = 0; i < temp.size(); i++) {
            
            for (int j = 0; j < it.first; j++) {
                result.push_back(temp[i]);
            }
        }
    }
    return result;
}


vector<int> frequencySort(vector<int>& nums) {
    
    unordered_map<int, int>mp;
    for (auto x : nums) {
        mp[x]++;
    }

    sort(nums.begin(), nums.end(), [&](int a, int b){
        if (mp[a] != mp[b]) {
            return mp[a] < mp[b];
        }
        return a > b;
    });
    return nums;
}