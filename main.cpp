#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int num=1,cont=0;
	float suma=0;
	
	while (num!=0)
	{	
	   cout<<"Introduzca un numero: "<<endl;
	   cin>>num;
	   suma=suma+num;
	   if(num!=0)
	   {
		   cont=cont+1;
	   }	   
		   
		}
	   
	    cout<<"El Promedio es: "<<suma/cont<<endl; 
	   
	    
		return EXIT_SUCCESS;
}
