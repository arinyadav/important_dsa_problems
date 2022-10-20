COMPANIES -- Adobe Amazon Flipkart Oracle OYO_Rooms Snapdeal Walmart Yatra.com Microsoft Google
TOPICS--     STACK,STL

bool ispar(string x)
    {
       stack <char> s;
       for(int i=0;i<x.size();i++)
       {
           // putting opening bracket in stack and checking its corresponding closing bracket
           if(x[i]=='{' || x[i]=='[' || x[i]=='(')
           s.push(x[i]);
           
          else
          {
              if(!s.empty()){        // if only closing bracket was there so checking for stack empty as stack shud be empty so return false in else condtion
                  char top=s.top();  // for checking corr top elememt with given closed bracket
              if((x[i]==']'  && top=='[') || (x[i]==')'  && top=='(') || (x[i]=='}'  && top=='{'))  
              s.pop();               //poping out opening bracket if corr. closing bracket is present else return false
              else
              return false;
          }
          else
          return false;
          }
       }
       if(s.empty())
           return true;
    }
