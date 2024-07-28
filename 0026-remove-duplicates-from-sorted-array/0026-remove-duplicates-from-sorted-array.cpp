class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;int j=0;
        vector<int> temp;
        for(j=1;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
            {
                
                continue;
            }else if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }

};