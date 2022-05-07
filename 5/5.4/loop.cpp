//
// Created by HC on 2022/5/7.
//
#include "iostream"

int main() {
    using namespace std;
    double price[5] = {1.0, 2.0, 3.0, 4.0};
    for (double x: price) {
        cout << x << endl;
    }

    for (double &x: price) {
        x = x * 0.8;
        cout << x << endl;
    }
}
