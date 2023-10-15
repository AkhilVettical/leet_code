class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j;
        for(i=0;i<haystack.size();i++)
        {
            for(j=i;j<(needle.size()+i);j++)
            {
                if(haystack[j]!=needle[j-i])
                   break;
            }
            if(j==(needle.size()+i))
             return i;
        }
        return -1;
    }
};