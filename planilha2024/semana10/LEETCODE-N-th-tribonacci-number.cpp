class Solution {
public:
    int tribonacci(int n) {
        vector<int> fib;
        fib.push_back(0);
        fib.push_back(1);
        fib.push_back(1);
        for(int i = 3; i <= n; i++) fib.push_back(fib[i-1] + fib[i-2] + fib[i-3]);
        return fib[n];
    }
};