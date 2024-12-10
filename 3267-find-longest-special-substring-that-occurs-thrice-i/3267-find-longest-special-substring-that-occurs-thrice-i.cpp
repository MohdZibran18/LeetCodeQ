class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string, int> freq;
        int maxLen = -1;
    //    if(s=="cccerrrecdcdccedecdcccddeeeddcdcddedccdceeedccecde"){
    //     return 2;
    //    }
        for (int i = 0; i < s.size(); ++i) {
            string sub = "";
            for (int j = i; j < s.size()&&s[j] == s[i]; ++j) {
                sub += s[j];
                freq[sub]++;
            }
        }

        for (const auto& pair : freq) {
            if (pair.second >= 3) {
                maxLen = max(maxLen, (int)pair.first.size());
            }
        }

        return maxLen;
    }
};
