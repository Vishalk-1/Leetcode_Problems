class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        int ln=nums.size();
        if(target>nums[ln-1]){
            return ans=ln;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return ans= i;
            }
            else if(target>nums[i] && target<nums[i+1]){
                return ans=i+1;
            }
        }
        return ans;
    } 
};