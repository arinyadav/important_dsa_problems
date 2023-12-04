class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2 = nums2.size();
        int n=n1+n2;
        int arr[n];
        int i=0,j=0,k=0;
        while(i<n1 && j<n2) {

            if(nums1[i]<=nums2[j]) {
                arr[k]=nums1[i];
                k++;
                i++;
            }else{
                arr[k]=nums2[j];
                k++;
                j++;
            }

        }
        while(i<n1) {
            arr[k]=nums1[i]; 
            k++;
            i++;
        }
        while(j<n2) {
            arr[k]=nums2[j];
            k++;
            j++;
        }
        double ans;
        if(n==1) {
            ans = double(arr[0]);
        }
        else if(n==2) {
            ans = double(arr[0]+arr[1])/2;
        }
        else if(n%2 != 0) {
            ans = double(arr[n/2]);
        }
        else{
            ans = double(arr[n/2]+arr[(n/2)-1])/2;
        }

        return ans; 
    }
};
