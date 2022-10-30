GFG

APPROACH --> TILL OPERATOR IS NOT COMING STORE IN ANS WHEN OPRATOR STRIKES PUSH (NUMBER+OPERATOR) IN STACK AND DO TILL END THEN STORE STACK IN BACK IN NEW STRING TO GET DESIRED ANS 

string reverseEqn (string s)
        {
             string ans="";
           stack<string>st;
           for(int i=0; i<s.size();i++){
               if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
                   st.push(ans);
                   ans=s[i];
                   st.push(ans);
                   ans="";
               }
               else{
                   ans+=s[i];
               }
               
           }
           st.push(ans);
           s="";
            while(!st.empty()){
                s+=st.top();
                st.pop();
            }
            
            return s;
        }
