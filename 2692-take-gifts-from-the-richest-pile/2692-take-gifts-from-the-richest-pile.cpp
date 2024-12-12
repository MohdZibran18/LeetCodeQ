class Solution {
public:
    long long pickGifts(vector<int>& arr, int k) {
        priority_queue<long long>pq;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
       while(k--){
         pq.push(sqrt(pq.top()));
           pq.pop();
        }
        long long n=pq.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};