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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,j=v.size()-1, sum=0;
        while(i<j){
            sum = max(sum, v[i]+v[j]);
            i++;
            j--;
        }
        return sum;;
    }
};