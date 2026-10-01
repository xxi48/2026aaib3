//week04-2a.cpp SOIT106_ADVANCE_008
//C version
#include <stdio.h>

int main()
{
	int a[10]; //C version
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]); //C version
	}
	for(int i=0; i<10; i++){
		for(int j=i; j<10; j++){
			if (a[i]<a[j]){
				int temp = a[i]; //C version
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ",a[i]); //C version
	}
}
