vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<pow(2,n);i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
               if((1<<j)&i)
                   v.push_back(nums[j]);
            }
            ans.push_back(v);
            
        }
        return ans;
    }
