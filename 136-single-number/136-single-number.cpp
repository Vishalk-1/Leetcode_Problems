class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int ,int> mp;
        int x=0;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto it : mp){
            if(it.second==1){
                x=it.first;
            }
        }
        return x;
    }
};