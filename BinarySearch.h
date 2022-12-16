#include <iostream>
#include <vector>
using namespace std;
namespace Algorithm{
    // 二分查找
    // Binary Search Algorithm
    class BinarySearch{
    public:
        static int Search(vector<int>& nums, int target) {
            int l = -1;
            int r = nums.size();

            while(l + 1 != r){
                int m = (r - l) / 2 + l;

//                if(nums[m] == target)
//                    return m;

                if(target >= nums[m])
                    l = m;
                else
                    r = m;
            }
            return l;
        }
    };
}