#include <bits/stdc++.h>
using namespace std;

void solve(){
    int Q;
    vector<int> tickets, inRestaurant;

    cin >> Q;

    while(Q--){
        int query;
        cin >> query;
        
        if(query == 1){
            int ticket;
            cin >> ticket;
            tickets.push_back(ticket);
        }else{
            inRestaurant.push_back(tickets[0]);
            tickets.erase(tickets.begin());
        }
    }

    if (inRestaurant.size() == 0){
        return;
    }
    
    for(int i = 0; i < inRestaurant.size(); ++i){
        cout << inRestaurant[i] << "\n";
    }
}

int main(){    

    solve();

    return 0;
}