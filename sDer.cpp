#include "sDer.hpp"
#include <iostream>
sDer::sDer(int px, int py) : sBase(px), mDataY (py){};

void sDer::create(int i, int ii){
	if (m_pInstance) 
		std::cout<<"singleton class already created"<<std::endl;
		else
		m_pInstance = new sDer( i , ii);
	}
		
	
