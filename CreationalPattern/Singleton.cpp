/*
 *��֤һ�������һ��ʵ�������ṩһ����������ȫ�ַ��ʵ�
 */

class Singleton{
public:
	static Singleton* Instance();
protected:
	Singleton(){}
	Singleton(Singleton &instance){}
	Singleton& operator=(Singleton &instance){}
private:
	static Singleton* instance;
};
Singleton* Singleton::Instance(){
	if(instance == 0)
		instance = new Singleton;
	return instance;
}
Singleton* Singleton::instance = 0;


/* ���캯��Ϊprotected�������޷�ֱ��ʵ����Singleton��ֻ��ͨ����̬����Instance��ʵ����*/