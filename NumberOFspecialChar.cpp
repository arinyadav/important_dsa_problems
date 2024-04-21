class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>s;
        for(int i=0;i<word.size();i++){
            s.insert(word[i]);
        }
        int c=0;
        for(auto x:s){
            if(s.find(x-32)!=s.end()){
                c++;
            }
        }
        return c;
    }
};
