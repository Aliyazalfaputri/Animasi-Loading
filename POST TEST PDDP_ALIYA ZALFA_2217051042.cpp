#include <iostream>
#include <windows.h>
using namespace std;
void delay (void){
	int delay;
	delay = 1;
	while(delay<100000000)
	delay++;
}
void gotoxy (int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
}

int main(){
  int i,j;
  char ulang;
  
  for (i=40 ;i<=75 ; i++ ){
  	gotoxy(i,12);
  	printf("-");
  	gotoxy(i,14);
  	printf("-");
  	
  	//system("color 3A");
  	delay();
  		
  }
  for(i=1 ; i<=100 ;i++ ){
  	gotoxy(40,13);
  	cout<<"L O A D I N G  "<<i<<" %";
	delay();
  }
  system ("cls");
  for(i=1 ; i<=100 ;i++ ){
  	gotoxy(i,1);
  		printf("#");
  		delay();
  		
  	
}
}

