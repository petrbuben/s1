#include "sBase.hpp"
#include <iostream>

//singleton base clas cpp file

sBase * sBase::m_pInstance = 0;

sBase::sBase( int pm ) : mDataX (pm) {};  //protected constructor

bool sBase::exists(){
	return (m_pInstance != 0);
}

sBase * sBase::instance(){
	if (m_pInstance == 0)  std::cout<<"class no created"<<std::endl;
	return m_pInstance;
}
	
