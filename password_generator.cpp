#include <iostream>		/* cin, cout*/
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

/* I have just copy pasted this library and added more characters*/ 
static const char library[] =
"0123456789"
"!@#$%^/&*()=¿?¡+*~{}[]-_.:ñÑ"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

/* by default a password should have 6 characters */
int carac=6; 
char *pass_string;



char char_gen(){
	return library[rand() % sizeof(library)];
}

void pass_gen(){
	for (int i = 0; i < carac; ++i){
		*(pass_string+i);
	}
}


int main(){
	/* initialize random seed: */
	srand (time(NULL));
	pass_gen();
	for (int i = 0; i < carac; ++i){
		std::cout <<"your new password is: "<< *(pass_string+i) <<" \n";
	}
	//std::cout <<"number of characters to generate in this password\n";
	//std::cin >> carac;
	//std::cout <<"you entered "<< carac <<" characters\n";
}
