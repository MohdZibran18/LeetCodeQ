class Solution {
    public int[] rowAndMaximumOnes(int[][] mat) {
        int cnt=0;
        int ans =0;
        int index=0;
        for(int i=0;i<mat.length;i++){
            cnt=0;
            for(int j=0;j<mat[0].length;j++){
                if(mat[i][j]==1){
                    cnt++;
                } 
            }
            if(ans < cnt){
                 ans=cnt;
                 index= i;
                
                }
            
        }
        return new int[]{index, ans};
    }
}