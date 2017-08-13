int Solution::solve(vector<int> &A) 
{
    int ans = -1;
    sort(A.begin(),A.end());
    for(int i = 0;i<A.size();i++)
    {
        if(i<A.size()-1)
        {
            if(A[i+1] == A[i])
                continue;
        }
        if(A[i] == A.size()-i-1)
        {
            ans = 1;
        }
    }
    return ans;
}

