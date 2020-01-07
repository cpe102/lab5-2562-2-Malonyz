#include<iostream>
using namespace std;

int main(){
	int i=0;
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	while (i<N){
	cout << "Name of student = ";
	cin >> name[i];
	cout << "Age of student = ";
	cin >> age[i];
	i++;
	}
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	int x = 0;
	while (x<N){
		if (key == age[x]){
			cout << name[x] <<"\n";
		}
		x++;
	}

	

	
	cout << "--------------------------------------\n";
	
	return 0;
}