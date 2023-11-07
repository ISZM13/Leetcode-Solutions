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
        ListNode *pehli = l1;
        ListNode *dooji =l2;
        ListNode *temp = new ListNode();
        int first=1, second=1;
        while(pehli->next != NULL)
        {
            first++;
            pehli=pehli->next;
        }
        while(dooji->next != NULL)
        {
            second++;
            dooji=dooji->next;
        }
        pehli = l1;
        dooji = l2;
        int carry=0,sum=0;
        if(first>second)
        {
            for(int i=0;i<second;i++)
            {
                pehli->val= pehli->val + dooji->val + carry;
                if(pehli->val>9)
                {
                    pehli->val= pehli->val-10;
                    carry=1;
                }
                else
                carry=0;
                pehli=pehli->next;
                dooji=dooji->next;
            }
            if(carry==1)
            {
                for(int i=second;i<first;i++)
                {
                    pehli->val=pehli->val + carry;
                    if(pehli->val>9)
                    {
                        pehli->val= pehli->val-10;
                        carry=1;
                    }
                    else
                    carry=0;
                    pehli=pehli->next;
                }
                // if(carry==1)
                {
                    pehli=temp;
                    pehli->val=1;
                    pehli->next= NULL;
                }
            }
            if(carry==1)
                {
                    ListNode *temp = new ListNode();
                    pehli=temp;
                    temp->val=1;
                    temp->next= NULL;
                }
            return l1;
        }
        else
        {
            for(int i=0;i<first;i++)
            {
                dooji->val= dooji->val + pehli->val + carry;
                if(dooji->val>9)
                {
                    dooji->val= dooji->val-10;
                    carry=1;
                }
                else
                carry=0;
                dooji=dooji->next;
                pehli=pehli->next;
            }
            if(carry==1)
            {
                for(int i=second;i<first;i++)
                {
                    dooji->val=dooji->val + carry;
                    if(dooji->val>9)
                    {
                       dooji->val= dooji->val-10;
                        carry=1;
                    }
                    else
                    carry=0;
                    dooji=dooji->next;
                }
                if(carry==1)
                {
                    ListNode *temp = new ListNode();
                    dooji=temp;
                    temp->val=1;
                    temp->next= NULL;
                }
            }
            return l2;
        }
    }
};