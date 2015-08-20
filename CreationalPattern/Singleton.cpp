/*
 *保证一个类仅有一个实例，并提供一个访问它的全局访问点
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


/* 构造函数为protected，所以无法直接实例化Singleton，只能通过静态函数Instance来实例化*/