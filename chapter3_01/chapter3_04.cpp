#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

//int main(void) {
//
//	int array[3] = { 10,20,30 };
//	int i = 0;
//	int* p = NULL;
//
//	p = array; //p=&array[0]; 포인터 변수에 배열의 시작 주소를 저장
//
//	for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
//		cout << setw(3) << array[i] << setw(3) << *(array + i) << setw(3) << *&array[i] << endl;
//	}
//
//	cout << "--------------------------------------------"<<endl;
//
//	cout << "포인터 p의 크기 : " << sizeof(p) << endl<<endl; 
//	// 포인터 자체의 크기는 4바이트이며, 배열명으로 접근할 때랑은 다름. 배열명은 배열 전체의 크기가 나옴.
//	for (i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
//		cout << setw(3) << p[i] << setw(3) << *(p + i) << setw(3) << *&p[i] << endl;
//	}
//	cout << "--------------------------------------------" << endl;
//	for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
//		cout << setw(3) << p[i] << setw(3) << *(p + i) << setw(3) << *&p[i] << endl;
//	}
//		
//}

//int main(void) {
//
//	int array[3] = { 10,20,30 };
//	int i = 0;
//	int* p = NULL;
//
//	p = array;
//	cout <<"0번째 : "<<*p<<endl;
//	printf("%d %d %d\n", p[0], p[1], p[2]);
//	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
//	cout << "===========================\n";
//
//	p = array + 1;
//	cout << "0번째 : " << *p << endl;
//	printf("%d %d %d\n", p[-1], p[0], p[1]);
//	printf("%d %d %d\n", *(p-1), *(p + 0), *(p + 1));
//	cout << "===========================\n";
//
//	p = array + 2;
//	cout << "0번째 : " << *p << endl;
//	printf("%d %d %d\n", p[-2], p[-1], p[0]);
//	printf("%d %d %d\n", *(p-2), *(p - 1), *(p + 0));
//
//	return 0;
//}

//int main(void) {
//
//	int array[3];
//	int i = 0;
//	int* p = NULL;
//
//	p = array;
//
//	*p = 10;
//	printf("%d %d %d\n", p[0], p[1], p[2]);
//	cout << "===========================\n";
//
//	*(p+1) = 20;
//	printf("%d %d %d\n", p[0], p[1], p[2]);
//	cout << "===========================\n";
//
//	*(p+2) = 30;
//	printf("%d %d %d\n", p[0], p[1], p[2]);
//	cout << "===========================\n";
//	return 0;
//}

//int main(void) {
//
//	int array[3][3] = { 10,20,30,
//						40,50,60,
//						70,80,90 };
//
//	printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
//	printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);
//	printf("%x %x %x \n", &array[2][0], &array[2][1], &array[2][2]);
//	printf("==========================================\n");
//
//	printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
//	printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);
//	printf("%d %d %d \n", array[2][0], array[2][1], array[2][2]);
//
//}

int main(void) {

	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;//int형 변수 선언
	int array[2][4] = { 1,2,3,4,5,6,7,8 };
	int i, j;

	int *pt_a[4] = { &num1,&num2,&num3,&num4 };
	int (*pt_b)[4] = array;

	cout << setw(3) << *pt_a[0] << setw(3) << *pt_a[1] << setw(3) << *pt_a[2] << setw(3) << *pt_a[3] << endl;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			cout << setw(3) << pt_b[i][j];
		}
		cout << endl;
	}

	return 0;

}