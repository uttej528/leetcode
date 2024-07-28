#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        vector<int> hash(size, 0);
        
        for (int i = 0; i < size; i++) {
            hash[nums[i]]++;
        }

        for (int i = 1; i < size; i++) {
            if (hash[i] > 1) {
                return i;
            }
        }

        return -1;
    }
};
