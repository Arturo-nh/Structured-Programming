#include <stdio.h>
int main() {
    printf("Hola soy Alan Bot\n");
    float high;
    int age;
    char EC;
    printf("Introduce tu estatura, edad, y estado civil (S,C,V,D) separados por un espacio\n");
    scanf("%f %d %c",&high,&age,&EC);
    printf("Estatura = %.2f\nEdad = %d\nEstado Civil = %c\n",high,age,EC);

    printf("Tamanyo de bits 1 = %d\n", sizeof(high));
    printf("Tamanyo de bits 2 = %d\n", sizeof(age));
    printf("Tamanyo de bits 3 = %d\n", sizeof(EC));

	return 0;
}
