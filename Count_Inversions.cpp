O(n2) -- take two loops and count how many of unsorted pairs are there in which do not follow ascending rule

O(nlogn) -- use merge sort concept
  
  // CODE STARTED
  
 long long merge(long long arr[], long long low, long long mid,  long long high){
  long long ans=0;
  long long  len1= mid-low+1;
  long long  len2= high-mid;
  long  arr1[len1];
  long  arr2[len2];

        

        

        for(int i=0;i<len1;i++){

            

            

            arr1[i]= arr[i+low];

        }

        

        

         for(int i=0;i<len2;i++){

            

            

            arr2[i]= arr[i+mid+1];

        }

        

        

        long long  i=0, j=0,k=low;

        

        

        while(i<len1&&j<len2){

            

            

            if(arr1[i]<=arr2[j]){

                

                arr[k]= arr1[i];

                i++;

                k++;

                

            }else {

                

                arr[k]= arr2[j];

                

                ans+=len1-i;

                k++;

                j++;

                

                

            }

        }
  while(i<len1){
          arr[k]= arr1[i];

            i++;

            k++;

        }
  while(j<len2){
           arr[k]= arr2[j];

            j++;

            k++;

       }
  return ans;
    }
long long mergesort(long long arr[], long long low, long long high){
      if(low>=high)
       return 0;

        }
      long long ans=0;
      long long mid= low+ (high-low)/2;
      ans+=mergesort(arr, low, mid);
      ans+=mergesort(arr, mid+1, high);
      ans+= merge(arr, low,mid, high);
      return ans;

    }
    long long int inversionCount(long long arr[], long long N)

    {
    return mergesort(arr, 0, N-1);

    }
