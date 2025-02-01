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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode *head1 =l1;
        ListNode *head2 = l2;
        int carry =0;
        while(l1 !=NULL && l2 !=NULL)
        {
            l1->val=l1->val + l2->val+carry;
            if(l1->val>9)
            {
                l1->val=l1->val-10;
                carry=1;
            }
            else
            {
                carry=0;
            }
            l2->val=l1->val;
            if(l1->next !=NULL && l2->next!=NULL)
            {
                l1=l1->next;
                l2=l2->next;
            }
            else
            break; 
        }
        if(l1->next ==NULL && l2->next==NULL)
        {
            if(carry==1)
            l1->next= new ListNode(1);
            return head1;
        }
        else if(l1->next==NULL)
        {
            l2=l2->next;
            while(carry!=0)
            {
                l2->val= l2->val+carry;
                if(l2->val>9)
                {
                    l2->val=l2->val-10;
                    carry=1;
                }
                else
                {
                    carry=0;
                    return head2;
                }
                if(l2->next==NULL)
                {
                    l2->next= new ListNode(1);
                    carry=0;
                    return head2;
                }
                l2=l2->next;
            }
            return head2;
        }
        else if(l2->next==NULL)
        {
            l1=l1->next;
            while(carry!=0)
            {
                l1->val= l1->val+carry;
                if(l1->val>9)
                {
                    l1->val=l1->val-10;
                    carry=1;
                }
                else
                {
                carry=0;
                return head1;
                }
                if(l1->next==NULL)
                {
                    l1->next=new ListNode(1);
                    carry=0;
                    return head1;
                }
                l1=l1->next;
            }
            return head1;
        }
        return NULL;
    }
};