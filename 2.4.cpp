#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char t;
    cout << "请输入第一个数字: " << endl;
    cin >> num1;
    cout << "请输入运算符 (+, -, *, /, %): " << endl;
    cin >> t;
    cout << "请输入第二个数字: " << endl;
    cin >> num2;

    switch (t) {
    case '+':cout<< num1 + num2;
        break;
    case '-':cout<< num1 - num2;
        break;
    case '*':cout<< num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "除数不能为0。" <<endl;
        }
        else {
            cout<<num1 / num2<<endl;
        }
        break;
    case '%':
        if (num2 == 0 ) {
            cout << "除数不能为0。" <<endl;
        }
        else {
            cout<<(int)num1 % (int)num2<<endl;
        }
        break;
    default:cout << "运算符非法。" <<endl;
        break;
    }
    return 0;
}