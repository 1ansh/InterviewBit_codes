vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
    int i,l = 0,k = 0,m,n;
    n = A[0].size();
    m = A.size();
    vector<int> result;
    
    while(k<m && l<n)
    {
        for(i = l;i<n;i++)
        {
            result.push_back(A[k][i]);
        }
        k++;
        for(i=k;i<m;i++)
        {
            result.push_back(A[i][n-1]);
        }
        n--;
        if(k<m)
        {
            for(i=n-1;i>=l;i--)
            {
                result.push_back(A[m-1][i]);
            }
            m--;
        }
        if(l<n)
        {
            for(i=m-1;i>=k;i--)
            {
                result.push_back(A[i][l]);
            }
            l++;
        }
    }
    return result;
}
