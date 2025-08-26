class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    priority_queue<pair<pair<int,int>, pair<int,int>>> pq;
    for (int i = 0; i < dimensions.size(); i++) {
        int length = dimensions[i][0];
        int width = dimensions[i][1];
        int diagSq = (length * length) + (width * width);
        int area = length * width;
 //phle diagonal ke basis pe sort karega agr diagonal same honge to area ke basis pe kar dehga 
        pq.push({{diagSq, area}, {length, width}});
    }
    return pq.top().second.first * pq.top().second.second;
}

};