#include <iostream>
using namespace std;
int main() {
    char input;
    cout << "请输入一个字符: ";
    cin >> input;
    if (std::islower(input)) 
    {
        // 如果字符是小写，转换为大写输出
        char uppercase = toupper(input);
        cout << "大写字符是: " << uppercase << endl;
    }
    else
    {
        // 否则，输出其后继字符的ASCII码值
        char nextChar = input + 1;
       cout << "后继字符的ASCII码值是: " << static_cast<int>(nextChar) << endl;
    }
    return 0;
}