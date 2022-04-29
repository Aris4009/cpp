//
// Created by aris on 2022/4/24.
//
#include "iostream"
#include "string"

using namespace std;

string convert(long address);

string convert2(long address);

int main() {
    int a = 1;
    const int *p;
    p = &a;
    cout << "a " << a << endl;
    cout << "&a " << &a << endl;
    cout << "a size " << sizeof(a) << endl;
    cout << "*p " << *p << endl;
    cout << "p " << p << endl;
    cout << "p size " << sizeof(p) << endl;
    cout << "&p " << &p << endl;
    cout << convert((long) p) << endl;
    cout << convert2((long) p) << endl;
}

string convert(long address) {
    if (address == 0) {
        return "0";
    }
    if (address == 1) {
        return "1";
    }
    string r;
    long v = address % 2;
    if (v == 0) {
        r = "0";
    } else {
        r = "1";
    }
    return convert(address / 2) + r;
}

string convert2(long address) {
    if (address == 0) {
        return "0";
    }
    if (address == 1) {
        return "1";
    }
    string r;
    while (address > 0) {
        long v = address % 2;
        if (v == 0) {
            r = "0" + r;
        } else {
            r = "1" + r;
        }
        address = address / 2;
    }
    return r;
}
