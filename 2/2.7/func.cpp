//
// Created by aris on 2022/4/24.
//
#include "iostream"

void displayNameAndAddress();

int longDistance(int n);

void myFunc1();

void myFunc2();

void getMonthsByAge();

void covertTemperature(double celsius);

int main() {
    displayNameAndAddress();
    using namespace std;
    cout << longDistance(3) << endl;
    myFunc1();
    myFunc1();
    myFunc2();
    myFunc2();
    getMonthsByAge();
    covertTemperature(20);
}

void displayNameAndAddress() {
    using namespace std;
    cout << "name:Tom," << "address:street1" << endl;
}

int longDistance(int n) {
    return n * 220;
}

void myFunc1() {
    using namespace std;
    cout << "Three blind mice" << endl;
}

void myFunc2() {
    using namespace std;
    cout << "See how they run" << endl;
}

void getMonthsByAge() {
    using namespace std;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << age * 12 << endl;
}

void covertTemperature(double celsius) {
    using namespace std;
    cout << "Please enter a Celsius value: " << celsius << endl;
    cout << celsius << " degrees Celsius is " << 1.8 * celsius + 32.0 << " degrees Fahrenheit" << endl;
}
