#include<iostream>
#include<string>
using namespace std;

void printO(int N,int M){
    if(M>0&&N>0){
        for(int i=0; i<N ; i++ ){
            for(int j=0; j<M; j++){
                cout<<'O';
            }
            cout<< endl;
        }
    }else{
        cout<< "Invalid input";
    }
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
