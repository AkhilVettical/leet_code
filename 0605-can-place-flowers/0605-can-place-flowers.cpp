class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;
        while(i<flowerbed.size() && n!=0)
        {  
           if(flowerbed.size()==1)
           {
               if(flowerbed[0]==0)
               {
                   if(n!=0)
                   {
                    flowerbed[0]=1;
                    n--;
                   }
                 i++;  
               }
               else
               i++;
           }
           else if(flowerbed[i]==1)
           i+=2;
           else
           {
               if(i==0)
               {
                   if(flowerbed[i+1]==0)
                   {
                       flowerbed[i]=1;
                       i+=2;
                       n--;
                   }
                   else 
                   i++;
               }
                else if(i==flowerbed.size()-1)
               {
                   if(flowerbed[i-1]==0)
                   {
                       flowerbed[i]=1;
                       n--;
                       i++;
                   }
                   else
                   i++;
               }
               else if(flowerbed[i-1] ==0 && flowerbed[i+1]==0)
               {
                flowerbed[i]=1;
                i+=2;
                n--;
               }
               else
               i++;
           }
        }
        if(n==0)
        return true;
        return false;
    }
};