class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();
        int c1=0,c2=0;
        int e1=INT_MAX, e2=INT_MAX;

        for(int i=0;i<n;i++) {
            if(nums[i] == e1) {
                c1++;
            }
            else if(nums[i] == e2) {
                c2++;
            }
            else if(c1 == 0) {
                c1 = 1;
                e1 = nums[i];
            }
            else if(c2 == 0) {
                c2 = 1;
                e2 = nums[i];
            }
            else {
                c1--; c2--;
            }
        }

        c1=c2=0; 
        for(int num: nums) {
            if(num == e1) c1++;
            if(num == e2) c2++;
        } 

        if(c1 > n/3) ans.push_back(e1);
        if(c2 > n/3 && e1 != e2) ans.push_back(e2);
        return ans;
    }
};
