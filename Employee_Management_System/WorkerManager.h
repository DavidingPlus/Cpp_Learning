#pragma once         // ��ֹͷ�ļ��ظ�����
#include <iostream>  //�������������ͷ�ļ�
#include <string>

using namespace std;  // ʹ�ñ�׼�������ռ�

class WorkerManager {
public:
    // չʾ�˵�
    void showMenu();

    // �˳�ϵͳ
    void exitSystem();

    // ���캯��
    WorkerManager();

    // ��������
    ~WorkerManager();
};
