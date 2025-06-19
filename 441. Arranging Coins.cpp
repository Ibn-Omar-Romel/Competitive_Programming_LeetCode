int arrangeCoins(int n) {
        
    int l = 1, r = n;
    int ans = 0;
    while( l <= r) {

        long long mid = l + (r-l) / 2; // n can be very large
        long long total = (mid * (mid + 1)) / 2;

        if (total <= n) { // after make mid number of staircase, there are still values left, so we can go for a bigger ans.
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return ans;
}