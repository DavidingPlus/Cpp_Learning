#include <iostream>
using namespace std;
#include <fstream> //ͷ�ļ�����

//�ı��ļ� д�ļ�
void test01()
{
    // 1.����ͷ�ļ� fstream
    // 2.����������
    ofstream ofs;
    // 3.ָ���򿪷�ʽ
    ofs.open("text.txt", ios::out);
    // 4.д����
    ofs << "����: ����" << endl;
    ofs << "�Ա�: ��" << endl;
    ofs << "����: 18" << endl;
    // 5.�ر��ļ�
    ofs.close();
}

int main()
{
    test01();

    return 0;
}
