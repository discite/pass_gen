#include <iostream>		/* cin, cout*/
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <new>

/* I have just copy pasted this library and added more characters*/ 
static const char library[] =
"0123456789"
"!@#$%^/&*-_"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

/* by default a password should have 6 characters */
int carac=6; 
char *pass_string;



char char_gen(){
	return library[rand() % sizeof(library)];
}

void pass_gen(){
	pass_string= new (std::nothrow) char[carac];
	if (pass_string == nullptr)
    std::cout << "Error: memory could not be allocated";
  	else
  	{
		for (int i = 0; i < carac; ++i){
			pass_string[i]=char_gen();
		}
	}
}


int main(){
	/* initialize random seed: */
	std::cout <<"number of characters to generate in this password\n";
	std::cin >> carac;
	std::cout <<"you entered "<< carac <<" characters\n";
	//if(carac>1000){
	//	std::cout <<"you can not enter  more than 1000 characters\n";
	//}else{
		srand (time(NULL));
		pass_gen();
		std::cout <<"your new password is: ";
		for (int i = 0; i < carac; ++i){
			std::cout << pass_string[i];
		}
		std::cout <<" \n";
	//}
	delete[] pass_string;
}
