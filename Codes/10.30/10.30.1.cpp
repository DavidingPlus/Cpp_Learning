#include <iostream>
using namespace std;

//��ָ����ó�Ա����

class Person
{
public:
    void showClassName()
    {
        cout << "this is Person class" << endl;
    }

    void showPersonAge()
    {
        //����ԭ������Ϊ�����ָ��Ϊ Nullptr
        if (this == nullptr)
            return;
        cout << "age= " << this->m_age << endl;
    }

    int m_age;
};

void test01()
{
    Person *p = nullptr;
    p->showClassName();
    p->showPersonAge();
}

int main()
{
    test01();

    return 0;
}
