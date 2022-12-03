```cpp
vector<vector<int>> vec = {{1,3,2}, {2,4,3}, {0,2,-2}};
DiffArray diffArray;
auto res = diffArray.getModifiedArray(5, vec);
for(auto val : res){
    cout << val << " ";
}
```