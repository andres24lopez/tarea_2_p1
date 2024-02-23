#include <iostream>
using namespace std;

main(){
	//
	string lapiz,lapicero,cuaderno;
	cout<<"trae lapiz (si/no)"<<endl;
	cin>>lapiz;
	cout<<"trae lapicero (si/no)"<<endl;
	cin>>lapicero;
	cout<<"trae cuaderno  (si/no)"<<endl;
	cin>>cuaderno;
	
	if ((lapiz=="si"  || lapicero=="si" ) && cuaderno=="si"){
		cout<<"pudes pasar a la clase ";
		
	}
	else {
			cout<<"no udes entrar ala clase ";
	}


	system ("pause");
}
