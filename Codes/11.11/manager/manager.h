//�����ļ�
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Manager : public Worker
{
public:
    //���캯��
    Manager(int id, string name, int dId);
    //��ʾ������Ϣ
    void showInfo();
    //��ȡ��λ����
    string getDeptName();
};

Manager::Manager(int id, string name, int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Manager::showInfo()
{
    cout << "ְ�����: " << this->m_Id
         << "\tְ������: " << this->m_Name
         << "\t��λ: " << this->getDeptName()
         << "\t��λְ��: ����ϰ彻�ɵ�����,���·���Ա��" << endl;
}

string Manager::getDeptName()
{
    return string("����");
}