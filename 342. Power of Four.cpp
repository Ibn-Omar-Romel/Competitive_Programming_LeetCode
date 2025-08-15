// Brute Force : 
// Time complexity: O(log n)
// Space complexity: O(1)
bool isPowerOfFour(int n) {
    
    while(n > 0) {
        if (n % 4 != 0)
            break;
        n /= 4;
    }

    return (n == 1)? true : false;
}

// Recursion:
// - Time complexity: O(log n)
// - Space complexity: O(log n)
bool isPowerOfFour(int n) {
    
    if(n == 1) {
        return true;
    }
    else if ( n < 1 )
        return false;

    if ( n % 4 != 0 )
        return false;
    
    return isPowerOfFour(n/4);
}