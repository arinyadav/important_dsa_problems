REFER - GFG

COMPANIES- ADOBE, AMAZON

Class Solution{
    public:
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    if (n==1)
    return 1;
    int sum=0,tsum=0;
    
    for(int i=0;i<n;i++)
    {
        tsum+=a[i];
    }
   
   for(int j=0;j<n;j++)
    {
        tsum-=a[j];
   
   if(sum==tsum)
        {
        return j+1;
    }
    sum+=a[j];
    }
    return -1;
    }

};
