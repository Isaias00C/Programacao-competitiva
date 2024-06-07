class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> queue;
        queue.push({sr,sc});
        image[sr][sc] = color;
        while(!queue.empty()){
            int row = queue.front().first;
            int column = queue.front().second;
            queue.pop();
            if(image[row+1][column] == 1){
                queue.push({row+1,column});
                image[row+1][column] = color;
            }
            if(image[row-1][column] == 1){
                queue.push({row-1,column});
                image[row-1][column] = color;
            }
            if(image[row][column+1] == 1){
                queue.push({row,column+1});
                image[row][column+1] = color;
            }
            if(image[row][column-1] == 1){
                queue.push({row,column-1});
                image[row][column-1] = color;
            }
        }
        return image;
    }
};