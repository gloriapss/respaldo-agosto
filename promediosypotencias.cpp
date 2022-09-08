#include <stdio.h>

/* Definición función promedio(t) */

float promedio(float t);
void potencia(float t, float res);

int main()
{
	float t[10], t2[10];
    float m1, m2;
    int i;

    for (i=0; i!=10; i=i+1)
    {
      	printf("De valor de t[%d]:",i);
    	scanf("%f",&t[i]);
    }
    m1=promedio(t);
    potencia(t,t2);
    m2=promedio(&t2[0]);
    printf("varianza:%dnn",m2-(m1*m1));
}

float promedio(t){
	float t[];

    int i;
    float s;
    for (s=0, i=0; i < 10; i=i+1)
        s=s+t[i];
    return(s/10);
}

/* Función que eleva los elementos del arreglo al cuadrado */
void potencia(t,res){
float t[10],res[];


            int i;
            for (i=0; i < 10; i=i+1)
                    res[i]=t[i]*t[i];
}




