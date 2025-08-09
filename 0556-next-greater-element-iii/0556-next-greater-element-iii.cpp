class Solution {
public:
    int nextGreaterElement(int n) {
       string s = to_string(n);
       next_permutation(s.begin(),s.end());
       int x= stol(s);
       if(x>INT_MAX) return -1;
       return x>n ?x:-1;;
    }
};