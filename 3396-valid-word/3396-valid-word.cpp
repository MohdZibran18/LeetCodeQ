class Solution {
public:
    bool isValid(string word) {
    // 1 min of 3 character 
    // one digit 
    // one vowel at least

    bool digit = false;
    int ch = 0;
    bool vowel = false, cons = false;

    for(int i = 0; i < word.size(); i++) {
        if(isdigit(word[i])) {
            digit = true;
        } 
        else if (isalpha(word[i])) {
            ch++;
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'
               ||word[i]=='o'||word[i]=='u'||
               word[i]=='A'||word[i]=='E'||word[i]=='I'
               ||word[i]=='O'||word[i]=='U') {
                vowel = true;
            } else {
                cons = true;
            }
        }
        else {
            return false;
        }
    }

    if(vowel && cons && word.length() >= 3) return true;
    return false;
}

};