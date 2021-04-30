//Rodrigo Jesus Santisteban Pachari

#include <iostream>
using namespace std;

int main(){
	
	//Instruction with a maximum of 100 characters
	char *instruction = new char[100];
	cout<<">> "; cin.getline(instruction, 100, '\n');
	
	//Print character by character
	int cont=0;
	while(instruction[cont]!='\0'){
		cout<<instruction[cont]<<endl;
		cont++;
	}
	
	//Size
	cout<<"Size of the instruction: "<<cont;
	//Free Memory
	delete instruction;
	
	return 0;
}

