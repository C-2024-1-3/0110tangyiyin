#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;  // 定义圆周率常量

int main() 
{
    double radius, height, volume;

    cout << "请输入圆锥底的半径：";
    cin >> radius;
    cout << "请输入圆锥的高：";
    cin >> height;         // 从键盘输入圆锥底的半径和锥高

    // 计算圆锥体积
    volume = (1.0 / 3.0) * PI * radius * radius * height;

    // 输出圆锥体积
    cout << "圆锥的体积是： " << volume << endl;

    return 0;
}