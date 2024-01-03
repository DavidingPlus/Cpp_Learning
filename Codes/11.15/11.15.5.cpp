#include <iostream>
using namespace std;

//��ģ����̳�
template <typename T>
class Base
{
    T m;
};

// class Son : public Base //����,����Ҫ֪�������е�T���������Ͳ��ܼ̳и�����
class Son : public Base<int>
{
};

void test01()
{
    Son s1;
}

//���������ָ��������T����,����Ҳ��Ҫ����ģ��
template <typename T1, typename T2>
class Son2 : public Base<T2>
{
public:
    Son2()
    {
        cout << "T1������Ϊ: " << typeid(T1).name() << endl;
        cout << "T2������Ϊ: " << typeid(T2).name() << endl;
    }

    T1 obj;
};

void test02()
{
    Son2<int, char> s2;
}

int main()
{
    // test01();
    test02();

    return 0;
}
