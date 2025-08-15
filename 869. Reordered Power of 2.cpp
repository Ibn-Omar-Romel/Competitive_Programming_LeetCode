//Approach 1: next_permutation Function
//Time Complexity : O(d * d!) -> d is the number of digits
//Space Complexity : O(d)
bool reorderedPowerOf2(int n) {

    if ((n && !(n & (n - 1))) == 1)
        return true;

    vector<int> vec;
    while (n > 0) {
        vec.push_back(n % 10);
        n /= 10;
    }

    sort(vec.begin(), vec.end());
    do {
        int num = 0;
        for (auto a : vec) {
            num = (num * 10) + a;
        }

        string s = to_string(num);
        if ((num && !(num & (num - 1))) == 1 and vec.size() == s.size()) {

            return true;
        }
    } while (next_permutation(vec.begin(), vec.end()));

    return false;
}


// Approach 2 : 
//Time Complexity : O(1)
//Space Complexity : O(1)
string sortDigits(int n) {

    string s = to_string(n);
    sort(s.begin(), s.end());
    return s;
}

bool reorderedPowerOf2(int n) {

    string s = sortDigits(n);
    for (int i = 0; i < 31; i++) {
        int power = 1 << i;
        if (s == sortDigits(power)) {
            return true;
        }
    }
    return false;
}