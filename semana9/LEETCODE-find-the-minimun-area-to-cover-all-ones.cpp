class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        vector<int> area (4) ;
        vector<bool> find (4);
        //find rows
        for(int i = 0, j = grid.size() - 1;; i++, j--){
            //for each colunm
            for(int l = 0; l < grid[0].size(); l++){
                //search max and min row 
                if(grid[i][l] == 1 && !find[0]){
                    area[0] = i; //min row
                    find[0] = true;
                }
                if(grid[j][l] == 1 && !find[1]){
                    area[1] = j; // max row
                    find[1] = true;
                }
            }
            if(find[0] && find[1]) break;
        }
        //find colunms
        for(int i = 0, j = grid[0].size() - 1;; i++, j--){
            for(int l = 0; l < grid.size(); l++){
                if(grid[l][i] == 1 && !find[0]){
                    area[2] = i;
                    find[2] = true;
                }
                if(grid[l][j] == 1 && !find[1]){
                    area[3] = j;
                    find[3] = true;
                }
            }
            if(find[2] && find[3]) break;
        }
        return (find[1] - find[0] + 1)*(find[3] - find[2] + 1);
    }
};