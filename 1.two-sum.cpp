class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> hash_t; // hash table
        for(int i = 0; i < nums.size(); ++i){
            hash_t[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); ++i){
            int residual = target - nums[i];
            if(hash_t.find(residual)!=hash_t.end() && hash_t[residual] > i){
                res.push_back(i);
                res.push_back(hash_t[residual]);
                break;
            }
        }
        return res;        
    }
};