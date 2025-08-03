class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        //by default max heap 
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto it :mp){
            pq.push({it.second,it.first});
        }
        for(int i=0;i<k;i++){
            auto[first,second]= pq.top();
            pq.pop();
            ans.push_back(second);
        }
        return ans;
    }
};