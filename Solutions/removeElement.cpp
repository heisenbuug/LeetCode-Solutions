class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int ctr = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0;i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums[i] = INT_MAX;
                ctr++;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size()-ctr;
    }
};
