#include<iostream>
#include<conio.h>
using namespace std;

void login(int tarjeta, int nip);
void menu_1();
void menu_2();
void menu_3();
void consulta_1();
void consulta_2();
void consulta_3();
void ingresar_1();
void ingresar_2();
void ingresar_3();
void retirar_1();
void retirar_2();
void retirar_3();
// USUARIO 1.- TARJETA= 123 NIP=123
// USUARIO 2.- TARJETA= 456 NIP=456
// USUARIO 3.- TARJETA= 789 NIP=789
struct dato{	
int tarjeta;
int nip;
double saldo;
double retiro;
double ingreso;
}
dato1 = {123,123, 14000},
dato2 = {456,456, 10000},
dato3 = {789,789,  6000};

int main(){
int i, tarjeta, nip;
i=0;


while(i<=3){//INICIO WHILE
	cout<<"Ingresa tu tarjeta de credito: ";
	cin>>tarjeta;
	cout<<"Ingresa tu NIP: ";
	cin>>nip;
	login(tarjeta,nip);//FUNCION PARA VALIDAR DATOS
i++;//INCREMENTADOR

}//FIN WHILE
cout<<"***LA CUENTA AH SIDO BLOQUEADA***";
	getch();
	return 0;

}




void login(int tarjeta, int nip){//INICIO LOGIN
	if(tarjeta==dato1.tarjeta && nip==dato1.nip){
		menu_1();
	}//FIN IF
	
	
	if(tarjeta==dato2.tarjeta && nip==dato2.nip){
		menu_2();
	}//FIN IF
	
		if(tarjeta==dato3.tarjeta && nip==dato3.nip){
		menu_3();
	}//FIN IF
	
	else{//INICIO ELSE
		cout<<"Password incorrecto"<<endl;
		}
}//FIN LOGIN

//INICIO USUARIO 1
void menu_1(){//INICIO MENU
	int opc;
	cout<<"****OPERACION BANCARIA SELECCIONE UNA OPCION****"<<endl;
	cout<<"1.- Consultar saldo"<<endl;
	cout<<"2.- Ingresar fondos"<<endl;
	cout<<"3.- Retirar fondos"<<endl;
	cout<<"4.- Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"consultar saldo"<<endl;
			consulta_1();
			break;
			
		case 2:
			cout<<"Ingresar fondos"<<endl;	
			ingresar_1();
			break;
			
		case 3:
			cout<<"Retirar fondos"<<endl;	
			retirar_1();
			break;
		
			
		case 4:
			cout<<"Gracias por su visita"<<endl;
			exit(1);				
	}
}//FIN MENU

void consulta_1(){//INICIO CONSULTA
cout<<"Saldo de la cuenta: ""$";
cout<<dato1.saldo<<endl;
menu_1();
}//FIN CONSULTA

void ingresar_1(){	
cout<<"Saldo disponible en la cuenta: ""$";
cout<<dato1.saldo<<endl;
cout<<"Ingresa la cantidad que deseas ingresar:"<<endl;
cin>>dato1.ingreso;
cout<<"Nuevo saldo: ""$";
dato1.saldo= dato1.saldo+dato1.ingreso;
cout<<dato1.saldo<<endl;
menu_1();
}
void retirar_1(){	
cout<<"Saldo disponible en la cuenta: ""$";
cout<<dato1.saldo<<endl;
cout<<"Ingresa la cantidad que deseas retirar"<<endl;
cin>>dato1.retiro;

if(dato1.saldo<dato1.retiro){//INICIO SALDO INSUFICIENTE
cout<<"!!!Saldo insuficiente!!!"<<endl;
	menu_1();
}//FIN SALDO INSUFICIENTE 

else{//INICIO OPERACION
cout<<"Saldo restante: ""$";
dato1.saldo= dato1.saldo-dato1.retiro;
cout<<dato1.saldo<<endl;
menu_1();
}//FIN OPERACION

}
//FIN USUARIO 1

