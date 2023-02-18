class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int answer=0;
        int count=0;
        unordered_map<char,int> sexy;
        int i=0;
        if(s.length()==1)
        return 1;
        while(i<s.length())
        {
            if(sexy.find(s[i])==sexy.end())
            {
                sexy[s[i]]=i;
                count++;
                if(count>answer)
                answer=count;
                 i++;
            }
            else
            {
                count=0;
                i=sexy[s[i]]+1;
                sexy.clear();
                
            }
           
        }
        return answer;
    }
};