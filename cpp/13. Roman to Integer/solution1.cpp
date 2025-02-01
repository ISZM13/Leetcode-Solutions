class Solution {
public:
    int romanToInt(string s) 
    {
        unordered_map<char,int> value;
        value['I'] = 1;
        value['V'] = 5;
        value['X'] = 10;
        value['L'] = 50;
        value['C'] = 100;
        value['D'] = 500;
        value['M'] = 1000;
        int answer=0;
        for(int i=0;i<s.length();i++)
        {

            if(value[s[i]]<value[s[i+1]])
            {
                answer-=value[s[i]];
            }
            else
            answer+=value[s[i]];
        }
        return answer;
    }
};