#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;

int main()
{
    //ʵ���������߶���
    WorkerManager wm;

    int choice = 0; //�����洢�û���ѡ��
    while (1)
    {
        //����չʾ�˵���Ա����
        wm.Show_Menu();

        cout << "����������ѡ��: " << endl;
        cin >> choice; //�����û���ѡ��

        switch (choice)
        {
        case 0: //�˳�ϵͳ
            wm.ExitSystem();
            break;
        case 1: //���ְ��
            wm.Add_Emp();
            break;
        case 2: //��ʾְ��
            break;
        case 3: //ɾ��ְ��
            break;
        case 4: //�޸�ְ��
            break;
        case 5: //����ְ��
            break;
        case 6: //����ְ��
            break;
        case 7: //����ļ�
            break;
        default:
            system("cls"); //��������
            break;
        }
    }

    return 0;
}
