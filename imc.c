#include <stdio.h>

int main(void){
	float altura,peso, imc;

	printf("inglres tu peso en kg");
	scanf("%f", %peso);
	printf("ingres tu altura en metros: ");
	scanf("%f", %altura);
	if (altura <= 0) {
printf("Error: altura debe ser un valor positivo.\n");
return 1; // Código de error
}
imc = peso / (altura * altura);
printf("Su IMC es %.2f\n", imc);
// Interpretación básica del IMC
if (imc < 18.5) {
printf("Bajo peso\n");
} else if (imc < 25.0) {
printf("Peso normal\n");
} else if (imc < 30.0) {
printf("Sobrepeso\n");
} else {
printf("Obesidad\n");
}
return 0;

}
