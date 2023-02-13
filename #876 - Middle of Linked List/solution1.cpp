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
    ListNode* middleNode(ListNode* head)
    {
        int num = 1;
         ListNode *ptr = new ListNode();
         ptr = head;
        while(ptr->next!=NULL)
        {
            num++;
            ptr=ptr->next;
        }
        num=num/2;
        ptr = head;
        for(int i=0;i<num;i++)
        {
            ptr=ptr->next;
        }
        return ptr;
    }
};