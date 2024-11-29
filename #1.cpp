#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el) {
    for(; first < last; ++first) if (*first == el) return first;
    return last; 
}
