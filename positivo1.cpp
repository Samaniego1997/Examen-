//programa:Positivo1.cpp
//autor: Nicol Samaniego
//fecha: 24-11-2023
#include<iostream>
using namespace std;
int main()
{
	double numero;
	printf("introduce un numero:\n");
	scanf("%lf",&numero);
	if(numero==0){
	printf("cero");
	}else if(numero > 0){
	printf("positivo");
	}else{
	printf("negativo");
	}
	return 0;
}


