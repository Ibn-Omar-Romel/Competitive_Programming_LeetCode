#include<bits/stdc++.h>

using namespace std;

int repeatedStringMatch(string a, string b) {
    string repeated = a;
    int count = 1;
    while (repeated.size() < b.size()) {
        repeated += a;
        count++;
    }

    if (repeated.find(b) != string::npos)
        return count;

    repeated += a; 
    if (repeated.find(b) != string::npos)
        return count + 1;

    return -1;
}

int main() {


    return 0;
}