   vector<vector<int>> fourSum(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
        set<vector<int>> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int start = j+1,end = n-1;
                while(start<end){
                    long long crSum = (long long)nums[i]+nums[j]+nums[start]+nums[end];
                    if(crSum == target){
                        st.insert({nums[i],nums[j],nums[start],nums[end]});
                        end--;
                    }else if(crSum>target) end--;
                    else start++;
                }
            }
            
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
