#include <iostream>
#include <list>
using namespace std;

void reverseNum(list<int>& l){
    list<int> res;
    for (auto i = l.begin(); i != l.end(); ++i){
        res.push_back(-(*i)); 
        res.push_back(*i);  ;
    }
    auto it = res.begin();
    while (it != res.end()) {
        cout << *it; 
        ++it;  
        if (it != res.end()) {
            cout << ", ";
        }
    }
}

int main() {
    list<int> nums = {1, 5, 4, -3};
    reverseNum(nums);
}
