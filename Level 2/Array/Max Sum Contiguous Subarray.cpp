int Solution::maxSubArray(const vector<int> &A) {
    int currmax = A[0],maxsofar = A[0],i;
    for(i=1;i<A.size();i++)
    {
        currmax = max(A[i],currmax + A[i]);
        maxsofar = max(maxsofar,currmax);
    }
    return maxsofar;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

