Solution Video link --> https://www.youtube.com/watch?v=-IFmgue8sF0


vector <int> calculateSpan(int arr[], int n)
    {
     vector<int> res;
     stack <int> st;
     st.push(0);
     res.push_back(1);
       for(int i=1;i<n;i++)
       {
            while(!st.empty() && arr[st.top()]<=arr[i])
                st.pop();
            if(st.empty())
                res.push_back(i+1);
            else
                res.push_back(i-st.top());
            st.push(i);    
        }
        return res;
       
    }
