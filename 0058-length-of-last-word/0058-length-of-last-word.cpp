class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,length=0, flag = 0;
        i=s.size()-1;
        while(i>=0)
        {
           if(s[i]!=' ')
           {
               flag = 1;
               length++;
           }
           else if(flag == 1) break;
            i--;

        }
        return length;
    }
};