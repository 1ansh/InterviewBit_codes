vector<int> Solution::plusOne(vector<int> &A) 
{
    vector<int> result;
    int i;
    bool flag = false;
    for(i=0;i<A.size();i++)
    {
        if(A[i] == 0 && !flag)
        {
            continue;
        }
        flag = true;
        result.push_back(A[i]);
    }
    int sz = result.size();
    if(result.size()== 0)
    {
        result.push_back(1);
        return result;
    }
    if(A[A.size()-1] != 9)
    {
        result[result.size()-1]++;
        return result;
    }
    i=result.size()-1;
    while(result[i]==9)
    {
        result[i] = 0;
        if(i==0)
        {
            result[i] = 1;
            result.push_back(0);
            break;
        }
        i--;
    }
    if(result.size() == sz)
    {
        result[i]++;
    }
    
	return result;
}

