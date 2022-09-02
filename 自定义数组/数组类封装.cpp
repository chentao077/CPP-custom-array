#include"MyArry.hpp"
#include<string>

void printIntArr(Myarry<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}
//测试内置数据类型
void test1()
{
	Myarry<int>arr1(20);
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_back(i);
	}
	cout << "arr1打印输出：" << endl;
	printIntArr(arr1);
	cout << "arr1的大小：" << arr1.getSize() << endl;
	cout << "arr1的容量：" << arr1.getCapacity() << endl;

	Myarry<int>arr2(arr1);
	cout << "arr2打印输出：" << endl;
	printIntArr(arr2);
	cout << "arr2尾删法后：" << endl;
	arr2.Pop_back();//尾删法
	printIntArr(arr2);
	cout << "arr2的大小：" << arr2.getSize() << endl;
	cout << "arr2的容量：" << arr2.getCapacity() << endl;
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
		cout << "姓名： " << arr[i].m_name << "  年龄： " << arr[i].m_age << endl;
	}
}
//测试自定义类型
void test2()
{
	Myarry<Person>arr2(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);
	arr2.Push_back(p1);
	arr2.Push_back(p2);
	arr2.Push_back(p3);
	arr2.Push_back(p4);
	arr2.Push_back(p5);
	printPersonArray(arr2);

	cout << "arr2的大小：" << arr2.getSize() << endl;
	cout << "arr2的容量：" << arr2.getCapacity() << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}