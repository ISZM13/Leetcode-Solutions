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
    ListNode *ptr;
    ListNode *sir;
    Solution(ListNode* head) 
    {
        ptr = head;
        sir = head;
    }

    
    int getRandom() 
    {
        ptr=sir;
        int size =1;
        while(ptr->next!=NULL)
        {
            size++;
            ptr=ptr->next;
        }
        int num = rand()%size;
        ptr=sir;
        for(int i=0;i<num;i++)  
        {
            ptr=ptr->next;
        }  
        return ptr->val;  
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */