class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        cout<<len;
        int ans=0;
        for(int i=len-1;i>-1;i--)
        {
            if(s[i]==' ' && ans==0)
            continue;
            else if(s[i]==' ' && ans!=0)
            break;
            else 
            ans++;
        }
        return ans;
    }
};