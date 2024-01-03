#pragma once         //��ֹͷ�ļ��ظ�����
#include <iostream>  //����������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�ռ�
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
    //���캯��
    WorkerManager();

    //չʾ�˵�
    void Show_Menu();

    //�˳�ϵͳ
    void ExitSystem();

    //��¼ְ������
    int m_EmpNum;

    //ְ������ָ��
    Worker **m_EmpArray;

    //���ְ��
    void Add_Emp();

    //�����ļ�
    void save();

    //��������
    ~WorkerManager();
};

//����ʵ��(�����洴��һ��cpp�������)
WorkerManager::WorkerManager() {}

void WorkerManager::Show_Menu()
{
    cout << "********************************************" << endl;
    cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
    cout << "*************  0.�˳��������  *************" << endl;
    cout << "*************  1.����ְ����Ϣ  *************" << endl;
    cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
    cout << "*************  3.ɾ����ְְ��  *************" << endl;
    cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
    cout << "*************  5.����ְ����Ϣ  *************" << endl;
    cout << "*************  6.���ձ������  *************" << endl;
    cout << "*************  7.��������ĵ�  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

WorkerManager::~WorkerManager()
{
    this->m_EmpNum = 0;
    if (this->m_EmpArray)
    {
        delete[] this->m_EmpArray;
        this->m_EmpArray = nullptr;
    }
}

void WorkerManager::ExitSystem()
{
    cout << "��ӭ�´�ʹ��" << endl;
    system("pause");
    exit(0);
}

void WorkerManager::Add_Emp()
{
    cout << "���������ְ������: " << endl;

    int addNum = 0; //�����û�����������
    cin >> addNum;
    if (addNum)
    {
        //���
        //��������¿ռ��С
        int newSize = this->m_EmpNum + addNum; //�¿ռ����� = ԭ����¼���� + ����������

        //�����¿ռ�
        Worker **newSpace = new Worker *[newSize];

        //��ԭ���ռ�����,�������¿ռ���
        if (this->m_EmpArray)
        {
            for (int i = 0; i < this->m_EmpNum; ++i)
                newSpace[i] = this->m_EmpArray[i];
            //�������������
            for (int i = 0; i < addNum; ++i)
            {
                int id;      //ְ�����
                string name; //ְ������
                int dSelect; //����ѡ��

                cout << "�������" << i + 1 << "����ְ�����: " << endl;
                cin >> id;
                cout << "�������" << i + 1 << "����ְ������: " << endl;
                cin >> name;
                cout << "��ѡ���ְ����λ: " << endl;
                cout << "1.��ְͨ��:  " << endl;
                cout << "2.����: " << endl;
                cout << "3.�ϰ�: " << endl;
                cin >> dSelect;

                Worker *worker = nullptr;
                switch (dSelect)
                {
                case 1: //��ͨԱ��
                    worker = new Employee(id, name, 1);
                    break;
                case 2: //����
                    worker = new Manager(id, name, 2);
                    break;
                case 3: //�ϰ�
                    worker = new Boss(id, name, 3);
                    break;
                default:
                    break;
                }
                //������ְ��ְ��,���浽������
                newSpace[this->m_EmpNum + i] = worker;
            }
            //�ͷ�ԭ�пռ�
            delete[] this->m_EmpArray;

            //�����¿ռ��ָ��
            this->m_EmpArray = newSpace;

            //�����µ�ְ������
            this->m_EmpNum = newSize;

            //��ʾ��Ϣ
            cout << "�ɹ����" << addNum << "����ְ����" << endl;

            this->save();
        }
    }
    else
        cout << "��������" << endl;

    system("pause");
    system("cls");
}

void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out); //������ķ�ʽ���ļ� д�ļ�

    //��ÿ���˵�����д���ļ�
    for (int i = 0; i < this->m_EmpNum; ++i)
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->m_DeptId << endl;

    //�ر��ļ�
    ofs.close();
}