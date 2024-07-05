/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int min = 1e6, max, cont = 0;
        vector<int> answer;
        vector<int> criticalPoints;
        while(head->next->next != nullptr){
            if(head->val > head->next->val){
                if(head->next->val < head->next->next->val){
                    //min local
                    criticalPoints.push_back(cont);
                }
            }
            if(head->val < head->next->val){
                if(head->next->val > head->next->next->val){
                    //max local
                    criticalPoints.push_back(cont);
                }
            }
            head = head->next;
            cont++;
        }
        if(criticalPoints.size() < 2){
            answer.push_back(-1);
            answer.push_back(-1);
            return answer;
        }
        max = criticalPoints[criticalPoints.size() - 1] - criticalPoints[0];
        //find min distance
        for(int i = 0; i < criticalPoints.size() - 1; i++){
            if(min > criticalPoints[i+1] - criticalPoints[i]) min = criticalPoints[i+1] - criticalPoints[i];
        }
        answer.push_back(min);
        answer.push_back(max);
        return answer;
    }
};