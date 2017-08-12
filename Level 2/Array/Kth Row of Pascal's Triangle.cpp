vector<int> Solution::getRow(int A) {
    vector<int> result(A+1);
    result[0] = 1;
    if(A==0)
    {
        return result;
    }
    int j = 1;
    for(int i =0;i<A;i++)
    {
        result[j] = result[i] * (A-i) / (i+1);
        j++;
    }
    return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

