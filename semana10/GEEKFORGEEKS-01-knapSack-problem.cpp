{
    //Function to return max value that can be put in knapsack of capacity W.
    public:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int memo[W+1][n+1];
        for(int i = 0; i <= W; i++){
            for(int j = 0; j <= n; j++){
                memo[i][j] = 0;
            }
        }
        
        for(int i = 1; i <= W; i++){
            for(int j = 1; j <= n; j++){
                if(wt[j - 1] <= i) {
                    memo[i][j] = max(val[j-1] + memo[i-wt[j-1]][j-1], memo[i][j-1]);
                }else memo[i][j] = memo[i][j-1];
            }
        }
        
        return memo[W][n];
         
    }
};