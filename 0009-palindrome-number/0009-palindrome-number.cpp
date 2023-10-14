class Solution {
public:
    bool isPalindrome(long long x) {

        if(x<0)
            return false;
        else
        {
            int noofdig=0;
            long long  num=x;
            while(num>0)
            {
                num/=10;
                noofdig++;
            }
            num=x;
            long long  temp=0;
            for(int i=noofdig-1;i>=0;i--)
            {
              temp+=(pow(10,i)*(num%10));
              num/=10;
            }
            if(x==temp)
               return true;
            else 
             return false;
        }
    }
};