//INICIO USUARIO 2
void menu_2(){//INICIO MENU
	int opc;
	cout<<"****OPERACION BANCARIA SELECCIONE UNA OPCION****"<<endl;
	cout<<"1.- Consultar saldo"<<endl;
	cout<<"2.- Ingresar fondos"<<endl;
	cout<<"3.- Retirar fondos"<<endl;
	cout<<"4.- Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"consultar saldo"<<endl;
			consulta_2();
			break;
			
		case 2:
			cout<<"Ingresar fondos"<<endl;	
			ingresar_2();
			break;
			
		case 3:
			cout<<"Retirar fondos"<<endl;	
			retirar_2();
			break;
		
			
		case 4:
			cout<<"Gracias por su visita"<<endl;
			exit(1);				
	}
}//FIN MENU

void consulta_2(){//INICIO CONSULTA
cout<<"Saldo de la cuenta: ""$";
cout<<dato2.saldo<<endl;
menu_2();
}//FIN CONSULTA

void ingresar_2(){	
cout<<"Saldo disponible en la cuenta: ""$";
cout<<dato2.saldo<<endl;
cout<<"Ingresa la cantidad que deseas ingresar:"<<endl;
cin>>dato2.ingreso;
cout<<"Nuevo saldo: ""$";
dato2.saldo= dato2.saldo+dato2.ingreso;
cout<<dato2.saldo<<endl;
menu_2();
}

void retirar_2(){	
cout<<"Saldo disponible en la cuenta: ""$";
cout<<dato2.saldo<<endl;
cout<<"Ingresa la cantidad que deseas retirar"<<endl;
cin>>dato2.retiro;

if(dato2.saldo<dato2.retiro){//INICIO SALDO INSUFICIENTE
cout<<"!!!Saldo insuficiente!!!"<<endl;
	menu_2();
}//FIN SALDO INSUFICIENTE 

else{//INICIO OPERACION
cout<<"Saldo restante: ""$";
dato2.saldo= dato2.saldo-dato2.retiro;
cout<<dato2.saldo<<endl;
menu_2();
}//FIN OPERACION

}
// FIN USUARIO 2

//INICIO USUARIO 3
void menu_3(){//INICIO MENU
	int opc;
	cout<<"****OPERACION BANCARIA SELECCIONE UNA OPCION****"<<endl;
	cout<<"1.- Consultar saldo"<<endl;
	cout<<"2.- Ingresar fondos"<<endl;
	cout<<"3.- Retirar"<<endl;
	cout<<"4.- Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"consultar saldo"<<endl;
			consulta_3();
			break;
			
		case 2:
			cout<<"Ingresar fondos"<<endl;	
			ingresar_3();
			break;
			
		case 3:
			cout<<"Retirar fondos"<<endl;	
			retirar_3();
			break;
		
			
		case 4:
			cout<<"Gracias por su visita"<<endl;
			exit(1);				
	}
}//FIN MENU

void consulta_3(){//INICIO CONSULTA
cout<<"Saldo de la cuenta: ""$";
cout<<dato3.saldo<<endl;
menu_3();
}//FIN CONSULTA

void ingresar_3(){	
cout<<"Saldo disponible en la cuenta: ""$";
cout<<dato3.saldo<<endl;
cout<<"Ingresa la cantidad que deseas ingresar:"<<endl;
cin>>dato3.ingreso;
cout<<"Nuevo saldo: ""$";
dato3.saldo= dato3.saldo+dato3.ingreso;
cout<<dato3.saldo<<endl;
menu_3();
}

void retirar_3(){	
cout<<"Saldo disponible en la cuenta: ""$";
cout<<dato3.saldo<<endl;
cout<<"Ingresa la cantidad que deseas retirar"<<endl;
cin>>dato3.retiro;

if(dato3.saldo<dato3.retiro){//INICIO SALDO INSUFICIENTE
cout<<"!!!Saldo insuficiente!!!"<<endl;
	menu_3();
}//FIN SALDO INSUFICIENTE 

else{//INICIO OPERACION
cout<<"Saldo restante: ""$";
dato3.saldo= dato3.saldo-dato3.retiro;
cout<<dato3.saldo<<endl;
menu_3();
}//FIN OPERACION

}
//FIN USUARIO 3

