#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
   priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
   
   for(int i=0;i<k;i++) {
       pq.push({kArrays[i][0],{i,0}});
   }

   vector<int>ans;

   while(!pq.empty()) {

       auto it = pq.top();
       pq.pop();

       ans.push_back(it.first);
       int row = it.second.first;
       int col = it.second.second;

       col++;
       if(col != kArrays[row].size()) {
           pq.push({kArrays[row][col],{row,col}});
       }

   }
   return ans;
}
