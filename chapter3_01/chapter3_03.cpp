#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string> //strlen()

using namespace std;

//int main(void) {
//	int array[3] = { 10,20,30 };
//	int* p = NULL;
//
//	//�迭���� �迭�� ù��° �ּҸ� ������ �ִ�.
//	//�迭 0��° �ּ�
//	cout << setw(15) << array<< setw(15) << &array[0] << setw(15) << array+0;
//	cout << endl;
//	//�迭 1��° �ּ�
//	cout <<  setw(15) << &array[1] << setw(15) << array + 1;
//	cout << endl;
//	//�迭 2��° �ּ�
//	cout <<  setw(15) << &array[2] << setw(15) << array + 2;
//	cout << endl;
//
//	// ������ �迭�� ũ��
//	// �迭���� �迭 ��ü ũ��. �迭[�ε���]�� �迭�� �ϳ��� ũ��
//	cout << setw(15) << sizeof(array) << setw(15) << sizeof(array + 0) << setw(15) << sizeof(&array[0]);
//	cout << endl;
//
//	cout << "================= �迭�� �� ======================" << endl;
//	//�迭 0��° ��
//	cout << setw(15) << *array << setw(15) << *(array + 0) << setw(15) << *&array[0];
//	cout << endl;
//	//�迭 1��° ��
//	cout << setw(15) << *&array[1] << setw(15) << *(array + 1);
//	cout << endl;
//	//�迭 2��° ��
//	cout << setw(15) << *&array[2] << setw(15) << *(array + 2);
//	cout << endl;
//
//	//�迭�� ���� ũ��
//	//�迭������ ���� ������ ���� ù ��° ��Ҹ� ������ �´�.
//	cout << setw(15) << sizeof(*array) << setw(15) << sizeof(*(array + 0)) << setw(15) << sizeof(*(&array[0]));
//	cout << endl;
//
//	
//	// �����Ϳ� �迭 ���
//	cout << endl<<"=============== ����� ������ ===============" << endl;
//
//	p = array; //&array[0]; //array+0;
//	//�迭 0��° �ּ�
//	cout << setw(15) << p << setw(15) << &p[0] << setw(15) << p + 0;
//	cout << endl;
//	//�迭 1��° �ּ�
//	cout << setw(15) << &p[1] << setw(15) << p + 1;
//	cout << endl;
//	//�迭 2��° �ּ�
//	cout << setw(15) << &p[2] << setw(15) << p + 2;
//	cout << endl;
//
//	//�迭 0��° ��
//	cout << setw(15) << *p << setw(15) << *(p + 0) << setw(15) << *&p[0];
//	cout << endl;
//	//�迭 1��° ��
//	cout << setw(15) << *&p[1] << setw(15) << *(p + 1);
//	cout << endl;
//	//�迭 2��° ��
//	cout << setw(15) << *&p[2] << setw(15) << *(p + 2);
//	cout << endl;
//}

//int main(void) {
//	// 5���� ���ڿ��� �� �ִ� �迭
//	const char *s[] = { "A","BB","CCC","DDDD","EEEEE" };
//
//	// �����ʹ� �⺻������ 4����Ʈ�� �Ҵ�Ǿ��ִ�. => s�� ũ��� 4*5 = 20����Ʈ
//	// ���� �����ϸ� 15����Ʈ�� �����°� �´�.
//
//	printf("������ �迭 s�� ũ�� : %d\n",sizeof(s));
//
//	// ��� ���ڿ��� ������ �հ�(null ���ڴ� ���ܵ�)
//	size_t total_size = 0;
//	for (size_t i = 0; i < sizeof(s)/sizeof(*s); i++) { 
//		total_size += strlen(s[i]);
//	}
//	printf("��� ���ڿ��� ������ �� : %d\n", total_size);
//}


