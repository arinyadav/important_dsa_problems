LEETCODE : --  (3)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     set<char> set;
     int max=0,S=0,e=0;

     while(S<s.size()) {
         auto it = set.find(s[S]);
         if(it==set.end())
         {
             if(S-e+1 > max)
             max = S-e+1;
             set.insert(s[S]);
             S++;
         }
         else
         {
             set.erase(s[e]);
             e++;
         }
     }   
     return max;
    }
};
