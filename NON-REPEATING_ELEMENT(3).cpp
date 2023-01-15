BY BITWISE :--


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++)
         n=n^nums[i];
        
        return n;
    }
};


BY BINARY SEARCH :--

  
class Solution {
public:
int singleNonDuplicate(vector<int> &nums) {
int s=0;
int e=nums.size()-1;
int mid=s+(e-s)/2;

    if(nums.size()==1){
        return nums[0];
    }
    if(nums[s]!=nums[s+1]){
        return nums[s];

    }



    if(nums[e]!=nums[e-1]){
        return nums[e];
    }
     while(s<e){
         if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
             return nums[mid];
         }
         else if(nums[s]==nums[s+1]){
             s=s+2;
         }
         else if(nums[e]==nums[e-1]){
             e=e-2;
         }
     }
     return nums[s];
    

}
};




  
