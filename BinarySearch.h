#include <iostream>
#include <vector>
using namespace std;
namespace Algorithm{

    // Binary Search Algorithm
    class BinarySearch{
    public:
        static int Search(vector<int>& nums, int target) {
            int l = 0;
            int r = nums.size() - 1;

            while(l <= r){
                int m = (r - l) / 2 + l;

                if(nums[m] == target)
                    return m;

                if(nums[m] > target)
                    r = m - 1;
                else
                    l = m + 1;
            }
            return -1;
        }
    };
}