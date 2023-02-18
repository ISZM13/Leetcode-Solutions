class Solution {
public:
    bool isPalindrome(int x) 
    {
       if(x<0)
       return false;
        stringstream ss;
        ss << x;
        string str = ss.str();
        for(int i=0;i<(str.length())/2;i++)
        {
            if(str[i]==str[str.length()-1-i])
            continue;
            else
            return false;
        }
        return true;
    }
};