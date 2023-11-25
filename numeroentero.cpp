//program: Numeroentero.cpp
//autor: Nicol Samaniego
//fecha:24-11-2023
#include<iostream>
using namespace std;
int sumatoria(){
	int arr[5];
	int sumatoria=0;
	for(int i=0;i<5;i++){
	cout<<"escribe el valor"<<(i+1)<<":";
	cin>>arr[i];
	}
	for(int i: arr) sumatoria+=i;
	return sumatoria;
}
int main(){
	cout<<"vamos a comensar con la suma del contenido en el arreglo:\n";
	int r1=sumatoria();
	cout<<"la sumatoria es de:"<<r1<<endl;
	return 0;
}
