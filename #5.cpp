#include <vector>
#include <string>
#include <iostream>
#include <set>
using namespace std;

vector<string> uniqueWords(const string& str){
    vector<string> res;
    set<string> un;
    string word;
    bool inWord = false;
    for (char ch : str) {
        if (ch != ' ' && ch != ',' && ch != '.') {
            if (ch >= 'A' && ch <= 'Z') ch = ch + 'a' - 'A';
            word += ch;
            inWord = true; 
        } 
        else {
            if (inWord) {
                un.insert(word);
                word = ""; 
                inWord = false; 
            }
        }
    }
    if (inWord) un.insert(word);
    for (const auto& q : un) res.push_back(q);
    return res;
}
 int main() {
    vector<string> unique = uniqueWords("Can you can a canner.Bruh,bruh qwerty");
    for (int i = 0; i < unique.size(); ++i)  {
        cout << unique[i];
        if (i != unique.size() - 1) {
            cout << ", ";
        }
    }
// unique  == {"can", "you"};
 }
