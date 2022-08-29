#include"MyArry.hpp"
void test1()
{
	Myarry<int>arr1(20);
	Myarry<int>arr2(arr1);
	Myarry<int>arr3(100);
	arr3 = arr1;
}
int main()
{
	test1();
	system("pasue");
	return 0;
}