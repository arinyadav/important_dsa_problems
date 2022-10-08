ASKED IN - AMAZON,FACEBOOK,GOOGLE,VISA  
REFER GFG
 
 vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>answer;
        if(s == 0)
        {
            answer.push_back(-1);
            return answer;
        }
        long long sum = 0;
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(sum == s)
            {
                answer.push_back(i+1);
                answer.push_back(j);
                return answer;
            }
            if(sum < s)
            {
                sum += arr[j];
                j++;
            }
            else
            {
                sum -= arr[i];
                i++;
            }
        }
        while(i<n)
        {
            if(sum == s)
            {
                answer.push_back(i+1);
                answer.push_back(j);
                return answer;
            }
            sum -= arr[i++];
        }
        answer.push_back(-1);
        return answer;
    }
