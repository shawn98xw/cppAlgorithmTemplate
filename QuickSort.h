#include <iostream>
#include <vector>
using namespace std;
namespace Algorithm{
    // Quick Sort 快速排序
    // LeetCode 215.
    static void QuickSort(vector<int>& nums, int l, int r){
        if(l >= r){
            return;
        }
        int i = l;
        int j = r;
        int x = nums[l];
        while(i < j){
            // <- 找第 1 个 < x 的数
            while(i < j && nums[j] >= x){
                j--;
            }
            // 覆盖基准数
            if(i < j){
                nums[i++] = nums[j];
            }

            // -> 找第 1 个 >= x 的数
            while(i < j && nums[i] < x){
                i++;
            }
            // 覆盖nums[j]
            if(i < j) {
                nums[j--] = nums[i];
            }
        }

        nums[i] = x;

        QuickSort(nums, l, i - 1);
        QuickSort(nums, i + 1, r);
    }
}