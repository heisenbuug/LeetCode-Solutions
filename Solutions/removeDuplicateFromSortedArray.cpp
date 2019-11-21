class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int ctr = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
                ctr++;
            else
                nums[i-ctr] = nums[i];
        }
        return nums.size()-ctr;
    }
};

