class Solution {
public:
    int islandPerimeter(vector<vector<int>>& v) {
        int n = v.size();
        int m= v[0].size();
        int tp=0,bt=0,rt=0,lt=0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==1){
                    //top
                    if(i==0) {
                     tp++;
                    }
                    else {
                        if(v[i-1][j]!=1){
                             tp++;
                        }
                    }
                    //bottom 
                    if(i==n-1) {
                        bt++;
                    }
                    else {
                        if(v[i+1][j]!=1){
                             bt++;
                        }
                    }
                      //left 
                      if(j == 0 ){
                         lt++;
                      }
                      else {
                        if(v[i][j-1] != 1){
                            lt++;
                        }
                      }
                      //right
                      if(j==m-1){
                        rt++;
                      }  
                      else {
                        if(v[i][j+1] !=1){
                            rt++;
                        }
                      }
                    
                }

            }
        }
        return lt+rt+bt+tp;
    }
};