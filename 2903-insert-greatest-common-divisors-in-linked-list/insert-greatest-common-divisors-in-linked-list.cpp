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
// int ngcd(int a, int b) {
//     if (a == 0)
//         return b;
//     if (b == 0)
//         return a;
//     if (a > b)
//         return gcd(a % b, b);
//     else
//         return gcd(a, b % a);
// }
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while ( temp!= NULL && temp->next != NULL) {
            int a = temp->val;
            int b = temp->next->val;
            int c= __gcd(a, b);
            ListNode* newnode=new ListNode(c,temp->next);
            temp->next=newnode;
            temp=newnode;
            temp=temp->next;
        }
        return head;
    }
};