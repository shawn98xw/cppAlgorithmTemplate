#include <iostream>
#include "BinarySearch.h"
#include "PrefixSum.h"
using namespace Algorithm;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    Prefix prefix(vec);
    auto sum = prefix.sumRange(1,5);
    cout << "sum = " << sum << endl;
    return 0;
}