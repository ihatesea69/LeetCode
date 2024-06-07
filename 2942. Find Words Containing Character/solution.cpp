#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> result = {};

    for (int i = 0; i < words.size(); i++) {
        vector<char> temp;
        for (int k = 0; k < words[i].length(); k++) {
            temp.push_back(words[i][k]);
        }
        for (int j = 0; j < words[i].length(); j++) {
            if (temp[j] == x) {
                result.push_back(i);
                break;
            }
        }
    }

    return result;
}

int main() {
    vector<string> test123 = {"abc", "bcd", "aaaa", "cbc"};
    char n = 'z';
    vector<int> outputz = findWordsContaining(test123, n);

    for (int i = 0; i < outputz.size(); i++) {
        cout << outputz[i] << endl;
    }

    return 0;
}