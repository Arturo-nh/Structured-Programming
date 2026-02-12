#include <stdio.h>
void intro() {
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
    
}

void finanzas() {

    float balance;
    float ingresos_m;
    float gastos;
    float meta_ahorro;
    int bono_anual;

    printf("Dame el balance de la cuenta, ingresos mensuales, Gasyos mensuales, Meta de ahorro \n y el bono anual en porcentaje (separados por un espacio)\n");
    scanf("%f %f %f %f %d",&balance,&ingresos_m,&gastos,&meta_ahorro,&bono_anual);
    balance=balance+ingresos_m-gastos;
    printf("Cuenta en el primer mes = %f\n",balance);
    balance=balance+ingresos_m-gastos-1200;
    printf("Cuenta en el segundo mes, con gasto inesperado = %f\n",balance);
    balance=balance+(10*(ingresos_m-gastos));
    balance=(ingresos_m*(bono_anual/100))+balance;
    printf("Cuenta despues de un anyo = %f\n",balance);
    float meses;
    meses=(balance-meta_ahorro)/(ingresos_m-gastos);

}


void operador_de_bits() {

    int x=0;
    int par=0;
    int a=1;
    int potencia=0;

    printf("Dame un numero entero positivo: \n");
    scanf("%d",&x);
    int mask=00000000000000000000000000000001;
    par = x&mask;
    printf("Si es 0 es par si es 1 es impar: %d\n",par);
    x<<=1;
    printf("El numero multiplicado x2 es: %d\n",x);
    a = x-a;
    potencia=x&a;
    printf("si es 0 es potencia, si es 1 no es potencia: %d",potencia);

}

int main() {

    intro();
    finanzas();
    operador_de_bits();

}
