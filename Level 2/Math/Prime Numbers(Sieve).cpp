vector<int> Solution::sieve(int n)
{
    vector<int> prime(n+1,1);
    vector<int> result;
    prime[0]=0;
    prime[1]=0;
    for(int i =2;i<=n;i++)
    {
        if(prime[i]!=0)
        {
            for(int j=2;i*j<=n;j++)
            {
                prime[i*j]=0;
            }
        }
    }
    for(int i = 0;i<=n;i++)
    {
        if(prime[i]==1)
        {
            result.push_back(i);
        }
    }
    return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

