#include <iostream>
#include "BinarySearch.h"

using namespace Algorithm;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    auto res = BinarySearch::Search(vec, 5);
    cout << "res = " << res << endl;
    return 0;
}