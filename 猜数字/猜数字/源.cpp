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
		cout << "请输入数字：";
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
			cout << "退出游戏！" << endl;
			break;
		default:
			cout << "输入非法，请重新输入！" << endl;
			break;
		}


	} while (1);
	
	
	

	//2.玩家进行猜测
	
	
	system("pause");
	return 0;
}

void QinYan()
{
	int i = 0;
	char str[] = { "欢迎来到威仔游戏科技有限责任公司出品的大型网络端游，威仔游戏致力于为玩家提供丰富优质的游戏体验，威仔游戏将不断探索创新，拓宽游戏的边界，发现更多创新玩法，通过游戏与前沿科技融合，为玩家提供更新奇的游戏体验和乐趣，同时推动游戏行业的发展，发现游戏的更多能!——威仔游戏科技有限责任公司" };
	for (i = 0; i < strlen(str); i++) {
		Sleep(100);
		cout << str[i];
	}
	printf("\n");

}

void menu()
{
	cout << "***************************************" << endl;
	cout << "**         猜数字游戏 V1.0           **" << endl;
	cout << "**                  ——威仔制作       **" << endl;
	cout << "***************************************" << endl;
	cout << "***************************************" << endl;
	cout << "**                                   **" << endl;
	cout << "**            1.开始游戏             **" << endl;
	cout << "**            0.退出游戏             **" << endl;
	cout << "**                                   **" << endl;
	cout << "***************************************" << endl;
	cout << "***************************************" << endl;
	cout << "********************    2023-1-30    **" << endl;
	cout << "***************************************" << endl;
	
	



}

void game()
{
	//生成随机数种子 作用：利用当前系统时间生成随机数，防止每次的随机数都一样
	srand((unsigned int)time(NULL));
	//1.系统生成随机数
	int num = rand() % 100 + 1;//rand（）%100+1 生成 0+1~99+1 的随机数
	
	while (1) {
		int intput = 0;
		cout << "请猜数字：";
		cin >> intput;

		if (intput > num) {
			cout << "猜测过大" << endl;
		}
		else if (intput < num) {
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜你，猜对了" << endl;
			Sleep(2000);
			break;
			//猜对  退出游戏
		}
	
	}
}
