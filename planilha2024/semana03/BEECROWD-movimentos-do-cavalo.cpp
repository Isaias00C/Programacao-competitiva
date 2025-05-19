#include <bits/stdc++.h>
using namespace std;

int main(){
    string positions;
    while(getline(cin, positions, '\n')){
        vector<int> movHorseX = {1, 2, 2, 1, -1, -2, -2, -1};
        vector<int> movHorseY = {-2, -1, 1, 2, 2, 1, -1, -2};
        queue<pair<char,char>> queue;
        set<pair<char,char>> vis;
        
        queue.push({positions[0],positions[1]});
        vis.insert({positions[0],positions[1]});
        
        int numMoves = 0;
        
        while(1){
            for(int i = 0; i < 8; i++){
                char auxFirst = queue.front().first;
                char auxSecond = queue.front().second;
                queue.pop();
                if(auxFirst + movHorseX[i] == positions[3] && auxSecond + movHorseY[i] == positions[4]){
                    cout << "To get from " << positions[0] << positions[1] << " to " << positions[3] << positions[4] << " takes " << numMoves << " knights moves.\n";
                    break;
                }else{
                    queue.push({queue.front().first + movHorseX[i],queue.front().second + movHorseY[i]});
                }
            }

        }
    }
}