#include <iostream>
using namespace std;

//�̳��еĶ���ģ��
class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son : public Base
{
public:
    int m_D;
};

void test01()
{
    // 16
    //�ڸ��������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
    //������˽�г�Ա���� �Ǳ������������� ��˷��ʲ��� ����ȷʵ���̳���ȥ��
    cout << "Size of Son= " << sizeof(Son) << endl;
}

int main()
{
    test01();

    return 0;
}
