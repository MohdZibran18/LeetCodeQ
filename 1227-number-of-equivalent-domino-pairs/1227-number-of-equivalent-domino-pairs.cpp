class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
         int count = 0;
         int n = dominoes.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int a1 = dominoes[i][0], b1 = dominoes[i][1];
            int a2 = dominoes[j][0], b2 = dominoes[j][1];
            if ((a1 == a2 && b1 == b2) || (a1 == b2 && b1 == a2)) {
                count++;
            }
        }
    }
    return count;   
    }
};