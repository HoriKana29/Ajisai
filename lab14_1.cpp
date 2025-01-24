#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
for(int i = 1 ; i<N ; i+=1){
        cout << "Pass "<< i <<":";
        T x = d[i];
        int k = i;
        while(k > 0 && d[k-1] < x){
                d[k] = d[k-1];
                k-=1;
               // cout << "\n" << k << " " << k-1 << "\n" ;
        }
            d[k] = x;
        for(int j = 0;j<N;j++) cout << d[j] << " ";
        cout << "\n";
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
