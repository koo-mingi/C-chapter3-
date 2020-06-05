// Stack Memory ����
#include <iostream>	
#include <iomanip>	
#include <conio.h>
#include <string>
#define MAX 5

using namespace std;

int stack[MAX], top = -1, k; // top�� �迭�� ��ġ.

int push(int t) {
	if (top >= MAX - 1) { // top�� ���� ���� �� �ִ� �迭 ��ġ.
		cout << "overFlow!!!" << t << endl;
		return(1); // �������� ��������� ���α׷��� �����ڴ�.
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

	cout << "<- �ֱ�   ������ ->" << endl;
	st_print(); // ���� ���� 1,2,5,9,3. ����� ���� 3,9,5,2,1.
	cout << endl;

	cout << "stack���� ������ ����" << endl;
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

	cout << "�Է¼���" << endl;
	for (int i = 0; i < 5; i++)
		cout << stack[i] << endl;
	
}

