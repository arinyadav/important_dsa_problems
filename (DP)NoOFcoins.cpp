	int solve(vector<int> &coins, int M, int V,vector<int>&dp) {
	    
	    if(V==0)
	    return 0;
	    if(V<0)
	    return INT_MAX;
	    if(dp[V]!=-1)
	    return dp[V];
	    
	    int mini = INT_MAX;
	    for(int i=0;i<coins.size();i++) {
	       int ans = solve(coins,M,V-coins[i],dp);
	       if(ans!=INT_MAX)
	         mini  = min(mini,ans+1); 
	    }
	    dp[V] = mini;
	    return mini;
	}
	
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    
	    vector<int>dp(V+1,-1);
	    int ans=solve(coins,M,V,dp);
	    if(ans==INT_MAX)
	    return -1;
	    else 
	    return ans;
	} 
