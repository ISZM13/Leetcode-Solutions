class Solution {
public:
    bool isLongPressedName(string name, string typed)
    {
        int j =0;
        if(name[0]==typed[0])
         j++;
        else
            return false;
        for(int i=1;i<typed.length();i++)
        {
            if(typed[i]==name[j])
            {
                j++;
            }
            else if(typed[i]==name[j-1] )
            continue;
            else
            return false;
        }
        if(j==name.length())
        return true;
        else
            return false;
    }
};