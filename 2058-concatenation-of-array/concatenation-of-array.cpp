class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int size = nums.size();
        int double_size = 2*size;

        // vector<int> ans(double_size);


        for(int i=0; i<size; i++){
            // ans[i] = ans [i+size] = nums[i];
            nums.push_back(nums[i]);
        }

        return nums;
        
    }
};