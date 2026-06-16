class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result=NULL;
        ListNode* head=NULL;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val <= list2->val)
            {
                if(result==NULL)
                {
                    result=new ListNode(list1->val);
                    head=result;
                }
                else
                {
                    result->next=new ListNode(list1->val);
                    result=result->next;
                }
                list1=list1->next;
            }
            else
            {
                if(result==NULL)
                {
                    result=new ListNode(list2->val);
                    head=result;
                }
                else
                {
                    result->next=new ListNode(list2->val);
                    result=result->next;
                }
                list2=list2->next;
            }
        }

        while(list1!=NULL)
        {
            if(result==NULL)
            {
                result=new ListNode(list1->val);
                head=result;
            }
            else
            {
                result->next=new ListNode(list1->val);
                result=result->next;
            }
            list1=list1->next;
        }

        while(list2!=NULL)
        {
            if(result==NULL)
            {
                result=new ListNode(list2->val);
                head=result;
            }
            else
            {
                result->next=new ListNode(list2->val);
                result=result->next;
            }
            list2=list2->next;
        }

        return head;
    }
};