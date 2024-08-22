#include <stdio.h>
int tinhtong(int x, int y){
	int s;
	s=x+y;
	return s;
}
void xuattong(int x, int y){
	int s;
	s=x+y;
	printf("%d+%d=%d", x, y, s);
}
int main(){
	int s, x, y;
//	tinhtong(x,y);
	xuattong(1,1);
}
