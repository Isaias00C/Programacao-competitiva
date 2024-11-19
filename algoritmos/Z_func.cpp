#include <bits/stdc++.h>
using namespace std;

vector<int> Z(string text, string pattern);

int main() {
    string text, pattern;

    cin >> text >> pattern;

    Z(text, pattern);

    

}

vector<int> Z(string text, string pattern) {
    string z = text + "$" + pattern;
    vector<int> z_arr (z.size(), -1);

    int left, right;
    left = right = 0;

    for(int i = 1; i < z.size(); i++) {
        if(i > right){
            left = right = i;
            
            while(z[right] == z[right - left] && right < z.size()){
                right++;
            }
            
            right--;
            z[right - left + 1];
        }else {
            int aux = i - left;
            
            if(z[aux] + i - 1 < right) {
                z[i] = z[aux];
            }else {
                left = i;
                
                while(z[right] == z[right - left] && right < z.size()){
                    right++;
                }
                
                right--;
                z[i] = right - left + 1;
            }
        }
    }

    return z_arr;
}
