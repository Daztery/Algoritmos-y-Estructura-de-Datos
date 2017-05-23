#include <iostream>

using namespace std;


int main() {
	
	auto ptrFun=[](float a, int n){ //Esta funcion es anonima, ya que no tiene entorno global como los punteros a funcion
		float p=1;
		for(int i=0;i<n;++i){
			p*=a;
		}	
		return p;
	};
	cout<<"4^3= "<<ptrFun(4,3)<<endl;
	
	auto ptrFun2=[](float a, int n){
		float p=1;
		for(int i=0;i<n;++i){
			p*=a;
		}	
		return p;
	};
	cout<<"4^3= "<<ptrFun(2.3,5)<<endl;
	
	
	
    return 0;
}
