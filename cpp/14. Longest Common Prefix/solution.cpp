class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int answer,j=0;
        answer=strs[0].length();
            for(int i=1;i<strs.size();i++)
            {
                while(j<answer)
                {
                    if(strs[i][j]==strs[0][j])
                    {
                        if(j==strs[i].length()-1)
                        {
                            if(j<answer)
                            {
                                j++;
                                answer=j;
                            }
                            
                            break;
                        }
                        j++;
                    }
                    else
                    {
                        answer=j;
                        break;
                    }
                    
                } 
                j=0;  
            }
            // answer=2;
        strs[0].erase(answer);
        return strs[0];
    }
};