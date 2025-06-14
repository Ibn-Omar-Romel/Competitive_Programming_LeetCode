#include<bits/stdc++.h>

using namespace std;

long long gridGame(vector<vector<int> >& grid) {
        
    int n = grid[0].size();

    long long upper = 0;
    long long lower = 0;
    for (int i = 0; i < n; i++) {
        upper += grid[0][i];
        lower += grid[1][i];
    }

    //cout << upper << " " << lower << endl;

    long long ans = 0;
    long long remainLeft = 0;
    long long remainRight = 0;

    long long extra = 0;
    for (int i = 0; i < n; i++) {
        
        if (i == 0) {
            remainLeft = 0;
            remainRight = upper-grid[0][i];
            
        }
        else {
            remainLeft += grid[1][i-1];
            remainRight -= (extra +grid[0][i]);
            
        }
        extra += grid[0][i];

        ans = min(remainLeft, remainRight);
    }

    
    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<vector<int> > vec(2, vector<int>(n));
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> vec[i][j];
        }
    }

    cout << gridGame(vec) << endl;

    return 0;
}