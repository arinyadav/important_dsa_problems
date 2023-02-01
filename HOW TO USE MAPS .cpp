 unordered_map<int,int> m;
       int a;
        
       for(int i=0 ; i<nums.size() ; i++)
       {
           m[nums[i]]++;
       }
       
       for(auto it:m)
       {
           if(it.second > 1)
           a= it.first;
       }
       
       return a;
        
    }
