#include<bits/stdc++.h>

using namespace std;

int main() {


    int count = 0;
    vector<int>vec = {1,2,3,3,3};

    auto it = lower_bound(vec.begin(), vec.end(), 3);
    auto ti = upper_bound(vec.begin(), vec.end(), 3);
    cout << it - vec.begin() << endl;
    cout << ti - vec.begin() << endl;

    return 0;
}