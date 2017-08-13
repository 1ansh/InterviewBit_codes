vector<int> Solution::maxset(vector<int> &A) 
{
    long long int maxsum = 0,maxl = 0,sum = 0,l = 0,last;
    long long int i,j;
    for(i=0;i<A.size();i++)
    {
        if(A[i] < 0)
        {
            sum = 0;
            l = 0;
            continue;
        }
        sum = sum + A[i];
        l  = l + 1;
        if(sum > maxsum)
        {
            last = i;
            maxsum = sum;
            maxl = l;
        }
        else if(sum == maxsum && l>maxl)
        {
            last = i;
            maxl = l;
        }
    }
    vector<int> result(maxl);
    j=0;
    for(i = last;i>last-maxl;i--)
    {
        result[j] = A[i];
        j++;
    }
    reverse(result.begin(),result.end());
//    reverse(result.begin(),result.end());
    return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
