SIEVE OF ERATOSTENES


class Solution {
public:
    int countPrimes(int n) {

        int count=0;
        vector<bool> v(n+1,true);

        v[0]=v[1]=false;

        for(int i=2 ; i<n ; i++) {
            if(v[i]==true) {
                count++;
                
                // marking its multiple as false
                for(int j=2*i ; j<n ;j+=i)
                v[j]=false;
            }
        }
        return count;
    }
};
