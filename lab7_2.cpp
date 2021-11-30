#include<iostream>

using namespace std;

int main(){
	
	int i = 0, M[5000], N;
	while(i < 5000){
		M[i] = 2*i+1;
		i++;
	}
    cout << "Please input N: ";
    cin >> N ;
	if(N > 0){
        int j=0,result=0;
        while(j < 5000){
            if(M[j]%N == 0){
                result = result -M[j];
            }
            else{
                result = result + N[j];
            }
            j++;
        }
        cout << "Result = " << result;
    }	
    else{
		cout << "Invalid input!!!";
	}
	return 0;
}