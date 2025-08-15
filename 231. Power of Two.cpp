//Approach 1: 

bool isPowerOfTwo(int n) {

    if ( n <= 0 )
        return false;

    double b = log2(n);
    return b == (int)b ;
}

// Approach 2:
bool isPowerOfTwo(int n) {
    
    return (n && !(n & (n-1)));
}