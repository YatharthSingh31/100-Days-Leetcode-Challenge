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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count=0;
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        temp = head;
        for (int i = 0; i < (count / 2)-1; i++) {
            temp = temp->next;
        }
        // ListNode* nodeToDelete = temp->next;
        // temp->next = nodeToDelete->next;
        // delete nodeToDelete;
        temp->next = temp->next->next;
        return head;
    }
};