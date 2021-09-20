#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


const int ROZ=1000;
const int MAXL=1000;
int licz[MAXL+1]; 

string tab[ROZ];

void zad1(){
	
	for(int i=0; i<=MAXL; i++) licz[i]=0;
	for(int i=1; i<ROZ; i++) licz[tab[i].length()]++;

	int maxv=0;
	int liczgat=0;
	
	for(int i=0; i<=MAXL; i++){
		if (licz[i]>maxv) maxv=licz[i];
		if (licz[i]>0) liczgat++;
	}

	cout<<"Liczba gatunków: "<<	liczgat	<<endl;
	cout<<"Rozmiar najwiêkszego gatunku: "<<	maxv  <<endl;

	
}

int main(int argc, char** argv) {
	ifstream in("dane_gen.txt");
	for (int i=0; i<ROZ;i++) in >> tab[i];
	in.close();
	
	zad1();
	return 0;
}
