#include <iostream>
using namespace std;

main(){
	int codigo=0;
	
	cout<<"ingrese el codigo : ";
	cin>>codigo;
	
	switch(codigo){
		case 501 : cout<<"belice"<<endl;
			break;
		case 502 : cout<<"guatemala"<<endl;
		break;
		case 503 : 
		cout<<"el salvador"<<endl;
		break;
		case 504 : 
		cout<<"honduras"<<endl;
		break;
		case 505 : 
		cout<<"nicaragua"<<endl;
		break;
			case 506 : 
		cout<<"panama"<<endl;
		break;
		default: cout<<"este no es un codigo de centroamerica ";
	}
	
	
	
	system ("pause");
}
