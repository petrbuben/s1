//sBase class
class sBase{
	public:
		static sBase* instance();
		static bool exists();
		int getDataX(){ return mDataX;}
		void setDataX(int i){ mDataX=i;}
		
	protected:
		sBase(int);   //protected constructor
		virtual ~sBase(){};
		static sBase * m_pInstance;
		
	private:
		int mDataX;
};
		
	
