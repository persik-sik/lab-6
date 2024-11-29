#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int wordsCounter(const string& str){
    int s = 1;
    for (int i = 0; i < str.size(); ++i) {
        if ((str[i] == ' ') or (str[i] == ',') or (str[i] == '.')) {
            s +=1;
        }
    }
    return s;
}
