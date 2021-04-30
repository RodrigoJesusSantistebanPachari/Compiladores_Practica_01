//Rodrigo Jesus Santisteban Pachari

#include <iostream>
#include <fstream>

using namespace std;

//Decipher a string
void decipher(char *ch){
	int c=0;
	while(ch[c] != '\0'){
		*(ch+c) -= 3;
		c++;
	}
}

int main(){
	
	
	ifstream file;
	//The file name with a maximum of 40 characters
	char *instruction = new char[40];
	cout<<"Enter the name of the text file you want to decipher >> "; cin.getline(instruction, 40, '\n');
	
	//Read the text file;
	file.open(instruction);
	//Error message
	if(file.fail()){
		cout<<"The file couldn't be opened"<<endl;
		exit(1);
	}

	//To overwrite the file	
	fstream output;
	output.open(instruction);
	
	cout<<"The text deciphered is:"<<endl<<endl;
	//Travel around the text file
	while(!file.eof()){
		//Line with a maximum of 80 characters
		char *input = new char[80];
		file.getline(input, 80, '\n');

		//Decipher
		decipher(input);
		cout<<input<<endl;
		output<<input<<endl;
		
	}
	
	
	return 0;
}
