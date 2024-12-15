#include <stdio.h>
#include <string.h>

char arr[50];
int main(){
	void sigma();
	sigma();
	return 0;
}

void sigma(){
	char *x = arr;
	printf("Moi ban nhap : ");
	fgets(arr, 50, stdin);
	for(int i = 0; i < strlen(arr) - 1; i++){
		printf("%d\t", x[i]);
	}
}
