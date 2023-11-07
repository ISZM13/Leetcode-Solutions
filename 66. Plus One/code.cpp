class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int len = digits.size();

        //if last digit is not 9
        if(digits[len-1]!=9)
        {
            digits[len-1]++;
            return digits;
        }

        //if last digit is 9
        int carry=1;
        for(int i=len-1;i>-1;i--)
        {
            if((digits[i]+carry)!=10)
            {
                digits[i]++;
                carry=0;
                break;
            }
            else
            {
                digits[i]=0;
                carry=1;
            }
        }
        if(carry==1)
        digits.insert(digits.begin(),carry);
        return digits;
    }
};