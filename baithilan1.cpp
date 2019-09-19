#include <stdio.h>
int main(){
	int x,y;
	int tong = 0;
	scanf("%d",&x);
	while(x>0){
	
	y = x%10;
	tong = tong +y;	
	x=x/10;
}
printf("%d",tong);
return 0;
}
	
	
	

