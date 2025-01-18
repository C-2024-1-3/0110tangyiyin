#include <iostream>
#include <string>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) {
        char c = hexString[i];
        int value;
        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }
        else {
            return -1;
        }
        result = result * 16 + value;
    }
    return result;
}
int main() {
    string hexString;
    cout << "������ʮ��������: ";
    cin >> hexString;
    int a = parseHex(hexString.c_str());
    if (a != -1) {
        cout << "ת�����ʮ������Ϊ: " << a << endl;
    }
    else {
        cout << "����Ĳ�����Ч��ʮ��������" << endl;
    }
    return 0;
}