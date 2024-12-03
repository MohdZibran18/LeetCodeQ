class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0"; 
        
        string ans = ""; 
        int n1 = num1.length(), n2 = num2.length();
        vector<int> result(n1 + n2, 0);

        for (int i = n1 - 1; i >= 0; i--) {
            int x = num1[i] - '0'; 
            for (int j = n2 - 1; j >= 0; j--) {
                int mul = (num2[j] - '0'); 
                int sum = x * mul + result[i + j + 1];
                result[i + j + 1] = sum % 10; 
                result[i + j] += sum / 10;   
            }
        }

    
        for (int num : result) {
            if (!(ans.empty() && num == 0)) { 
                ans.push_back(num + '0');
            }
        }

        return ans.empty() ? "0" : ans; 
    }
};
