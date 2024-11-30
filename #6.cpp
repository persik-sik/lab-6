#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <set>
using namespace std;

int diffWordsCounter(const string& str) {
    set<string> un;
    string word;
    bool inWord = false;
    for (char ch : str) {
        if (ch != ' ' && ch != ',' && ch != '.') {
            if (ch >= 'A' && ch <= 'Z') ch = ch + 'a' - 'A';
            word += ch;
            inWord = true;
        } else {
            un.insert(word);
            word = "";
            inWord = false;
        }
    }
    if (inWord) un.insert(word);
    return un.size();
}

int main(){
    int words = diffWordsCounter("Can you can a canner.Bruh,bruh qwerty");
    cout << words;
    return 0;
}
