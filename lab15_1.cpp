#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N)
{
	int x;
	int y;
	for(int i = 0; i < N-1; i++){
		y=i;
		while(0-1<y){
		if(d[y]<d[y+1]){
			x=d[y+1];
			d[y+1]=d[y];
			d[y]=x;
		}
			y--;
		}
		cout<<"Pass "<<i+1<<":";
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout<<"\n";	
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

