string Solution::solve(int n) {
    
    int car =0;
    vector<int> v;
    v.push_back(1);
    for(int i=2;i<=n;i++)
    {
         car =0;
         for(int j = 0;j<v.size();j++)
         {
              int res = v[j]*i+car;
              car = res/10;
              v[j]=res%10;
         }
         while(car)
         {
             v.push_back(car%10);
             car=car/10;
             
         }
    }
    string s="" ;
    for(int i=v.size()-1;i>=0;i--)
    {
        s+=(v[i]+'0');
    }
    return s;
}
