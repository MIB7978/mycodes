vector<int> Solution::maxset(vector<int> &A) {
    long long len ,start,startind,temp,mx;
    len=start=startind=temp=mx=startind=-1;
    long long  i =0;
    long long  n = A.size();
    while(i<n)
    {
        if(A[i]<0)
        {
            temp=-1;
            start=-1;
        }
        else
        {
            if(temp==-1)
            {
                temp=A[i];
                start = i;
            }
            else
            temp+=A[i];
        }
        
        if(mx < temp)
        {
            startind=start;
            mx = temp;
            len = i-start+1;
        }
        else if(mx==temp && len<i-start+1)
        {
            startind=start;
            len = i-start+1;
        }
        else;
        i++;
    }
    vector<int> v;
    if(startind==-1)
    return {};
    for(int i = startind ;i<startind+len;i++)
    {
        v.push_back(A[i]);
    }
    return v;
}
