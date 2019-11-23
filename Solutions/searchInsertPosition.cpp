class Solution {
public:
    int find(vector<int>& foo, int start, int stop, int key)
    {
        int mid = (start + stop) / 2;
        
        if(stop < start)
            return mid+1;

        if(foo[mid] == key)
            return mid;
        
        if(key > foo[mid])
            return find(foo, mid + 1, stop, key);
        
        else
            return find(foo, start, mid - 1, key);
    }
    
    int searchInsert(vector<int>& nums, int target) {
        
        if(target < nums[0])
            return 0;
        
        int ans = find(nums, 0, nums.size()-1, target);
        return ans;
    }
};
