#include <iostream>
#include <string>
#include <list>
using namespace std;

void Sort(list<int>& l) {
    l.sort([](int a, int b) {
        return a > b;
    });
}

int main() {
    list<int> nums = {1, 5, 4, -3};
    Sort(nums);
    auto it = nums.begin();
    while (it != nums.end()) {
        cout << *it; 
        ++it;  
        if (it != nums.end()) cout << ", ";
    }
    return 0;
}
