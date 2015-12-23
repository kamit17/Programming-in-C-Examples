#include <stdio.h>
//#include <windows.h>

int main(){
	system("mode con: cols=99 lines=44");
	ShowWindow( GetConsoleWindow() , SW_MAXIMIZE);
	system("title Matrix by Ercan G�rg�l�");
	int width=99,height=43;
	srand(time(NULL));
	system("color A");
	COORD coord = {0, 0};
	char matrix[43][99]={0},matrix2[43][99]={0};
	int giris[99]={0},uzunluk[99]={0},mevcut[99]={0},yaz[99]={0},x,i,rast,test,dolu[99]={0};

	for(x=0;x<width;x++){
		giris[x]=rand()%30;
		uzunluk[x]=rand()%30+15;
		mevcut[x]=giris[x];
		if(rand()%2==1){
			yaz[x]=1;
		}
	}
	for(i=0;i<height;i++){
		for(x=0;x<width;x++){
			matrix[i][x]=rand()%94+34;
		}
	}
	while(1){
		for(x=0;x<width;x++){
			if(yaz[x]==1){
				coord.X=x; coord.Y=mevcut[x];
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				if(dolu[x]==0){
					if(mevcut[x]<height){
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
						printf("%c",matrix[mevcut[x]][x]);
						matrix2[mevcut[x]][x]=1;
					}
					if(matrix2[mevcut[x]-1][x]==1){
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN|FOREGROUND_INTENSITY);
						coord.X=x; coord.Y=mevcut[x]-1;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
						printf("%c",matrix[mevcut[x]-1][x]);
					}
					if(matrix2[mevcut[x]-5][x]==1){
							SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
							coord.X=x; coord.Y=mevcut[x]-5;
							SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
							printf("%c",matrix[mevcut[x]-5][x]);
						}
					for(i=1;i<5;i++){
						if(matrix2[mevcut[x]-i*10][x]==1){
							SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
							coord.X=x; coord.Y=mevcut[x]-i*10;
							SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
							printf("%c",matrix[mevcut[x]-i*10][x]);
						}
					}
					if(mevcut[x]+1<=giris[x]+uzunluk[x]){
						mevcut[x]++;
					}else{
						mevcut[x]=giris[x]-1;
						dolu[x]=1;
					}
				}else{
					if(mevcut[x]<height){
						printf(" ");
						matrix2[mevcut[x]][x]=0;
					}
					if(mevcut[x]+1<=giris[x]+uzunluk[x]){
						mevcut[x]++;
					}else{
						mevcut[x]=giris[x]-1;
						dolu[x]=0;
						yaz[x]=0;
						test=1;
						rast=rand()%width;
						while(test){
							if(yaz[rast]==0){
								yaz[rast]=1;
								giris[x]=rand()%30;
								uzunluk[x]=rand()%30+15;
								mevcut[x]=giris[x];
								test=0;
							}else{
								rast=rand()%width;
							}
						}
					}
				}
			}
		}
		for(i=0;i<height;i++){
			for(x=0;x<width;x++){
				if(rand()%15==1){
					matrix[i][x]=rand()%94+34;
				}
			}
		}
		Sleep(15);
	}
}
