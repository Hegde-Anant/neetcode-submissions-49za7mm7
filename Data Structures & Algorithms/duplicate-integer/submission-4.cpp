class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(auto x:nums){
            seen.insert(x);
        }
        int n=seen.size();
        if(n<nums.size()){
            return true;
        }
        return false;
    }
};