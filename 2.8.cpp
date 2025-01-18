#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a, x, y;
    cout << "请输入一个数 a：";
    cin >> a;
    if (a < 0) {
        cout << "输入的a为负数，将计算其绝对值的平方根" << endl;
        a = -a;
    }
    x = a;
    y = 0.5 * (x + a / x);
    while (fabs(x - y) >= 0.0000000001) {
        x = y;
        y = 0.5 * (x + a / x);
    }
    cout << "a的平方根是： " << y << endl;
    if (a < 0) {
        cout << "输入的a为负数，其绝对值的平方根是： " << -y << endl;
        a = -a;
    }
    return 0;
}