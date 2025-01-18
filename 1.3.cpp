#include <iostream>
using namespace std;
int main() {
    cout << "char length: " << sizeof(char) << " byte" << (sizeof(char) == 1 ? "" : "s") << endl;
    cout << "short length: " << sizeof(short) << " byte" << (sizeof(short) == 1 ? "" : "s") << endl;
    cout << "int length: " << sizeof(int) << " byte" << (sizeof(int) == 1 ? "" : "s") << endl;
    cout << "long length: " << sizeof(long) << " byte" << (sizeof(long) == 1 ? "" : "s") << endl;
    cout << "long long length: " << sizeof(long long) << " byte" << (sizeof(long long) == 1 ? "" : "s") << endl;
    cout << "float length: " << sizeof(float) << " byte" << (sizeof(float) == 1 ? "" : "s") << endl;
    cout << "double length: " << sizeof(double) << " byte" << (sizeof(double) == 1 ? "" : "s") << endl;

    return 0;
}