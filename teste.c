#include <stdio.h>
#include <stdlib.h>
int main(){
 	int a, b, c;
 	printf("digite a:");
 	scanf("%d", &a);
 	printf("digite b:");
 	scanf("%d", &b);
 	printf("digite c:");
 	scanf("%d", &c);
 	if (a >= b){
 		if (a >= c && b >= c)
 			printf("%d %d %d\n", c, b, a):
 			if (a >= c && b <= c)
 				printf('%d %d %d\n", b, c, a);
 	}
 	if (b >= a){
 		if (b >= c && a >= c)
 			printf('%d %d %d\n", c, a, b);
 			if (b >= c && a <= c)
 				printf("%d %d %d\n", a, c, b):
 }
 	if (c >= a){
 		if (c >= b && b >= a)
 		printf("%d %d %d\n', a, b, c);
 		if (c >= b && b <= a)
 			printf('%d %d %d\n", b, a, c);
 	}
 	return 0;
}