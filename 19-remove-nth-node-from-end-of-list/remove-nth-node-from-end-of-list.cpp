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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int t=0;
        ListNode* temp=head;
        while(temp){
            t++;
            temp=temp->next;
        }
        if(t==1 && n==1){
            return NULL;
        }
        int e=t-n;
        if(e==0){
            head=head->next;
        }
        t=1;
        ListNode* r=head;
        while(r){
          if(t==e && r->next!=NULL){
            r->next=r->next->next;
            break;
          }
          t++;
          r=r->next;
        }
        return head;
    }
};