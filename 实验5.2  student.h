class Student {
public:
    // 公用成员函数原型声明
    void display();
    void set_value(int num, const char* name, char sex); // 新增的成员函数声明

private:
    int num;
    char name[20];
    char sex;
};
#pragma once
