#include <stdio.h>

int maxValue(int a, int b, int c, int d){
    a = a > b ? a : b;
    a = a > c ? a : c;
    a = a > d ? a : d;
    return a;
}

int main(){
    int numCases;
    scanf("%d", &numCases);

    for(int i = 0; i < numCases; i++){
        int rows, colunms, grid[1000][1000];
        scanf("%d %d", &rows, &colunms);

        for(int row = 1; row <= rows; row++){
            grid[row][0] = 0;
            grid[row][colunms + 1] = 0;
            for(int colunm = 1; colunm <= colunms; colunm++){
                grid[0][colunm] = 0;
                grid[rows + 1][colunm] = 0;
                scanf("%d", &grid[row][colunm]);
            }
        }

        for(int row = 1; row <= rows; row++){
            for(int colunm = 1; colunm <= colunms; colunm++){
                if(grid[row][colunm] > grid[row+1][colunm] &&
                   grid[row][colunm] > grid[row][colunm+1] &&
                   grid[row][colunm] > grid[row-1][colunm] &&
                   grid[row][colunm] > grid[row][colunm-1]   ){
                    grid[row][colunm] = maxValue(grid[row+1][colunm], grid[row][colunm+1], grid[row-1][colunm], grid[row][colunm-1]);
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