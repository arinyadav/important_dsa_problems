LEETCODE 34 :--

vector<int> searchRange(vector<int>& nums, int target) {
          int low = 0,hi = nums.size()-1;
          int idx1=-1,idx2=-1;
          vector<int>ans;
    while(low<=hi){
        int mid = (hi+low)/2;
    
        if(nums[mid] == target){
            idx1 = mid;
            hi=mid-1;
        
        }
    
        else if(nums[mid] < target ){
            low=mid+1;
        }
       
        else{
            hi=mid-1;
        }
    }
    
    int low1 = 0,high1 = nums.size()-1;
    
    while(low1 <= high1){
        int middle = (high1+low1)/2;
        if(nums[middle] == target){
            idx2 = middle;
            low1 = middle+1;
        }
        else if(nums[middle] < target ){
            low1 = middle+1;
            
        }
        else{
            high1 = middle-1;
        }
    }
    ans.push_back(idx1);
    ans.push_back(idx2);
    return ans;
    
}
