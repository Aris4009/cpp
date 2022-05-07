//
// Created by HC on 2022/5/7.
//
#include "iostream"
#include "cstring"
#include "string"

int main() {
    using namespace std;

    char a[80] = "abc1";
    char b[20] = "abc";

    cout << strcmp(a, b) << endl;

    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}

