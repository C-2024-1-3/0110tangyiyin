#include <iostream>
#include <iomanip>         // 用于设置输出格式
using namespace std;
int main() {
    double F;
    cout << "请输入华氏温度: " << endl;;
    cin >> F;
    // 华氏温度转换为摄氏温度的公式：C = (F - 32) * 5 / 9
    double C = (F - 32) * 5.0 / 9.0;
    // 设置输出格式为保留两位小数
    cout << fixed << setprecision(2);
    cout << "对应的摄氏温度是: " << C << endl;
    return 0;
}