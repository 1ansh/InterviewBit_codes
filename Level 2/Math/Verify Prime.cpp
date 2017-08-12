int Solution::isPrime(int A) {
    int flag = 1;
    if(A<2)
    {
        return 0;
    }
    for(int i = 2;i<=int(sqrt(A));i++)
    {
        if(A%i==0)
        {
            flag = 0;
        }
    }
    return flag;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

