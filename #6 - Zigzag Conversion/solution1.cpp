    #include<bits/stdc++.h>
    #include<string>
    using namespace std;
    
    string  convert(string s, int numRows) 
    {
        if(numRows>=s.length())
        return s;
        vector<char> arr[numRows];
        string answer;
        int j=0,i=0;
        while(j!= s.length()-1)
        {
            if(i==4)
            {
               while(j!=s.length()-1 || i)
                {
                    arr[i].push_back(s[j]);
                    j++;
                    i--;
                    if(i==1)
                    {
                        break;
                    }
                }
            }
            else 
            {
                arr[i].push_back(s[j]);
                j++;   
                i++;   
            }
          
        }
        int num=0;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;i<arr[i].size();j++)
            {
                answer[num]=arr[i][j];
            }
        }
        return answer;
    }

int main ()
{
    string str = "PAYPALISHIRING";
    int num =3;
    string output;
    output = convert(str,num);
    cout<<output;
}
