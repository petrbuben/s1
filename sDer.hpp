//sDer class
#include "sBase.hpp"


class sDer: public sBase {
	public:
		static void create(int,int);
		
	protected:
		sDer(int,int);
		virtual ~sDer(){};
		
	private:
		int mDataY;
};
