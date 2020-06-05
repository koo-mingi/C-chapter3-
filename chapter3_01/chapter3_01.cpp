#include <iostream>
using namespace std;

//int main()
//{
//	int a = 10;
//	int *A;
//	A = &a;  //a의 주소를 넘겨줌
//	cout << "A가 가지고 있는 초기 주소: "<<A << endl;
//	cout << "A가 가지고 있는 초기 값: " << *A << endl;
//	cout << "A의 주소 : " << &A << endl;
//	A++;
//	cout << "A++을 한 후 A가 가지고 있는 주소 :"<<A << endl;
//	cout << "A++을 한 후 A가 가지고 있는 값 :" << *A << endl; // int형의 크기인 4바이트 만큼만 증가
//	cout << "A++을 한 후 A의 주소 : " << &A << endl;
//
//
//}


//int main() {
//	//#1.
//	/*int a;
//	a = 10;
//
//	cout << "변수 a의 값은 : " << a << endl;
//	cout << "변수 a의 주소는 : " << &a << endl;*/
//
//	//#2.
//	/*int a;
//	int* pA;
//
//	a = 10;
//	pA = &a;
//
//	cout << "변수 a의 값은 : " << a << endl;
//	cout << "변수 a의 주소는 : " << &a << endl; 
//	cout << "포인터 pA의 값(주소)은 : " << pA << endl;
//	cout << "포인터 pA가 가지고 있는 주소에 할당된 값은 : " << *pA << endl;*/
//
//	//#3.
//	/*int a = 10;
//	int *pa;
//
//	cout << "변수 a의 값은 : " << a << endl;
//	cout << "변수 a의 주소는 : " << &a << endl;
//
//	pa = &a;
//	cout << "변수 a의 값은 : " << *pa << endl;
//	cout << "변수 a의 주소는 : " << pa << endl;
//
//	*pa = 50;
//	cout << "변수 pa의 값은 : " << *pa << endl;
//	cout << "변수 pa의 주소는 : " << pa << endl;*/
//
//
//}

void sw(int *k, int *l) {
	int temp = *k;
	*k = *l;
	*l = temp;

	//int *temp1 = k;
	//k = l;
	//l = temp1;
}

int main() {
	int a = 10;
	int b = 100;

	cout << "변수 a의 값 : " << a << endl;
	cout << "변수 b의 값 : " << b << endl;
	cout << "변수 a,b 값 교환 " << endl;
	sw(&a, &b);
	cout << "교체 후 " << endl;
	cout << "변수 a의 값 : " << a << endl;
	cout << "변수 b의 값 : " << b << endl;
}

