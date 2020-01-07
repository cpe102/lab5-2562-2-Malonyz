#include<iostream>
#include<string>
using namespace std;

string mixText(string a,string b){
	int i=0,l=a.size();
	string f;

	if(a.size() == b.size()){
		while (i < a.size()){
			f +=  a[i];
			f +=  b[i];
			i++;


		} return f;

	}else {
		return "E";
	}
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
