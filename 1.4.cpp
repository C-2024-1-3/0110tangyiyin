#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    unsigned int testUnint = 65534; // 0xfffe
    cout << "output in unsigned int type: " << testUnint << endl;
    cout << "output in char type: " << static_cast<char>(testUnint) << endl;
    cout << "output in short type: " << static_cast<short>(testUnint) << endl; // 为什么结果为-2?
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;
    cout << "output in double type: " << static_cast<double>(testUnint) << endl;
    cout << "output in double type with precision: " << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in hex unsigned int type: " << hex << testUnint << endl; // 16进制输出

    // 8进制输出
    cout << "output in octal unsigned int type: " << oct << testUnint << endl;

    // 将一个实数转换成int并观察结果（这里以2为例）
    double realNumber = 2;
    cout << "output of real number cast to int: " << static_cast<int>(realNumber) << endl;
    system("pause");
    return 0;
}