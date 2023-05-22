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



PRIME LOGIC


   int isPrime(int n){
         if(N==1)
        return 0;
        else
        {
        int flag=0;
        for(int i=2;i<=sqrt(N);i++){
            if(N%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        return 1;
        else
        return 0;
    }
};
