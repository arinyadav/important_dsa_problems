class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        while(l<=r) {
            
            int mask=1<<(r-1);
            
            if(y & mask)
            x=x|mask;
            
            r--;
        }
        return x;
    }
};
