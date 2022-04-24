//
// Created by aris on 2022/4/24.
//
#include "iostream"
#include "climits"

int main() {
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LONG_LONG_MAX;

    cout << "int is " << sizeof(int) << "bytes." << endl;
    cout << "short is " << sizeof(short) << "bytes." << endl;
    cout << "long is " << sizeof(long) << "bytes." << endl;
    cout << "long long is " << sizeof(long long) << "bytes." << endl;

    cout << "Max value:" << endl;
    cout << "int:" << n_int << endl;
    cout << "short:" << n_short << endl;
    cout << "long:" << n_long << endl;
    cout << "long long:" << n_llong << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "schar: " << SCHAR_MAX << endl;

    cout << "int min value: " << INT_MIN << endl;
    cout << "bit per byte:" << CHAR_BIT << endl;
}

