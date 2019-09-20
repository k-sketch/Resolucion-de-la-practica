#include <iostream>

using namespace std;

int main(){
	int suma=0;
	int n=1000000;
	for(int i=0;i<n;i++){
		if(3*i<=n)
			suma += 3*i;
		if(5*i<n && (5*i)%3 != 0)
			suma += 5*i;
	}
	cout << "Suma: " << suma << endl;
}


int main(){
   int i;
   int factorial=1;
   int numero;
   cout<<"ingresa un numero: ";
   cin>>numero;
   if(numero<0) factorial =0;
   else if(numero==0) factorial=1;
   else
      for (i = 1; i <= numero; i++){
         factorial=factorial*i;
      }
   cout<<"Su factorial es: "<< factorial;
}



int main(){
    int a = 0;
    int b = 0;
    cout<<"Rango de busqueda: ";
    cin>>b;
    for(int i=1;i<= b;i++){
    if(i%2==0){
        for(int j=(i/2);j>=1;j--)
            if(i%j==0)
                a=a+j;
    }
    if(a==i)
        cout << a << " Es un numero perfecto ";
    a=0;
    }
}



int main(){
    long long int i, resultado;
    long long int maximo = 600851475143;
    int num;
    for(i=2;i<maximo;i++){
       if(maximo%i == 0){
           maximo/=i;
           i = 2;
        }
    }
    cout << "El maximo factor primo de 600851475143 es: " << maximo;
    return 0;
}

