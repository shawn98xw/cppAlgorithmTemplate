#include <iostream>
#include <vector>
using namespace std;
namespace Algorithm{
    // 差分数组
    // LeetCode 370.
    class DiffArray {
    private:
        vector<int> diff;
    public:
        vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
            if(length == 0)
                return vector<int>();

            diff.resize(length + 1);
            for(auto& update : updates){
                auto& val = update[2];

                diff[update[0]] += val;
                diff[update[1] + 1] -= val;
            }

            vector<int> ret(length);
            ret[0] = diff[0];
            for(int i = 1; i < length; i++){
                ret[i] = ret[i - 1] + diff[i];
            }
            return ret;
        }
    };
}

