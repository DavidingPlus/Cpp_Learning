#include <iostream>
#include <string.h>
using namespace std;

//��������
class Building
{
    // goodGayȫ�ֺ����� Building������,���Է���Building��˽�г�Ա
    friend void goodGay(Building &building);

public:
    string m_SittingRoom; //����

    Building()
    {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }

private:
    string m_BedRoom; //����
};

//ȫ�ֺ���
void goodGay(Building &building)
{
    cout << "�û���ȫ�ֺ��� ���ڷ���: " << building.m_SittingRoom << endl;
    cout << "�û���ȫ�ֺ��� ���ڷ���: " << building.m_BedRoom << endl;
}

void test01()
{
    Building building;
    goodGay(building);
}

int main()
{
    test01();

    return 0;
}
