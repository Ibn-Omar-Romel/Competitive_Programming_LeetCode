#include<bits/stdc++.h>

using namespace std;

int xorOperation(int n, int start) {

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        vec[i] = start + (2*i);
    } 
    int x = vec[0];

    for (int i = 1; i < n; i++) {
        x ^= vec[i];
    }
    return x;
}

int main() {

    int n, start;
    cin >> n >> start;

    cout << xorOperation(n, start);
    return 0;
}