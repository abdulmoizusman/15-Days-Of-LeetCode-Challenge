class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int size = nums.size();
        unordered_map<int, int> freqMap;

        for(int i=0; i<size; i++){
            if(freqMap.count(nums[i])){
                return true;
            }
            freqMap[nums[i]] = 1; 
        }

        return false;

    }
};