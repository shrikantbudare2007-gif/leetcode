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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode* temp = head;
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        while (temp != NULL) {
            if (temp->val != 0) {
                sum += temp->val;
                temp=temp->next;
            }
            else{
                if(sum!=0){
                   ListNode* s=new ListNode(sum);
                   tail->next=s;
                   tail=s;
                }
                sum=0;
                temp=temp->next;
            }
        }
        return dummy->next;
    }
};