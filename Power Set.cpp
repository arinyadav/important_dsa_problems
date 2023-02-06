	vector<string> AllPossibleStrings(string s){
             vector<string> ss;
		    int p=pow(2,s.size());
		    for(int i=1;i<p;i++){
		      string t;
		        for(int j=0;j<s.size();j++){
		            if((i>>j)&1)
		                t.push_back(s[j]);
		        }
		        ss.push_back(t);
		    }
		    sort(ss.begin(),ss.end());
		    return ss;
		}
