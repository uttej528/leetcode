class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's Voting Algorithm

        int votes = 0;
        int candidate = -1;
        int count = 0;
        int size = nums.size();

        for(int i = 0; i < size; i++) {
            if(votes == 0) {
                candidate = nums[i];
                votes = 1;
            } else if(candidate == nums[i]) {
                votes++;
            } else {
                votes--;
            }
        }

        for(int i = 0; i < size; i++) {
            if(candidate == nums[i]) {
                count++;
            }
        }

        if(count > size / 2) {
            return candidate;
        } else {
            return -1;
        }
    }
};
