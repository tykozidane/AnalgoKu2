/*
Nama    : Tyko Zidane Badhawi
NPM     : 140810180031
Kelas   : A
*/
#include<iostream>
using namespace std;

main(){
	int x[5] = {10,20,70,60,9};//daftar list yang ada
	int y = 60;//yang dicari
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklrasi
	int i = 1;
	int idx;
	bool found = false;
	
	//algoritma
	while(i<=n && !found){
		if(x[i] == y){
			found = true;
		}else
		i = i+1;
	}
	if(found == true){
		idx = i;
	}else
	idx = 0;//tidak ditemukan
	cout<<"Hasil cari index elemen : "<<idx;
}