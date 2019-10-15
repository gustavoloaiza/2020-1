/******************************************************************************

1 ecuacion cuadratica
2 area triangulo

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    int opcion, mnacimiento, anacimiento,acm,aca, an=0, me=0, di=0, dnacimiento, acd; 
    float a,b,c,x1=0,x2=0,base,alt,area=0;
    do{
        printf("menu principal \n1.ecuacion cuadratica \n2.area del triangulo\n3.calcular edad\n");
        printf("escoja una opcion:");
        scanf("%d",&opcion); 
        switch(opcion){
            case 1:
                printf("\n ingrese coeficiente a:\n");
                scanf("%f",&a);
                printf("\n ingrese coeficiente b:\n");
                scanf("%f",&b);
                printf("\n ingrese coeficiente c:\n");
                scanf("%f",&c);
                x1=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
                x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
                printf("el resultado x1 es %.2f\n",x1);
                printf("el resultado x2 es %.2f\n",x2);
            break;
            case 2:
                printf("\n ingrese base del triangulo:\n");
                scanf("%f",&base);
                printf("\n ingrese altura del triangulo:\n");
                scanf("%f",&alt);
                area=(base*alt)/2;
                printf("el area del triangulo es %.2f",area);
            break;
            case 3:
                printf("\n ingrese dia de nacimiento:\n");
                scanf("%d",&dnacimiento);
                printf("\n ingrese mes de nacimiento:\n");
                scanf("%d",&mnacimiento);
                printf("\n ingrese año de nacimiento:\n");
                scanf("%d",&anacimiento);
                printf("\n ingrese dia actual:\n");
                scanf("%d",&acd);
                printf("\n ingrese mes actual:\n");
                scanf("%d",&acm);
                printf("\n ingrese año actual:\n");
                scanf("%d",&aca);
                di=acd-dnacimiento;
                an=aca-anacimiento;
                me=acm-mnacimiento;
                
                if(me<0){
                    an--;
                    me= me + 12;
                }
                
                printf("\n su edad es:\t %d años y %d meses \n",an,me);
            break;
            default:
                printf("opcion incorrecta");
            break;
        }
    }
    while(opcion>3||opcion<1);
}

