class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int size = nums.size();
        unordered_map<int, int> freqMap;

        for(int i=0; i<size; i++){
            freqMap[nums[i]]++; 
        }

        for(auto it: freqMap){
            if(it.second > 1){
                return true;
            }
        }

        return false;

    }
};