GFG

TIME COMPLEXITY --> O(n)

   int tour(petrolPump p[],int n)
    {
       int d=0;
       int balance=0;
       int start=0;
       
       for(int i=0;i<n;i++)
       {
           balance+=p[i].petrol - p[i].distance;
           if(balance<0) {
               d+=balance;
               start=i+1;
               balance=0;
           }
       }
       
       if(d+balance>=0)
       return start;
       else 
       return -1;
    }
