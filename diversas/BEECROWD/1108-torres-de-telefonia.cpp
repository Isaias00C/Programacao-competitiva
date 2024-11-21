//https://judge.beecrowd.com/pt/problems/view/1108
//Maratona de programação de 2009

#include <bits/stdc++.h>
using namespace std;

void f(int numPoints);

int main() {
    int numPoints;
    cin >> numPoints;

    do {
        f(numPoints);
        cin >> numPoints;
    }while(numPoints);

    return 0;
}

void f(int numPoints) {
    vector<pair<int,int>> points;
    for(int i = 0; i < numPoints; ++i){
        int x, y;
        points.push_back({x,y});
    }

    vector<double> distances;
    for(int i = 0; i < distances.size(); ++i){
        for(int j = i+1; j < distances.size(); ++j){
            int x1 = points[i].first;
            int y1 = points[i].second;
            int x2 = points[j].first;
            int y2 = points[j].second;

            distances.push_back(sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)));
        }
    }

    
}