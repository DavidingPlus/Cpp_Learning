#include <iostream>
#include <string.h>
using namespace std;

//���һ��ѧ���࣬������������ѧ�ţ�
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//���ѧ����
class Student
{
public: //����Ȩ��
    //���е����Ժ���Ϊ ͳһ��Ϊ��Ա
    //���� ��Ա���� ��Ա����
    //��Ϊ ��Ա���� ��Ա����

    //����
    string m_Name; //����
    int m_Id;      //ѧ��

    //��Ϊ
    //��ʾ������ѧ��
    void showStudent()
    {
        cout << "����: " << m_Name << " ѧ��: " << m_Id << endl;
    }

    //��������ֵ
    void setName(string name)
    {
        m_Name = name;
    }

    void setId(int Id)
    {
        m_Id = Id;
    }
};

int main()
{
    //����һ������ѧ�� ʵ��������
    Student s1{"����", 1};
    //��ʾѧ����Ϣ
    s1.showStudent();

    Student s2;
    s2.setName("����");
    s2.setId(2);
    s2.showStudent();

    return 0;
}
