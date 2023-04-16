 static bool cmp(pair<int,int>&a,pair<int,int>&b){
        return a.first<b.first;
    }
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int,int>>ans;
        unordered_set<int>s;
        
        for(int i=0;i<N;i++)
        s.insert(A[i]);
        
        for(int i=0;i<M;i++)
        {
            if(s.find(X-B[i])!=s.end())
            ans.push_back({X-B[i],B[i]});
        }
        sort(ans.begin(),ans.end(),cmp);
        return ans;
    }
