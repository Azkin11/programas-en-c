#include <stdio.h>
int n,a;
int main(void) {

printf("Ingrese un numero");
scanf("%d" , &n);
printf("Ingrese un numero");
scanf("%d" , &a);


if(n > a) {
	printf("el primer numero es mayor" , n);
} else if (n < a){
	printf(" El segundo numero es mayor" ,a);
} else {
	printf("el nuemro es igual o cero.", n);
}



    return 0;


}
