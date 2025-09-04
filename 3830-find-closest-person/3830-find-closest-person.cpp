class Solution {
public:
    int findClosest(int x, int y, int z) {
        int first= abs(z-x);
        int second= abs(z-y);
        if(first<second) return 1;
        else if(first==second) return 0;
        else return 2;
    }
};