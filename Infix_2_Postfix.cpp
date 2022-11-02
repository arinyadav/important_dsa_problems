int prec(char c){
    if(c=='^'){
        return 3;
        }
    else if( c== '*' || c== '/'){
        return 2;
        }
    else if( c== '+' || c== '-'){
        return 1;
        }
    else{
        return -1;
        }
    }

    string infixToPostfix(string s) {
        // Your code here
        stack<char> st;
        string emp="";
        for(int i=0 ; i<s.length();i++){
            char ch= s[i];
            if(ch=='('){
            st.push(ch);  
        }

        //CASE 2 -> IF CHARACTER IS A OPERAND
        else if( (ch>= 'a' && ch<='z') || (ch>='A' && ch<= 'Z')){
            emp=emp+ch;
        }
        else if( ch==')'){
            while((!st.empty()) && (st.top()!='(')){
                
                emp= emp + st.top();
                st.pop();
            }
            if(!st.empty()){
            st.pop();
            }
        }
        else{
            while((!st.empty()) && (prec(st.top())>= prec(ch))){
                emp=emp+st.top();
                st.pop();
            }
            st.push(ch);
        }
        
        }
        while(!st.empty()){
            emp=emp+st.top();
            st.pop();
    }
        return emp;
    }
