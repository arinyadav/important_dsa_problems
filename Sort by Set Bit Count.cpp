GFG --> ACC. TO DECREASING ORDER

 int getSetBits(int n){
     
     int count = 0;
     while(n){
         n &= (n-1);
         count++;
     }
     
     return count;
    }
    
    
    static bool comp(pair<int,int>a, pair<int,int>b){
       
       if(a.first == b.first)
       return a.second < b.second;
       
       return a.first > b.first;
    }
    
    
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        
        vector<pair<int,int>>v;
        
        for(int i=0; i<n; i++){
            
            v.push_back({getSetBits(arr[i]),i});
        }
        
        int ans[n];
        for(int i=0; i<n; i++){
            ans[i] = arr[i];
        }
        
        sort(v.begin(),v.end(), comp);
        
        for(int i=0; i<v.size(); i++){
            arr[i] = ans[v[i].second];
        }
    }



LEETCODE --> IN ASCENDING ORDER

static bool cmp(pair<int, int>&a, pair<int,int> &b){
        // if no. of 1's is equal 
        if(a.second == b.second){
            return a.first < b.first;
        }
        else{
            return a.second < b.second;
        }
    }
   int count1(int n){
        int cnt = 0;
        while(n){
            cnt += n & 1;
            n >>= 1;
        }
        return cnt;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        //integer pair that will store element of arr and no. of 1's
        vector<pair<int, int>> ans;
        
        for(int i = 0; i < arr.size(); i++){
            ans.push_back({arr[i], count1(arr[i])});
        }
        
        //sort ans vector
        sort(ans.begin(), ans.end(), cmp);
        
        //updating arr with sorted values
        for(int i = 0; i < ans.size(); i++){
            arr[i] = ans[i].first;
        }
        
        return arr;
    }
