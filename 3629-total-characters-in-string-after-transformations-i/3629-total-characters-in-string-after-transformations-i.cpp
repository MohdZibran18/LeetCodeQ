class Solution {
public:
const int MOD = 1e9 + 7;

int lengthAfterTransformations(string s, int t) {
    vector<long long> freq(26, 0);  // 'a' to 'z'

    // Initialize frequency from string
    for (char c : s) {
        freq[c - 'a']++;
    }

    while (t--) {
        vector<long long> nextFreq(26, 0);

        for (int i = 0; i < 26; ++i) {
            if (freq[i] == 0) continue;

            if (i == 25) { // 'z'
                nextFreq[0] = (nextFreq[0] + freq[i]) % MOD;
                nextFreq[1] = (nextFreq[1] + freq[i]) % MOD; 
            } else {
                nextFreq[i + 1] = (nextFreq[i + 1] + freq[i]) % MOD;
            }
        }

        freq = nextFreq; 
    }
    long long total = 0;
    for (int i = 0; i < 26; ++i) {
        total = (total + freq[i]) % MOD;
    }

    return total;
}

};