/*
Nama    : Tyko Zidane Badhawi
NPM     : 140810180031
Kelas   : A
*/
#include<iostream>
using namespace std;

main(){
	int x[5] = { 10,20,70,60,9};
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int i, j, imaks, temp;
	
	//algoritma
	for ( i=2 ; i<n; i++){
		imaks = 1;
		for( j=2; j<i; j++){
			if ( x[j] > x[imaks]){
				imaks = j;
			}
		}
		temp = x[i];
		x[i] = x[imaks];
		x[imaks] = temp; 
	}
	for (int i=0; i<n; i++){
		cout<<x[i]<<",";
	}
} 