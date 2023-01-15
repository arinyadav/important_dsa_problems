class Solution {
public:
   
      int mySqrt(int x) {

int s=0;
      int e= x;

      long long int mid= s+(e-s)/2;
      
      long long int ans=0;

      while(s<=e)
      {
          long long int square=mid*mid;

          if(x==square)
          {
              return mid;
          }

          else if(square<x)
          {
            ans=mid;
            s=mid+1;
          }
      
          else
          {
           e=mid-1;
          }

          mid=s+(e-s)/2;
      }

      return ans; 
    }
};
