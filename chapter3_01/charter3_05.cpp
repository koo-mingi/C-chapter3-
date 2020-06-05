#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

//int main(void) {
//	int a = 10; //int형 변수의 선언과 초기화 (a1111110)
//	int *pi; //포인터 선언 (a22222220)
//	int **ppi; //2중 포인터 선언 (a3333330)
//
//	pi = &a; //int형 변수의 주소를 포인터에 저장
//	ppi = &pi;
//
//	cout << "---------------------------------------------" << endl;
//	cout << "변수" << setw(12) <<  "&연산" << setw(10) << "*연산" << setw(10) << "**연산" << endl;
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

void swap_ptr(char **ppa, char **ppb); //프로토타입이므로 함수선언

int main(void) {

	char a[] = "success";
	char b[] = "failuer";
	char *pa = a; // a가 담고 있는 값이 통째로 넘어간다.
	char *pb = b;

	cout << "pa -> " << &pa << "  a ->" << &a << endl;
	cout << "pa -> " << pa << "  pb ->" << pb << endl; // pa에는 a의 주소 대신 success라는 값이 들어있다.
	swap_ptr(&pa,&pb);
	cout << "pa -> " << pa << "  pb ->" << pb << endl;
	return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
	char *pt;
	pt = *ppa;  // ppa가 담고 있는 값은 pa의 주소값. *ppa는 pa가 담고있는 주소값인 a의 주소값.
	*ppa = *ppb; // *ppa = pa가 담고 있는 주소값이니까, pa가 담고 있는 주소를 b의 주소값으로 바꿈
	*ppb = pt;  // *ppb = pb가 담고 있는 주소값이니까, pb가 담고 있는 주소를 a의 주소값으로 바꿈.

	// 이중포인터는 포인터의 주소값을 참조한다. ppi=&pi; 식으로 대입.
	// 이중포인터가 참조하는 주소에 들어있는 값은 포인터가 참조하는 주소값. *ppi = pi;

	int a = 10;
	int *pi;
	int **ppi;

	pi = &a;
	ppi = &pi;

}