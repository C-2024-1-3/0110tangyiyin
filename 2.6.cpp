#include <iostream>
using namespace std;
int main() {
    int a, b,max,min,c,d;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "错误：请输入正整数。" << endl;
    }
     c = a % b;
     d = a * b;
     while (c != 0) {
         a = b;
         b = c;
         c = a % b;
     }
     if (c == 0) {
         max = b;
         min = b / max;
     }
     cout << "最大公约数为：" << max << '\n';
     cout << "最小公倍数为：" << min << '\n';
    return 0;
}