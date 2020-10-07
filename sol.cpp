class Solution {
public:
     vector<vector<int>> kClosest(vector<vector<int>>& a, int k) 
    {
    vector<vector<int>>ans;
         priority_queue<pair<int,int>>maxh;
         for(int i=0;i<a.size();i++){
             int d=(a[i][0]*a[i][0]+a[i][1]*a[i][1]);
             maxh.push({d,i});
             if(maxh.size()>k){
                 maxh.pop();
             }
         }
         while(maxh.size()!=0){
             ans.push_back(a[maxh.top().second]);
             maxh.pop();
         }
         return ans;
    }
};
