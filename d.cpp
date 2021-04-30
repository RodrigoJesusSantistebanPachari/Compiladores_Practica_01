//Rodrigo Jesus Santisteban Pachari

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

//Function to determine if it is a number
bool isNumber(char s[]){
	int c=0;
	while(s[c] != '\0'){
		if(!(s[c] >= '0' && s[c] <= '9')){
		   	return false;
 		}
 		c++;
	}
	return true;
}

//Function to determine if it is an special character
bool isSpecialCharacter(char s[]){
	
	while(s[0] != '\0'){
		if(s[0]=='+'||s[0]=='-'||s[0]=='*' || s[0]=='/'){
			return true;
		}
		break;
	}
	return false;
}

//Function to determine if it is a word
bool isWord(char s[]){
	
	int c=0;
	while(s[c] != '\0'){
		if(!((s[c] >= 'a' && s[c] <= 'z') || (s[c] >= 'A' && s[c] <= 'Z'))){
			return false;
		}
		c++;
	}
	return true;
}


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
		while(input[cont] != ' '){
			cont++;
		}

		//Copy from position 0 to cont to the character string called aux
		char aux[cont];
		strncpy(aux, input, cont);
		cout<<aux<<endl;
		
		//Determine whether it is a number, or a word, or an special character
		if(isWord(aux))
			cout<<"It is a word"<<endl;
		else if(isNumber(aux)){
			cout<<"It is a number"<<endl;
		}
		else if(isSpecialCharacter(aux)){
			cout<<"It is an special character"<<endl;
		}
		else{
			cout<<"It can't be recognized as a word, special character or a number"<<endl;
		}
		
		break;
	}
	
	//Free memory
	delete instruction;
	
	
	return 0;
}
