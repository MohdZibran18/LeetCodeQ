class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0"; // Handle edge case
        
        string ans = ""; // Final result
        int n1 = num1.length(), n2 = num2.length();
        vector<int> result(n1 + n2, 0); // To store intermediate sums

        // Reverse traversal for multiplication
        for (int z = n1 - 1; z >= 0; z--) {
            int x = num1[z] - '0'; // Convert character to integer
            for (int i = n2 - 1; i >= 0; i--) {
                int mul = (num2[i] - '0'); // Convert character to integer
                int sum = x * mul + result[z + i + 1];
                result[z + i + 1] = sum % 10; // Store current digit
                result[z + i] += sum / 10;   // Carry to the next digit
            }
        }

        // Convert result vector to string
        for (int num : result) {
            if (!(ans.empty() && num == 0)) { // Skip leading zeros
                ans.push_back(num + '0');
            }
        }

        return ans.empty() ? "0" : ans; // Handle all zero case
    }
};



// class Solution {
// public:
//     string multiply(string num1, string num2) {
//         string ans="";
//         int z=num1.length()-1;
//         int cnt=0;
//         while (z>=1){
//             string prod="";
//             int  carry=0,sum=0;
//             int x=(num1[z]-'0');
//             for (int i=num2.length()-1;i>=0;i--){
//                 int mul=(num2[i]-'0');
//                 int push=(mul*x)+carry;
//                 prod=prod+to_string(push%10);
//                 carry=push/10;
//             }
//             reverse(prod.begin(),prod.end());
//             for (int i =0;i<cnt;i++){
//                 prod=prod+"0";
//             }
//             cnt++;
//             int ca=0;
//             int s1=prod.length(),s2=ans.length();
//             string n1="";
//             while (s1>=0 && s2>=0){
//                 int x=(prod[s1]+ans[s2]+ca -'0');
//                 ca = ca/10;
//                 n1.push_back(x);
//                 s1--;
//                 s2--;
//             }
//             while (s1>0){
//                 n1.push_back(prod[s1]);
//                 s1--;
//             }
//             while (s2>0){
//                 n1.push_back(ans[s1]);
//                 s2--;
//             }
//             ans =n1;
            
//             cout<<prod<<endl;
//             z--;
//         }
//         return ans;
//     }
// };