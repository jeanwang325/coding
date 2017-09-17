class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
	sort(sums.begin(), sums.end(), sums);
	int headp = 0; //head index
	int tailp = sums.size()-1; // tail index
	while(headp < tailp){
	     if(sums[headp] + sums[tailp] == target){
		res.push_back(headp);
		res.push_back(tailp);
		break;
	     }
	     else if(sums[headp]+sums[tailp] > target)
		tailp--;
	     else
		headp++;
	}
	return res;	
        
    }
};
