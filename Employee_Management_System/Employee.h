#pragma once
#include "Worker.h"

using namespace std;

class Employee : public Worker {
public:
    // ��ʾ������Ϣ
    virtual void showInfo();
    // ��ȡ��λ����
    virtual string getDeptName();
    // ���캯��
    Employee(int id, string name, int dId);
    ~Employee();
};
