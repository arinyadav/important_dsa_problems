 int findPeakElement(vector<int>& nums) {
        int n=nums.size();
          if(n==1) 
          return 0;
        
        if(n==2) {
            if(nums[0]>nums[1])
            return 0;
            else
            return 1; 
        }

         if(nums[0]>nums[1])  return 0;
        
        if(nums[n-1]>nums[n-2])  
            return n-1;
        

        int l = 1, r = nums.size()-2, mid;       

        while(l<=r){
            mid = l+(r-l)/2;
            if (nums[mid]>nums[mid+1] 
                    && nums[mid]>nums[mid-1]){
                    return mid;
                }
                else if(nums[mid+1]>=nums[mid-1])
                {
                    l = mid+1;
                }
                else
                {
                    r = mid-1;
                }
        }
        return -1;
    }
