/*
Nama    : Tyko Zidane Badhawi
NPM     : 140810180031
Kelas   : A
*/
#include<iostream>
using namespace std;

main(){
	int x[5]={10,20,70,60,9};
	int n= sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int maks = x[0];		//2
	int i= 2;				//2
	
	//algoritma
	while (i<= n){			//(n-1)
		if(x[i] > maks){	//(n-2)
			maks = x[i];	//(n-2)
		}
		i=i+1;				//2n
	}
	
	cout<<"Nilai maks dari array adalah : "<<maks;
	
}