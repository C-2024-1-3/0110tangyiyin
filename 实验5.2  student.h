class Student {
public:
    // ���ó�Ա����ԭ������
    void display();
    void set_value(int num, const char* name, char sex); // �����ĳ�Ա��������

private:
    int num;
    char name[20];
    char sex;
};
#pragma once
