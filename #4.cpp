#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> wordsMapCounter(const string& str) {
    map<string, int> wordCount;
    string word; 
    bool inWord = false;
    for (char ch : str) {
        if (ch != ' ' && ch != ',' && ch != '.') {
            word += ch;
            inWord = true;
        } 
        else {
            if (inWord) {
                wordCount[word]++;
                word = ""; 
                inWord = false; 
            }
        }
    }
    if (inWord) {
        wordCount[word]++;
    }
    return wordCount;
}
