class Solution {
    public String removeTrailingZeros(String num) {
           int index= num.length()-1;
        for(int i=num.length()-1;i>=0;i--){
            char s= num.charAt(i);
            if(s!='0'){
                 index=i;
                 break;
            }
        }
        String ans =num.substring(0,index+1);
    return ans ;
    }
}