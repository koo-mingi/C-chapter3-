#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

//int main(void) {
//	int a = 10; //int�� ������ ����� �ʱ�ȭ (a1111110)
//	int *pi; //������ ���� (a22222220)
//	int **ppi; //2�� ������ ���� (a3333330)
//
//	pi = &a; //int�� ������ �ּҸ� �����Ϳ� ����
//	ppi = &pi;
//
//	cout << "---------------------------------------------" << endl;
//	cout << "����" << setw(12) <<  "&����" << setw(10) << "*����" << setw(10) << "**����" << endl;
//	cout << "---------------------------------------------" << endl;
//	cout << a << setw(16) << &a << endl;
//	cout << pi << setw(10) << &pi <<setw(10)<<*pi<< endl;
//	cout << ppi << setw(10) << &ppi<<setw(10)<<*ppi<<setw(10)<<**ppi<<endl;
//	
//}
//
//int main()
//{
//	int ary1[4] = { 1,2,3,4 };
//	int ary2[4] = { 11,12,13,14 };
//	int ary3[4] = { 21,22,23,24 };
//
//	int *pary[3] = { ary1,ary2,ary3 };
//	//{{1,2,3,4},{11,12,13,14},{21,22,23,24}}
//
//	
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << setw(3)<<pary[i][j];
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << setw(3) << *(*(pary + i) + j);
//		}
//		cout << endl;
//	}	
//}

void swap_ptr(char **ppa, char **ppb); //������Ÿ���̹Ƿ� �Լ�����

int main(void) {

	char a[] = "success";
	char b[] = "failuer";
	char *pa = a; // a�� ��� �ִ� ���� ��°�� �Ѿ��.
	char *pb = b;

	cout << "pa -> " << &pa << "  a ->" << &a << endl;
	cout << "pa -> " << pa << "  pb ->" << pb << endl; // pa���� a�� �ּ� ��� success��� ���� ����ִ�.
	swap_ptr(&pa,&pb);
	cout << "pa -> " << pa << "  pb ->" << pb << endl;
	return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
	char *pt;
	pt = *ppa;  // ppa�� ��� �ִ� ���� pa�� �ּҰ�. *ppa�� pa�� ����ִ� �ּҰ��� a�� �ּҰ�.
	*ppa = *ppb; // *ppa = pa�� ��� �ִ� �ּҰ��̴ϱ�, pa�� ��� �ִ� �ּҸ� b�� �ּҰ����� �ٲ�
	*ppb = pt;  // *ppb = pb�� ��� �ִ� �ּҰ��̴ϱ�, pb�� ��� �ִ� �ּҸ� a�� �ּҰ����� �ٲ�.

	// ���������ʹ� �������� �ּҰ��� �����Ѵ�. ppi=&pi; ������ ����.
	// ���������Ͱ� �����ϴ� �ּҿ� ����ִ� ���� �����Ͱ� �����ϴ� �ּҰ�. *ppi = pi;

	int a = 10;
	int *pi;
	int **ppi;

	pi = &a;
	ppi = &pi;

}