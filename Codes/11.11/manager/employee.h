//��ͨԱ���ļ�
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Employee : public Worker
{
public:
    //���캯��
    Employee(int id, string name, int dId);
    //��ʾ������Ϣ
    void showInfo();
    //��ȡ��λ����
    string getDeptName();
};

Employee::Employee(int id, string name, int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Employee::showInfo()
{
    cout << "ְ�����: " << this->m_Id
         << "\tְ������: " << this->m_Name
         << "\t��λ: " << this->getDeptName()
         << "\t��λְ��: ��ɾ����ɵ�����" << endl;
}

string Employee::getDeptName()
{
    return string("Ա��");
}