//Brute Force: Space Complexity -> O(n)
int fib(int n) {

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    vector<int> dp;
    dp.push_back(0);
    dp.push_back(1);

    int i = 2;

    while (i <= n) {
        dp.push_back(dp[i - 1] + dp[i - 2]);
        i++;
    }

    return dp[n];
}


//Brute Force: Space Complexity -> O(1)
int fib(int n) {

    if (n <= 1)
        return n;

    int a = 0;
    int b = 1;

    int c;

    for (int i = 2 ; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}



// Recursion : 
int fib(int n) {

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}



// Recursion + Memoization : 
int solve(int n, vector<int>& dp) {

    if (n <= 1) {
        return n;
    }

    if (dp[n] != -1 )
        return dp[n];

    return dp[n] = solve(n-1, dp) + solve(n-2, dp);
}


int fib(int n) {
    if (n <= 1)
        return n;

    vector<int>dp(n+1, -1);

    return solve(n, dp);
}
