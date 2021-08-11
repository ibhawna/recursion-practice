class Solution {
public:
    
    void subsetsUtil(vector<int> nums,int idx,vector<int> arr,vector<vector<int>> &ans)
    {
        ans.push_back(arr);
        for(int i=idx;i<nums.size();++i)
        {
            arr.push_back(nums[i]);
            subsetsUtil(nums,i+1,arr,ans);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr;
        vector<vector<int>> ans;
        subsetsUtil(nums,0,arr,ans);
        return ans;
    }
};