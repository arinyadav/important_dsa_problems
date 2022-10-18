REFER GFG AND SEE ALL OPTIMISED SOLUTIONS

int rain(int a[],int n) {

int left[n],right[n],ans=0;
left[0]=a[0];
right[n-1]=a[n-1];

for(int i=1;i<n;i++)
left[i]=max(left[i-1],a[i]);

for(int i=n-2;i>=0;i--)
right[i]=max(right[i+1],a[i]);

for(int i=0;i<n;i++)
ans+=(min(left[i],right[i])-a[i]); 
  
return ans;
