#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string> //strlen()

using namespace std;

//int main(void) {
//	int array[3] = { 10,20,30 };
//	int* p = NULL;
//
//	//배열명은 배열의 첫번째 주소를 가지고 있다.
//	//배열 0번째 주소
//	cout << setw(15) << array<< setw(15) << &array[0] << setw(15) << array+0;
//	cout << endl;
//	//배열 1번째 주소
//	cout <<  setw(15) << &array[1] << setw(15) << array + 1;
//	cout << endl;
//	//배열 2번째 주소
//	cout <<  setw(15) << &array[2] << setw(15) << array + 2;
//	cout << endl;
//
//	// 각각의 배열의 크기
//	// 배열명은 배열 전체 크기. 배열[인덱스]는 배열방 하나의 크기
//	cout << setw(15) << sizeof(array) << setw(15) << sizeof(array + 0) << setw(15) << sizeof(&array[0]);
//	cout << endl;
//
//	cout << "================= 배열의 값 ======================" << endl;
//	//배열 0번째 값
//	cout << setw(15) << *array << setw(15) << *(array + 0) << setw(15) << *&array[0];
//	cout << endl;
//	//배열 1번째 값
//	cout << setw(15) << *&array[1] << setw(15) << *(array + 1);
//	cout << endl;
//	//배열 2번째 값
//	cout << setw(15) << *&array[2] << setw(15) << *(array + 2);
//	cout << endl;
//
//	//배열의 값의 크기
//	//배열명으로 값에 접근할 때는 첫 번째 요소를 가지고 온다.
//	cout << setw(15) << sizeof(*array) << setw(15) << sizeof(*(array + 0)) << setw(15) << sizeof(*(&array[0]));
//	cout << endl;
//
//	
//	// 포인터에 배열 담기
//	cout << endl<<"=============== 여기는 포인터 ===============" << endl;
//
//	p = array; //&array[0]; //array+0;
//	//배열 0번째 주소
//	cout << setw(15) << p << setw(15) << &p[0] << setw(15) << p + 0;
//	cout << endl;
//	//배열 1번째 주소
//	cout << setw(15) << &p[1] << setw(15) << p + 1;
//	cout << endl;
//	//배열 2번째 주소
//	cout << setw(15) << &p[2] << setw(15) << p + 2;
//	cout << endl;
//
//	//배열 0번째 값
//	cout << setw(15) << *p << setw(15) << *(p + 0) << setw(15) << *&p[0];
//	cout << endl;
//	//배열 1번째 값
//	cout << setw(15) << *&p[1] << setw(15) << *(p + 1);
//	cout << endl;
//	//배열 2번째 값
//	cout << setw(15) << *&p[2] << setw(15) << *(p + 2);
//	cout << endl;
//}

//int main(void) {
//	// 5개의 문자열이 들어가 있는 배열
//	const char *s[] = { "A","BB","CCC","DDDD","EEEEE" };
//
//	// 포인터는 기본적으로 4바이트가 할당되어있다. => s의 크기는 4*5 = 20바이트
//	// 값에 접근하면 15바이트가 나오는게 맞다.
//
//	printf("포인터 배열 s의 크기 : %d\n",sizeof(s));
//
//	// 모든 문자열의 길이의 합계(null 문자는 제외됨)
//	size_t total_size = 0;
//	for (size_t i = 0; i < sizeof(s)/sizeof(*s); i++) { 
//		total_size += strlen(s[i]);
//	}
//	printf("모든 문자열의 길이의 합 : %d\n", total_size);
//}


