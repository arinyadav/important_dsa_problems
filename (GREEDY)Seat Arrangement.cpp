 bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        
        //base condition
        if(n>m) return false;
        
        //for 1st position
        if(seats[0]==0 and seats[1]==0) {
            seats[0]=1;
            n--;
        }
        
        //for mid position
        for(int i=1; i<m-1; i++) {
            if(seats[i]==0 and seats[i+1]==0 and seats[i-1]==0) {
                seats[i]=1;
                n--;
            }
        }
        
        //for last position
        if(seats[m-1]==0 and seats[m-2]==0) n--;
        
        if(n>0) return false;
        
        return true;
}

         }
