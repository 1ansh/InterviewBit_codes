int Solution::trailingZeroes(int n) {
    int count = 0;
    for(int i=5;n/i>=1;i*=5)
    {
        count+=n/i;
    }
    return count;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

