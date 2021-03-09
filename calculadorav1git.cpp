#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;

int main(){
	int n1,n2,n3,n4,n5,opcion,cubo = 0,suma = 0,resta = 0,multi = 0,divi = 0,hipo=0,numero2,numero,unidades,decenas,centenas,millar,pre,
	iva,a,b,c,d,opca,altura,radio;
	
	float n6,n7,x,y,volumen=0;
	
	cout<<"\tBienvenido a tu calculadora";
	cout<<"\n1. Sacar suma,resta,multiplicacion y division";
	cout<<"\n2. Numero par o impar";
	cout<<"\n3. Cubo de un numero";
	cout<<"\n4. Hipotenusa de un triangulo";
	cout<<"\n5. Tabla de multiplicar";
	cout<<"\n6. Numero a numeros Romanos";
	cout<<"\n7. Precio con iva";
	cout<<"\n8. Ecuaciones de segundo grado";
	cout<<"\n9. Calcular volumen";
	cout<<"\n10. Salir";
	cout<<"\nOpcion: "; cin>>opcion;
	    
	
	switch(opcion){
		case 1:
		cout<<"Digite 2 numeros: "; cin>>n4>>n5;
	
		suma = n4 + n5;
		resta = n4 - n5;
		multi = n4 * n5;
		divi = n4 / n5;
		
		cout<<"La suma es: "<<suma<<endl;
		cout<<"La resta es: "<<resta<<endl;
		cout<<"La multiplicacion es: "<<multi<<endl;
		cout<<"La division es: "<<divi<<endl; break;
		case 2:
		cout<<"Digite un numero: "; cin>>n1;
		if(n1%2==0){
			cout<<"El numero es par";
			}
		else{
			cout<<"El numero es impar";
			} break;
		case 3:
			cout<<"Digite un numero: "; cin>>n2;
			cubo = n2 * n2 *n2;
			cout<<"El resultado es: "<<cubo; break;
		case 4:
			cout<<"Digite los catetos: "; cin>>n6>>n7;
			hipo = (n6 * n6)+(n7 * n7);
			cout<<"Hipotenusa: "<<hipo; break;
		case 5:
			do{
	cout<<"Digite un numero del 1-10: "; cin>>numero2;
	}while((numero2<1) || (numero2>20));
	
	for(int i=1;i<=30;i++){
		cout<<numero2<<" * "<<i<<"="<<numero2*i<<endl;
		} break;
		case 6:
		cout<<"Digite un numero: "; cin>>numero;
	
	unidades = numero%10; numero /= 10;
	decenas = numero%10; numero /=10;
	centenas = numero%10; numero /=10;
	millar = numero%10; numero /=10;
	
	switch(millar){
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM"; break;
		}
	 switch(centenas){
	 	case 1: cout<<"C"; break;
	 	case 2: cout<<"CC"; break;
	 	case 3: cout<<"CCC"; break;
	 	case 4: cout<<"CD"; break;
	 	case 5: cout<<"D"; break;
	 	case 6: cout<<"DC"; break;
	 	case 7: cout<<"DCC"; break;
	 	case 8: cout<<"DCC"; break;
	 	case 9: cout<<"CM"; break;
	 	}
	 	switch(decenas){
	 	case 1: cout<<"X"; break;
	 	case 2: cout<<"XX"; break;
	 	case 3: cout<<"XXX"; break;
	 	case 4: cout<<"XL"; break;
	 	case 5: cout<<"L"; break;
	 	case 6: cout<<"LX"; break;
	 	case 7: cout<<"LXX"; break;
	 	case 8: cout<<"LXXX"; break;
	 	case 9: cout<<"XC"; break;
	 	}
	 	switch(unidades){
	 	case 1: cout<<"I"; break;
	 	case 2: cout<<"II"; break;
	 	case 3: cout<<"III"; break;
	 	case 4: cout<<"IV"; break;
	 	case 5: cout<<"V"; break;
	 	case 6: cout<<"VI"; break;
	 	case 7: cout<<"VII"; break;
	 	case 8: cout<<"VIII"; break;
	 	case 9: cout<<"IX"; break;
	 	} break;
	
		case 7:
	 	cout<<"Introdusca el precio: "; cin>>pre;
	 	iva = pre * 0.16;
	 	pre = pre + iva;
	 	cout<<"El Precio con iva es: "<<pre;
	 	break;
	 	
	 	case 8:
 
    printf("Ingrese coeficiente a: ");
    scanf("%d",&a);
 
    while (a == 0) {
        printf("Ingrese coeficiente a: ");
        scanf("%d",&a);
    }
 
    printf("Ingrese coeficiente b: ");
    scanf("%d",&b);
    printf("Ingrese coeficiente c: ");
    scanf("%d",&c);
 
    d = b*b-4*a*c;
    if (d > 0) {
        x = (-b+sqrt(d))/(2*a);
        y = (-b-sqrt(d))/(2*a);
        printf("x1 = %.2f\n",x);
        printf("x2 = %.2f\n",y);
    }
    else if (d == 0) {
        x = (-b)/(2*a);
        printf("x1 = %.2f\n",x);
    }
    else
        printf("La ecuacion no tiene solucion");
 
	   case 9:  
    cout<<"\n1.Calcular volumen de cilindro";
    cout<<"\n2.Calcular volumen de cono";
    cout<<"\nOpcion: "; cin>>opca;
    switch(opca){
	 	
    case 1: 

	
	cout<<"Digite la altura: "; cin>>altura;
	cout<<"Digite el radio: "; cin>>radio;
	
	volumen = 3.1416 * (radio*radio) * altura;
	
	cout<<"\nEl volumen es: "<<volumen;
   
    case 2: 
    		
	cout<<"Digite la altura: "; cin>>altura;
	cout<<"Digite el radio: "; cin>>radio;
	
	volumen = (3.1416 * (radio*radio) * altura)/3;
	
	cout<<"\nEl volumen es: "<<volumen;
    	
    	 }
    case 10: break;
			
	}
	   return 0;
	}
 
//By Cisder
