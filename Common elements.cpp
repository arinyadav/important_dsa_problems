GFG

  vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0,j=0,k=0;
            vector<int> v;
            
            while(i<n1 && j<n2 && k<n3) {
                if(A[i] == B[j] && B[j] == C[k]) {
                    v.push_back(A[i]);
                    i++; j++; k++;
                }
                
                else if(A[i] < B[j])  i++;
                else if(B[j] < C[k])  j++;
                else  k++;
                
                // Handling Duplicates
                int xx = A[i-1];
                int yy = B[j-1];
                int zz = C[k-1];
                
                while(A[i] == xx)  i++;
                while(B[j] == yy)  j++;
                while(C[k] == zz)  k++;
            }
            
            if(v.size() == 0)  
               v.push_back(-1);
            
            return v;
        }
