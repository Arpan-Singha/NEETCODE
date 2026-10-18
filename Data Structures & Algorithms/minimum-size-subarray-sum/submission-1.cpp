class Solution {
   public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int sum = 0;
        int mini=INT_MAX;
        while (i < nums.size() && j <nums.size()) 
        {
           sum+=nums[j];

           while(sum>=target && i<nums.size())
           {
              mini=min(mini,j-i+1);
              
              sum-=nums[i];
              i++;

           }
             j++;

        }
        
        if(mini!=INT_MAX)
        return mini;
        else return 0;
        
}
};