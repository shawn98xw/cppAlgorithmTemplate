#include <iostream>
#include <vector>
using namespace std;
namespace Algorithm{
    // Prefix Sum 前缀和
    // LeetCode 303. 304.
    class Prefix {
    private:
        vector<int> preSum = {0};
    public:
        Prefix(vector<int>& nums) {
            for(int i = 0; i < nums.size(); i++){
                preSum.push_back(nums[i] + preSum[i]);
            }
        }
        int sumRange(int left, int right) {
            return preSum[right + 1] - preSum[left];
        }
    };
}