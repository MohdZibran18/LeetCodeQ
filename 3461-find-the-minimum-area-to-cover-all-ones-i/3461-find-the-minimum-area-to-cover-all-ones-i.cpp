class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
    int left=0, right=0, top=0, bottom=0;
    bool flagTop=false, flagLeft=false, one=false;
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            if(grid[i][j]==1){
                one=true;
                if(!flagTop){
                    top = i;  
                    flagTop = true;
                }
                bottom = i;   
            }
        }
    }
    for(int j=0; j<grid[0].size(); j++){
        for(int i=0; i<grid.size(); i++){
            if(grid[i][j]==1){
                if(!flagLeft){
                    left = j;    
                    flagLeft = true;
                }
                right = j; 
            }
        }
    }
    if(!one) return 0;
    int width = right - left + 1;
    int height = bottom - top + 1;
    return width * height;
}
};