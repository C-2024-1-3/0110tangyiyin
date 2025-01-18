#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cout << "请输入三角形的三条边："<<endl;
    cin >> a >> b >> c;
    // 检查三边能构成三角形
    if (a + b > c && a + c > b && b + c > a) {
        // 计算周长
        double l = a + b + c;
        cout << "三角形周长为：" <<l << endl;
        // 判断是否为等腰三角形
        if(a==b ||b==c||a==c){
           cout << "这是一个等腰三角形。" <<  endl;
        }
        else {
           cout << "这不是一个等腰三角形。" <<endl;
        }
    }
    else {
        cout << "这三条边不能构成一个三角形。" << endl;
    }
    return 0;
}