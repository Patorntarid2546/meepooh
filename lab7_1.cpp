#include<iostream>
#include<string>

using namespace std;

string Reversedtext(string m){
	int i = 0, L = m.size();
	string n = "";
	while(i < L){
		n += m[L-i-1];
		i++;
	}
	return n;
}

string func2(string m){
	int i = 0, L = m.size();
	string n = "";
	while(i < L){
		n += toupper(m[i]);
		i++;
	}
	return n;	
}


int main(){
    
    string a ;
    string b ;
    string n ;
    cout << "Input text: ";
    cin >> a ;
    cout << "Reversed text: ";
    b = Reversedtext(a);
    cout << b <<"\n" ;
    cout << "Palindrome: " ;
    if (func2(a) == func2(b)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}