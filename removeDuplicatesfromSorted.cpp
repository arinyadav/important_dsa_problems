// OPTIMAL APPROACH

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    for (int j = 1; j < n; j++) {
    if (nums[i] != nums[j]) {
      i++;
      nums[i] = nums[j];
    }
  }
  return i + 1;
    }
};

// BRUTE FORCE

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
   set < int > s;
  for (int i = 0; i < n; i++) {
    s.insert(nums[i]);
  }
 int k = s.size();
  int j = 0;
  for (int x: s) {
    nums[j++] = x;
  }
  return k; 
    }
};
