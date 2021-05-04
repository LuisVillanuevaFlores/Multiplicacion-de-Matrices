#include <iostream>

using namespace std;

void sumatr(int a[][100],int f,int c,int b[][100]){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			a[i][j]=a[i][j]+b[i][j];
		}
	}
}

void genma(int a[][100],int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			a[i][j]=0;
		}
	}
}

void multi(int a[][100],int f,int c, int b[][100],int d){
	int m[100][100];
	int aux[100][100];
	for(int h=0;h<c;h++){
		for(int i=0;i<f;i++){
			for(int j=0;j<d;j++){
				aux[i][j]=a[i][h]*b[h][j];
			}
		}
		sumatr(m,f,d,aux);
		genma(aux,f,d);
	}
	for(int i=0;i<f;i++){
		for(int j=0;j<d;j++){
			cout<<m[i][j]<<' ';
		}
		cout<<endl;
	}
}

int main(){
	int f,c,fb,cb;

	int a[100][100];
	cin>>f>>c;
	cout<<"------------------------------------------"<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	cout<<"------------------------------------------"<<endl;
	int b[100][100];
	cin>>fb>>cb;
	cout<<"------------------------------------------"<<endl;
	for(int i=0;i<fb;i++){
		for(int j=0;j<cb;j++){
			cin>>b[i][j];
		}
	}
	cout<<"------------------------------------------"<<endl;
	if(c==fb){
		multi(a,f,c,b,cb);}
	else {cout<<"No se puede multiplicar"<<endl;}
	return 0;
}
