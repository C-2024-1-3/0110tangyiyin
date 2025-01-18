#include <iostream>
#include <cctype> // 包含tolower等字符处理函数的头文件
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        char ch = tolower(s[i]); // 将字符转换为小写
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
}
int main() {
    char str[1000]; // 假设字符串的最大长度不超过999个字符（留一个位置给null终止符）
    int counts[26] = { 0 }; // 初始化计数数组为0
    cout << "请输入一个字符串：";
    cin.getline(str, 1000); // 使用getline读入一行字符串，包括空格
    count(str, counts);
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << char(i + 'a') << ": " << counts[i] << endl;
        }
    }
    return 0;
}