vector<vector<int> > Solution::generateMatrix(int A) 
{
    vector<vector<int> > result(A,vector<int>(A));
    long long int n = A,m = A,l =0,k= 0,num = 1,i;
    while(k<m && l<n)
    {
        for(i = l;i<n;i++)
        {
            result[k][i] = num;
            num++;
        }
        k++;
        for(i=k;i<m;i++)
        {
            result[i][n-1] = num;
            num++;
        }
        n--;
        if(k<m)
        {
            for(i=n-1;i>=l;i--)
            {
                result[m-1][i] = num;
                num++;
            }
            m--;
        }
        if(l<n)
        {
            for(i=m-1;i>=k;i--)
            {
                result[i][l] = num;
                num++;
            }
            l++;
        }
    }
    return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
