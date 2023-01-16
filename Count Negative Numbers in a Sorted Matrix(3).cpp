O(N^2) :--
      int ans=0;
        for (int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if (grid[i][j]<0)ans++;
            }
        }
        return ans;
    }


O(Nlog(N))  USING BINARY SEARCH
int countNegatives(vector<vector<int>>& grid) {
		int m=grid.size(), n=grid[0].size(), r=0, c=n- 1;
		int ans=0;
		while(r < m){
			while(c >= 0 && grid[r][c] < 0){c--;}
			ans+=n-c-1;
			r++;
		}
		return ans;
	}





 int countNegatives(vector<vector<int>>& grid) {
		     int ans=0;
        for (vector<int> &a: grid)
        {
            ans+=findnegative(a);
        }
        return ans;
    }
    int findnegative(vector<int>& a) {
        if(a[0]<0) return a.size();
        if(a[a.size()-1]>=0) return 0;
        
        int s=0,index=0;
        int e=a.size()-1;
        
        while(s<=e)
        {
            int mid = s+(e-s) / 2;
            if(a[mid]<0) {
                index=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return a.size()-index;
    }


