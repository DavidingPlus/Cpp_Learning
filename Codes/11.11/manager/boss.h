//�ϰ��ļ�
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Boss : public Worker
{
public:
    //���캯��
    Boss(int id, string name, int dId);
    //��ʾ������Ϣ
    void showInfo();
    //��ȡ��λ����
    string getDeptName();
};

Boss::Boss(int id, string name, int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Boss::showInfo()
{
    cout << "ְ�����: " << this->m_Id
         << "\tְ������: " << this->m_Name
         << "\t��λ: " << this->getDeptName()
         << "\t��λְ��: ����˾��������" << endl;
}

string Boss::getDeptName()
{
    return string("�ܲ�");
}