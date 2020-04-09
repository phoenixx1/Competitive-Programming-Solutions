/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = NULL;
        ListNode **t = &ans;
        int carry = 0, sum = 0;
        while(l1!=NULL || l2!=NULL){
            int x = 0; int y = 0;
            if(l1!=NULL){
                x = l1->val; l1=l1->next;    
            }
            if(l2!=NULL){
                y = l2->val; l2=l2->next;    
            }
            sum = carry + x + y;
            ListNode *newNode = new ListNode(sum%10);
            *t = newNode;
            t = &newNode->next;
            carry = sum / 10;
        }
        if(carry > 0){
            ListNode *newNode = new ListNode(carry%10);
            *t = newNode;
        }
        return ans;
    }
};