#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

void menu();
void game();
void QinYan();

int main()
{
	int intput1 = 0;
	do
	{
		int intput1 = 0;
		QinYan();
		menu();
		cout << "���������֣�";
		cin >> intput1;
		cout << "Loading... ..." << endl;
		Sleep(1000);
		system("cls");
		switch (intput1)
		{
		case 1:
			game();
			break;
		case 0:
			cout << "�˳���Ϸ��" << endl;
			break;
		default:
			cout << "����Ƿ������������룡" << endl;
			break;
		}


	} while (1);
	
	
	

	//2.��ҽ��в²�
	
	
	system("pause");
	return 0;
}

void QinYan()
{
	int i = 0;
	char str[] = { "��ӭ����������Ϸ�Ƽ��������ι�˾��Ʒ�Ĵ���������Σ�������Ϸ������Ϊ����ṩ�ḻ���ʵ���Ϸ���飬������Ϸ������̽�����£��ؿ���Ϸ�ı߽磬���ָ��ഴ���淨��ͨ����Ϸ��ǰ�ؿƼ��ںϣ�Ϊ����ṩ���������Ϸ�������Ȥ��ͬʱ�ƶ���Ϸ��ҵ�ķ�չ��������Ϸ�ĸ�����!����������Ϸ�Ƽ��������ι�˾" };
	for (i = 0; i < strlen(str); i++) {
		Sleep(100);
		cout << str[i];
	}
	printf("\n");

}

void menu()
{
	cout << "***************************************" << endl;
	cout << "**         ��������Ϸ V1.0           **" << endl;
	cout << "**                  ������������       **" << endl;
	cout << "***************************************" << endl;
	cout << "***************************************" << endl;
	cout << "**                                   **" << endl;
	cout << "**            1.��ʼ��Ϸ             **" << endl;
	cout << "**            0.�˳���Ϸ             **" << endl;
	cout << "**                                   **" << endl;
	cout << "***************************************" << endl;
	cout << "***************************************" << endl;
	cout << "********************    2023-1-30    **" << endl;
	cout << "***************************************" << endl;
	
	



}

void game()
{
	//������������� ���ã����õ�ǰϵͳʱ���������������ֹÿ�ε��������һ��
	srand((unsigned int)time(NULL));
	//1.ϵͳ���������
	int num = rand() % 100 + 1;//rand����%100+1 ���� 0+1~99+1 �������
	
	while (1) {
		int intput = 0;
		cout << "������֣�";
		cin >> intput;

		if (intput > num) {
			cout << "�²����" << endl;
		}
		else if (intput < num) {
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ�㣬�¶���" << endl;
			Sleep(2000);
			break;
			//�¶�  �˳���Ϸ
		}
	
	}
}
