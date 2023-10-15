class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        if(digits[i]!=9)
        {
            digits[i]=digits[i]+1;
            return digits;
        }
        else{
            if(i == 0) {
                digits[i]=1;
                digits.push_back(0);
            }
            else{
                digits[i--] = 0;
                while(digits[i]==9 && i!=0)
                {
                    digits[i]=0;
                    i--;
                }
                if(i!=0)
                {
                    digits[i]=digits[i]+1;
                }
                else
                {
                    if(digits[i]!=9)
                    {
                        digits[i]+=1;
                    }
                    else{
                    digits[i]=1;
                    digits.push_back(0);
                    }
                }
            }
            return digits;
        }
    }
};