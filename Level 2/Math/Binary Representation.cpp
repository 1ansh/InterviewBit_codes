string Solution::findDigitsInBinary(int A) 
{
    string s;
    if(A==0)
    {
        s=s+'0';
        return s;
    }
    while(A)
    {
        if(A%2==1)
        {
            s=s+'1';
        }
        else
        {
            s=s+'0';
        }
        A=A/2;
    }
    reverse(s.begin(),s.end());
    return s;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

