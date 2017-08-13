vector<vector<int> > Solution::generate(int A) 
{
    vector<vector<int> > result(A,vector<int>(A));
    int i;
    for(i =0 ;i < A;i++)
    {
        result[i].resize(i+1);
        int j;
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                result[i][j] = 1;
            }
            else
            {
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }
    }
    return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

