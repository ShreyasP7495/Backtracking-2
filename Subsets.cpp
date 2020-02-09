//Time Complexity-O(2^n)--> Total Combinations
//Space Complexity-O(n)-->recursive stack Space
//Did the code execute on Leetcode? Yes

class Solution {
public:
    vector<vector<int>>result;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>k={};
        result.push_back(k);
        backtrack(nums,k,0);
        return result;
    }
    void backtrack(vector<int>& nums,vector<int>k,int index)
    {
        if(index==nums.size())
        {
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            k.push_back(nums[i]);
            result.push_back(k);
            backtrack(nums,k,i+1);
            k.pop_back();
        }
    }
};