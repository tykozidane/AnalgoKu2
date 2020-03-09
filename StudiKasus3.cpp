/*
Nama    : Tyko Zidane Badhawi
NPM     : 140810180031
Kelas   : A
*/
#include<iostream>
using namespace std;

main(){
	int x[5]={10,20,70,60,9};//input
	int idx; //output
	int y = 70;//angka yang dicari
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int i, j, mid;
	bool found;
	
	//algoritma
	i = 1;
	j = n;
	found = false;
	while(!found && i<= j){
		mid = (i + j)/2;
		if (x[mid] == y){
			found = true;
		}
		else if(x[mid] < y){
			i = mid+1;
		}
		else{
			j = mid - 1; 
		}
		
		
	}
	if(found == true){
		idx=mid;
	}else
	idx= 0;
	
	cout<<"Hasil cari indeks elemen : "<<idx;

}