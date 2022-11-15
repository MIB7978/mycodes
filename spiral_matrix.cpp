vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
    int n = A.size();
    int m = A[0].size();
    int left=0,right =m-1,top=0,bottom = n-1;
    int dir = 0;
    vector<int> v;
    while(top<=bottom && left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            v.push_back(A[top][i]);
            top++;
        }
        else if(dir==1)
        {
            for(int i=top;i<=bottom;i++)
            v.push_back(A[i][right]);
            right--;
        }
        else if(dir==2)
        {
            for(int i=right;i>=left;i--)
            v.push_back(A[bottom][i]);
            bottom--;
        }
        else{
            for(int i=bottom;i>=top;i--)
            v.push_back(A[i][left]);
            left++;
        }
        dir = (dir+1)%4;
    }
    return v;
}
