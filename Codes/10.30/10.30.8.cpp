#include <iostream>
using namespace std;

//���ص��������

//�Զ�������
class MyIntteger
{
    friend ostream &operator<<(ostream &cout, MyIntteger &myint);

public:
    MyIntteger() : m_Num(0) {}

    //����ǰ��++�����
    MyIntteger &operator++()
    {
        //�Ƚ���++����
        this->m_Num++;
        //�ٽ�����������
        return *this;
    } //��������,��Ϊ�������ֵ�Ļ��Ǵ���һ���µĶ���,����Ҫ��֤һֱ�Ըö�����в���,������Ҫ������������

    //���غ���++�����
    //��� int ����ռλ����,������ͨ�����������������ǰ�úͺ��õ���
    MyIntteger &operator++(int)
    {
        //�� ��¼��ʱ�Ľ��
        MyIntteger *temp = new MyIntteger(*this); //Ϊ�˷�ֹ�ֲ��������ú��ͷŶ��޷�ʹ������,�ڶ�����������!!!
        //�� ����
        this->m_Num++;
        //��󽫼�¼�������
        return *temp;
    }

    int m_Num;
};

//�������������
ostream &operator<<(ostream &cout, MyIntteger &myint)
{
    cout << myint.m_Num;
    return cout;
}

void test01()
{
    MyIntteger myint;
    cout << ++myint << endl;
}

void test02()
{
    MyIntteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{
    // test01();
    test02();

    return 0;
}
