#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Persona{
	string nombre;
	string apellido;
	long long dni;
};

/*void ordenar(vector <Persona> p){ ///FUNCION EASY
	for(int i=0;i<p.size()-1;++i){
		for(int k=1;k<p.size()-i;++k){
			if(p[i].apellido>p[k].apellido){
				Persona t=p[i];
				p[i]=p[k];
				p[k]= t;
				
			}
		}
	}
	
}*/

template <class T>
void ordenar(vector <T> p,bool (*comp)(T,T)){ ///FUNCION PARA VARIOS PARAMETROS CON UNA FUNCION PUNTERO
	for(int i=0;i<p.size()-1;++i){
		for(int k=1;k<p.size()-i;++k){
			if(comp(p[i],p[k])){
				T t=p[i];
				p[i]=p[k];
				p[k]= t;
			}
		}
	}
	
}

bool compPersonaApeDesc(Persona a, Persona b){
	return a.apellido>a.apellido;
}


int main(){
		
		
	return 0;
}
