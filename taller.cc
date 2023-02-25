
#include <iostream>
#include<conio.h>

using namespace std;  


struct corredor
{  
      int minutos;

 }corredor[1];

 struct promedio{
  
    char nombre[20];
    

}corredor1,corredor2,corredor3,corredor4,corredor5;


int NOMBRES(){



   
    cout<<"CORREDOR   1: "<<endl;cin.getline(corredor1.nombre,20,'\n');
    cout<<"CORREDOR   2: "<<endl;cin.getline(corredor2.nombre,20,'\n');
     cout<<"CORREDOR  3: "<<endl;cin.getline(corredor3.nombre,20,'\n');
     cout<<"CORREDOR  4: "<<endl;cin.getline(corredor4.nombre,20,'\n');
     cout<<"CORREDOR  5: "<<endl;cin.getline(corredor5.nombre,20,'\n');

      cout<<"\nnombre de los corredores\n",
    cout<<"Nombre de corredor1: "<<corredor1.nombre<<endl;
    cout<<"Nombre de corredor2: "<<corredor2.nombre<<endl;
    cout<<"Nombre de corredor3: "<<corredor3.nombre<<endl;
     cout<<"Nombre de corredor4: "<<corredor4.nombre<<endl;
      cout<<"Nombre de corredor5: "<<corredor5.nombre<<endl;


}



int MARATON(){

int n_corredor;
	int minT=0, TiempoT=0, sumaT=0, media,mediana; 

    cout<<"Introducir el numero de corredores: ";
    cin>>n_corredor;

    for (int i = 0; i < n_corredor; i++)
    {
        cout<<"Ingrese tiempo del corredor\t\n";
    
        cout<<"Minutos: ";  cin>>corredor[i].minutos;



		

	
        minT = minT + corredor[i].minutos;
		if (minT >= 60)
        {
            minT = minT - 60;
            
        }  
       
		
		sumaT = minT ;

        media = (sumaT/n_corredor);

		if((n_corredor%2)==1)
		{
			mediana = n_corredor/2;
		}else{
			mediana = ((n_corredor/2 + n_corredor/2-1)/2);
		}	
        
    }


	system("pause");
	system("cls");
	
    cout<<"Tiempos registrados\n";
  
    cout<<" Minutos: \t"<<minT<<endl;
  
	cout<<" Total:   \t"<<"("<<minT<< ")"<<endl;
    cout<<" Media:   \t"<<media<<endl;
	cout<<" Mediana: \t"<<mediana<<endl;


    return 0;


}

int main()
{
 
 int opc;
 do
 {
  ;
    cout<<endl<<"1. INICIAR MARATON "<<endl;
    cout<<"2. NOMBRES"<<endl;
    cout<<"3. SALIR"<<endl;
    cin>>opc;

 switch (opc){

 case 1:  MARATON ();break;  
 case 2:  NOMBRES();break; 
 case 3:  _Exit; break;
     
 }




 } while (opc!=2);
 


}