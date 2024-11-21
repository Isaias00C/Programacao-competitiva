#include <bits/stdc++.h>
using namespace std;

vector<int> Z(string text, string pattern);

int main() {
    string text, pattern;

    cin >> text >> pattern;

    vector<int> arr = Z(text, pattern);
    
    for(int i : arr) {
        cout << i;
    }

    cout << "\n";

}

vector<int> Z(string text, string pattern) {
    string z = pattern + "$" + text;
    vector<int> z_arr (z.size());

    z_arr[0] = 0;
    int left, right;
    left = right = 0;

    for(int i = 1; i < z.size(); i++) {
        if(i > right){
            left = right = i;
            
            while(z[right] == z[right - left] && right < z.size()){
                right++;
            }
            
            right--;
            z_arr[i] = right - left + 1;
        }else {
            int aux = i - left;
            
            if(z_arr[aux] + i - 1 < right) {
                z_arr[i] = z_arr[aux];
            }else {
                left = i;
                
                while(z[right] == z[right - left] && right < z.size()){
                    right++;
                }
                
                right--;
                z_arr[i] = right - left + 1;
            }
        }
    }

    return z_arr;
}

