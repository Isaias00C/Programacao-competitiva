class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<float> distances;
        vector<vector<int>> answer;
        for(int i = 0; i < points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];
            float d = sqrt((x*x) + (y*y));
            distances.push_back(d);
        }
        for(int i = 0; i < k; i++){
            float aux;
            for(int j = i+1; j < distances.size(); j++){
                if(distances[j] < distances[i]){
                    aux = distances[j];
                    distances[j] = distances[i];
                    distances[i] = aux;
                    points[i].swap(points[j]);
                }
            }
            answer.push_back(points[i]);
        }
        return answer;
    }
};