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
    ListNode* reverse(ListNode* head,ListNode* prev,ListNode* temp)
    {
        if(head==NULL) return temp;
        temp=head;
        head=head->next;
        temp->next=prev;
        prev=temp;
       return reverse(head,prev,temp);
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* newhead=temp;
        ListNode* prev=NULL;
      return  reverse(head,prev,temp);
    }
};