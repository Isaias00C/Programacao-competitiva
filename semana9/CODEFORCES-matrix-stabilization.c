#include <stdio.h>

int minValue(int a, int b, int c, int d){
    a = a < b ? a : b;
    a = a < c ? a : c;
    a = a < d ? a : d;
    return a;
}
int main(){
    int numCases;
    scanf("%d", &numCases);
    
    for(int i = 0; i < numCases; i++){
        int grid[30000][30000];
        int rows, colunms;
        
        scanf("%d %d", &rows, &colunms);
        
        for(int row = 1; row <= rows; row++){
            for(int colunm = 1; colunm <= colunms; colunm++){
                scanf("%d", &grid[row][colunm]);
            }
        }

        for(int row = 1; row <= rows; row++){
            for(int colunm = 1; colunm <= colunms; colunm++){
                if(row == 1){
                    if(colunm == 1){
                        if(grid[row][colunm] > grid[row+1][colunm] && 
                           grid[row][colunm] > grid[row][colunm+1])
                           grid[row][colunm] = grid[row+1][colunm] > grid[row][colunm+1] ? grid[row+1][colunm] : grid[row][colunm+1];
                    }
                    if(colunm == colunms){
                        if(grid[row][colunm] > grid[row+1][colunm] && 
                           grid[row][colunm] > grid[row][colunm-1])                                   grid[row][colunm] = grid[row+1][colunm] > grid[row][colunm-1] ? grid[row+1][colunm] : grid[row][colunm-1];
                    }
                    continue;
                }
                if(row == rows){
                    if(colunm == 1){
                        if(grid[row][colunm] > grid[row-1][colunm] && 
                           grid[row][colunm] > grid[row][colunm+1])                                   grid[row][colunm] = grid[row-1][colunm] > grid[row][colunm+1] ? grid[row-1][colunm] : grid[row][colunm+1];
                    }
                    if(colunm == colunms){
                        if(grid[row][colunm] > grid[row-1][colunm] && 
                           grid[row][colunm] > grid[row][colunm-1])                                   grid[row][colunm] = grid[row-1][colunm] > grid[row][colunm-1] ? grid[row-1][colunm] : grid[row][colunm-1];
                    }
                    continue;
                }
                if(row == 1){
                    if(grid[row][colunm] > grid[row][colunm+1] &&
                       grid[row][colunm] > grid[row][colunm-1] &&
                       grid[row][colunm] > grid[row+1][colunm]){
                        
                        grid[row][colunm] = grid[row][colunm] > grid[row][colunm+1] ? grid[row][colunm+1] : grid[row][colunm];
                        grid[row][colunm] = grid[row][colunm] > grid[row][colunm-1] ? grid[row][colunm-1] : grid[row][colunm];
                        grid[row][colunm] = grid[row][colunm] > grid[row+1][colunm] ? grid[row+1][colunm] : grid[row][colunm];
                       }
                    continue;
                }
                if(row == rows){
                    if(grid[row][colunm] > grid[row][colunm+1] &&
                       grid[row][colunm] > grid[row][colunm-1] &&
                       grid[row][colunm] > grid[row-1][colunm]){
                        
                        grid[row][colunm] = grid[row][colunm] > grid[row][colunm+1] ? grid[row][colunm+1] : grid[row][colunm];
                        grid[row][colunm] = grid[row][colunm] > grid[row][colunm-1] ? grid[row][colunm-1] : grid[row][colunm];
                        grid[row][colunm] = grid[row][colunm] > grid[row-1][colunm] ? grid[row-1][colunm] : grid[row][colunm];
                       }
                    continue;
                }
                if(colunm == 1){
                    if(grid[row][colunm] > grid[row+1][colunm] &&
                       grid[row][colunm] > grid[row-1][colunm] &&
                       grid[row][colunm] > grid[row][colunm+1]){
                        
                        grid[row][colunm] = grid[row][colunm] > grid[row+1][colunm] ? grid[row+1][colunm] : grid[row][colunm];
                        grid[row][colunm] = grid[row][colunm] > grid[row-1][colunm] ? grid[row-1][colunm] : grid[row][colunm];
                        grid[row][colunm] = grid[row][colunm] > grid[row][colunm+1] ? grid[row][colunm+1] : grid[row][colunm];
                       }
                    continue;
                }
                if(colunm == colunms){
                    if(grid[row][colunm] > grid[row+1][colunm] &&
                       grid[row][colunm] > grid[row-1][colunm] &&
                       grid[row][colunm] > grid[row][colunm-1]){
                        
                        grid[row][colunm] = grid[row][colunm] > grid[row+1][colunm] ? grid[row+1][colunm] : grid[row][colunm];
                        grid[row][colunm] = grid[row][colunm] > grid[row-1][colunm] ? grid[row-1][colunm] : grid[row][colunm];
                        grid[row][colunm] = grid[row][colunm] > grid[row][colunm-1] ? grid[row][colunm-1] : grid[row][colunm];
                       }
                    continue;
                }
                if(grid[row][colunm] > grid[row - 1][colunm] && 
                   grid[row][colunm] > grid[row][colunm + 1] && 
                   grid[row][colunm] > grid[row + 1][colunm] && 
                   grid[row][colunm] > grid[row][colunm - 1]){
                    
                    grid[row][colunm] = minValue(grid[row - 1][colunm], 
                                                 grid[row][colunm + 1], 
                                                 grid[row + 1][colunm], 
                                                 grid[row][colunm - 1]);
                }
            }
        }

        for(int row = 1; row <= rows; row++){
            for(int colunm = 1; colunm <= colunms; colunm++){
                printf("%d ", grid[row][colunm]);
            }
            printf("\n");
        }
    }
}