class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> result;
        int temp;
        for(int i=0;i<candies.size();i++)
        {
         temp=candies[i]+extraCandies;
         int j;
         for(j=0;j<candies.size();j++)
         {
             if(temp<candies[j])
             {
             break;  
             }
         }
         if(j!=candies.size())
         {
             result.push_back(false);
         }
         else
            result.push_back(true);
        }
        return result;
    }
};