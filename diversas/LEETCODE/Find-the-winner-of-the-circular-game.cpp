#include <bits/stdc++.h>
using namespace std;

int findTheWinner(int n, int k) {
    vector<int> friends;
    for(int i = 0; i < n; i++){
        friends.push_back(i + 1);
    }
    int position = 0;
    while(friends.size() > 1){
        position = (position + k - 1) % friends.size();
        friends.erase(friends.begin() + position);
    }
    return *friends.begin();
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << findTheWinner(n, k);
}