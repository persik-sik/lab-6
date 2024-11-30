#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <set>
using namespace std;

void plusesDeleter(vector<int>dan) {
    vector<int> vec;
    for (const auto& num : dan){
        if (num <= 0) vec.push_back(num);
    }
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i];
        if (i < vec.size()-1) cout << ", ";
    }
}

int main() {
    vector<int> v = {1, 0, -8, -9, 0, 10, 23, -7};
    plusesDeleter(v);
    return 0;
}
