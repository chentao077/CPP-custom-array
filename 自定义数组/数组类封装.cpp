#include"MyArry.hpp"
#include<string>

void printIntArr(Myarry<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}
//����������������
void test1()
{
	Myarry<int>arr1(20);
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_back(i);
	}
	cout << "arr1��ӡ�����" << endl;
	printIntArr(arr1);
	cout << "arr1�Ĵ�С��" << arr1.getSize() << endl;
	cout << "arr1��������" << arr1.getCapacity() << endl;

	Myarry<int>arr2(arr1);
	cout << "arr2��ӡ�����" << endl;
	printIntArr(arr2);
	cout << "arr2βɾ����" << endl;
	arr2.Pop_back();//βɾ��
	printIntArr(arr2);
	cout << "arr2�Ĵ�С��" << arr2.getSize() << endl;
	cout << "arr2��������" << arr2.getCapacity() << endl;
	/*Myarry<int>arr3(100);
	arr3 = arr1;*/
}
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		m_age = age;
		m_name = name;
	}
	string m_name;
	int m_age;
};
void printPersonArray(Myarry<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������ " << arr[i].m_name << "  ���䣺 " << arr[i].m_age << endl;
	}
}
//�����Զ�������
void test2()
{
	Myarry<Person>arr2(10);
	Person p1("�����", 30);
	Person p2("����", 20);
	Person p3("槼�", 18);
	Person p4("���Ѿ�", 15);
	Person p5("����", 24);
	arr2.Push_back(p1);
	arr2.Push_back(p2);
	arr2.Push_back(p3);
	arr2.Push_back(p4);
	arr2.Push_back(p5);
	printPersonArray(arr2);

	cout << "arr2�Ĵ�С��" << arr2.getSize() << endl;
	cout << "arr2��������" << arr2.getCapacity() << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}