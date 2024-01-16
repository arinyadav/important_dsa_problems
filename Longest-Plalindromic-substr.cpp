class Solution {
public:
 bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }       
    string longestPalindrome(string s) {
        int n=s.size();
        int max_len=0,index=0;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
              if(check(s,i,j)) {
                  if(j-i+1>max_len) {
                      max_len=j-i+1;
                       index=i;
                  }
              }
            }
        }
        return s.substr(index,max_len);
    }
};
