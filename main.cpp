#include <iostream>
#include<conio.h>

#include "sDer.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	sDer::create(3,3);
	sDer::create(2,2);
	
	if (sDer::existuje()) 
	std::cout<<"existuje"<<std::endl;
	else
	std::cout<<"does not exist"<<std::endl;
	
	sDer::instance()->setDataX(8);
	std::cout<<sDer::instance()->getDataX();
	char c;
	std::cout<<"\n ... stiskni klavesu\n";
	c=getch();
	
	return 0;
}
