/*
 *��֤һ�������һ��ʵ�������ṩһ����������ȫ�ַ��ʵ�
 */

class Singleton{
public:
	static Singleton* Instance(){
		if(instance == 0)
			instance = new Singleton;
		return instance;
	}
protected:
	Singleton(){};
private:
	static Singleton* instance;
};
Singleton* Singleton::instance = 0;


/* ���캯��Ϊprotected�������޷�ֱ��ʵ����Singleton��ֻ��ͨ����̬����Instance��ʵ����*/