Approach --> STACK (O(n))

  vector<int> leftSmaller(int n, int a[]){
          stack<int> s;
        vector<int> ans;
        ans.push_back(-1); 
        s.push(arr[0]);
       
        for(int i=1;i<n;++i){
            
            // If arr>stack top then push desired result
            if(arr[i]>s.top()){
                ans.push_back(s.top());
                s.push(arr[i]);
            }
            
            // If our condition not satisfying then empty loop till our condition satisfies
            else if(arr[i]<=s.top()){
                while(!s.empty() &&  arr[i]<=s.top()){
                    s.pop();
                }
                
                // if loop doesn't become empty then top is result else -1 is result 
                if(!s.empty()){
                    ans.push_back(s.top());
                    s.push(arr[i]);
                }
                else{
                    ans.push_back(-1);
                    s.push(arr[i]);
                }
            }
        }
        return ans;
        }
