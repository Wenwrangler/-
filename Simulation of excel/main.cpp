#include<iostream>
#include"head.h"
using namespace std;
int main() {
	MOUSEMSG M;
	initgraph(1024+300, 750);//��ʼ������
	IMAGE t1, t2;
	loadimage(&t1, _T("timg.png"));//��ȡͼƬ
	setfillstyle(BS_DIBPATTERN, NULL, &t1);//���ͼƬ **����������
	setbkcolor(WHITE);
	fillrectangle(1024, 0, 1324, 750);
	//setfillcolor(WHITE);
	setlinecolor(LIGHTGRAY);
	int x = 100, y = 25;
	char s[] = "Hello World";

	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 100; j++) {
			fillrectangle(256*i-256, j*50-50, 256 * i, 50*j);
			setfillcolor(WHITE);
			setlinecolor(LIGHTGRAY);
			settextcolor(BLACK);
			if (j == 1) {
				switch (i) {
					case 1:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), "����");
						break;
					case 2:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), "ѧ��");
						break;
					case 3:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), "�γ̱��");
						break;
					case 4:
						outtextxy(x + (i * 256 - 256), y + (j * 50 - 50), "�ɼ�");
						break;
				}
			}
			else {
				outtextxy(x+(i*256-256), y+(j*50-50), s);
			}
			
		}
	}
	_getch();
	
	cout << "1";
	return 0;
}