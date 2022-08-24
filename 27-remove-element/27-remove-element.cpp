class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    sort(nums.begin(),nums.end());
    int ans=0,prev=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[prev]=nums[i];
                prev++;
                ans++;
            }
        }
     return ans;   
    }
};
