class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> queue;
        queue.push({sr,sc});
        set<pair<int,int>> visitadas;
        while(!queue.empty()){
            int row = queue.front().first;
            int column = queue.front().second;
            queue.pop();
            if(row+1 < image.size()){    
                if(image[row+1][column] == image[row][column]){
                    if(visitadas.find({row+1,column}) == visitadas.end()){    
                        queue.push({row+1,column});
                    }
                }
            }
            if(row-1 >= 0){    
                if(image[row-1][column] == image[row][column]){
                    if(visitadas.find({row-1,column}) == visitadas.end()){    
                        queue.push({row-1,column});
                    }
                }
            }
            if(column+1 < image[0].size()){
                if(image[row][column+1] == image[row][column]){
                    if(visitadas.find({row,column+1}) == visitadas.end()){    
                        queue.push({row,column+1});
                    }
                }
            }
            if(column-1 >= 0){
                if(image[row][column-1] == image[row][column]){
                    if(visitadas.find({row,column-1}) == visitadas.end()){    
                        queue.push({row,column-1});
                    }
                }
            }
            visitadas.insert({row,column});
            image[row][column] = color;
        }
        return image;
    }
};