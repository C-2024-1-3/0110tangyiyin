#include <iostream>
#include <cctype> // ����tolower���ַ���������ͷ�ļ�
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        char ch = tolower(s[i]); // ���ַ�ת��ΪСд
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
}
int main() {
    char str[1000]; // �����ַ�������󳤶Ȳ�����999���ַ�����һ��λ�ø�null��ֹ����
    int counts[26] = { 0 }; // ��ʼ����������Ϊ0
    cout << "������һ���ַ�����";
    cin.getline(str, 1000); // ʹ��getline����һ���ַ����������ո�
    count(str, counts);
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << char(i + 'a') << ": " << counts[i] << endl;
        }
    }
    return 0;
}