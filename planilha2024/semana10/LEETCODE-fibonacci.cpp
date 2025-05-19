class Solution {
public:
    int fib(int n) {
        int ans = (pow((1+sqrt(5.0))/double(2),n) - pow((1-sqrt(5.0))/double(2),n))/sqrt(5);
        return ans;
    }
};