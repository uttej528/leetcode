class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        int size = nums.size();
        
        // Count the number of 0s, 1s, and 2s
        for(int i = 0; i < size; i++) {
            if(nums[i] == 0) {
                zero++;
            }
            else if(nums[i] == 1) {
                one++;
            }
            else if(nums[i] == 2) {
                two++;
            }
        }

        // Overwrite nums with the counted values
        int index = 0;
        while(zero--) {
            nums[index] = 0;
            index++;
        }
        while(one--) {
            nums[index] = 1;
             index++;
        }
        while(two--) {
            nums[index] = 2;
             index++;
        }
    }
};
