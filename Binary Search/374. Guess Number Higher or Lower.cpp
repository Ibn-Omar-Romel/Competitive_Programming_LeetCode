int guessNumber(int n) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int l = 1;
    int r = n;
    int m = 0;

    while (l <= r) {

        m = l + (r - l) / 2;

        if (guess(m) == 0) { // guess is there built in function
            break;
        } else if (guess(m) == -1) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return m;
}