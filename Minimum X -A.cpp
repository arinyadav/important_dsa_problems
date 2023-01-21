GFG

class Solution {
  private:
    int setBits(int x) {
        int count=0;
        
        while(x!=0) {
            x = x & (x-1);
            count++;
        }
        return count;
    }
   
  public:
    int minVal(int a, int b) {
        // code here
        int mask=0;
        int s=setBits(b);
        
        for(int i=31 ; i>=0 && s>0 ; i--) {
            if(a & (1<<i)) {
                mask=mask | (1<<i);
                s--;
            }
        } 
        
            for(int i=0 ; i<32 && s>0 ; i++) 
            {
                if((a & (1<<i)) == 0) {
                mask=mask | (1<<i);
                s--;
                }
            }
        
        return mask;
}
