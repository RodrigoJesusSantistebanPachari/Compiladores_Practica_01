//Rodrigo Jesus Santisteban Pachari

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream file;
	//The file name with a maximum of 40 characters
	char *instruction = new char[40];
	cout<<"Enter the name of the text file >> "; cin.getline(instruction, 40, '\n');
	
	//Read the text file;
	file.open(instruction);
	//Error message
	if(file.fail()){
		cout<<"The file couldn't be opened"<<endl;
		exit(1);
	}
	
	//Travel around the text file
	while(!file.eof()){
		//Line with a maximum of 80 characters
		char *input = new char[80];
		file.getline(input, 80, '\n');

		//Print character by character
		int cont=0;
		while(input[cont] != '\0'){
			cout<<input[cont]<<endl;
			cont++;
		}
	}
	
	//Free memory
	delete instruction;

	return 0;
}
