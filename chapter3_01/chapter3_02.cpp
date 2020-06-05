// Stack Memory 구현
#include <iostream>	
#include <iomanip>	
#include <conio.h>
#include <string>
#define MAX 5

using namespace std;

int stack[MAX], top = -1, k; // top은 배열방 위치.

int push(int t) {
	if (top >= MAX - 1) { // top은 현재 값이 들어가 있는 배열 위치.
		cout << "overFlow!!!" << t << endl;
		return(1); // 비정상적 출력이지만 프로그램을 돌리겠다.
	}
	else
		return(stack[++top] = t);
}

void st_print() {
	for (int i = top; i >= 0; i--)
		cout << setw(3) << stack[i];
	cout << endl;
}

int pop() {
	if (top < 0) {
		cout << "UnderFlow!! Stack Emty" << endl;
		return(-1);
	}
	else {
		return(stack[top--]);
	}
}

void main() {
	
	push(1);
	push(2);
	push(5);
	push(9);
	push(3);
	//push(4)

	cout << "<- 최근   오래된 ->" << endl;
	st_print(); // 쌓일 때는 1,2,5,9,3. 출력할 때는 3,9,5,2,1.
	cout << endl;

	cout << "stack에서 나오는 순서" << endl;
	k = pop();
	cout << k << endl;
	k = pop();
	cout << k << endl;
	k = pop();
	cout << k << endl;
	k = pop();
	cout << k << endl;
	k = pop();
	cout << k << endl;

	cout << endl;

	cout << "입력순서" << endl;
	for (int i = 0; i < 5; i++)
		cout << stack[i] << endl;
	
}

