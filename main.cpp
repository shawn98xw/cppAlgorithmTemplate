#include <iostream>
#include "BinarySearch.h"
#include "PrefixSum.h"
#include "DiffArray.h"
#include "QuickSort.h"
using namespace Algorithm;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8};
    auto pos = BinarySearch::Search(vec, 5);
    cout << "pos = " << pos << endl;
    return 0;
}