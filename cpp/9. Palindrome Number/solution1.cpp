class Solution {
public:
    bool isPalindrome(int x) 
    {
       if(x<0)
       return false;
       if(x<10)
       return true;
       int val =x;
        vector<int> num;
       while(1)
       {
           val=val/10;
           if(val==0)
           {
               break;
           }
            else
            {
                
            }           
       }
        return true;
    }
};