/*
 * ��һ����Ľӿ�ת���ɿͻ�ϣ��������һ���ӿ�
 */
#include <iostream>
using namespace std;
 
/**********************1����������****************************/
//Target������Clientʹ�õ����ض�������صĽӿڣ�
class Target{
public:
	Target(){}
	virtal ~Target(){}
	virtual void request()=0;
};

//Client�������Target�ӿڵĶ���Эͬ��
void doRequest(){
	Target *tar = new Adapter();
	tar.request();
}
//Adaptee������һ���Ѿ����ڵĽӿڣ�����ӿ���Ҫ���䣩
class Adaptee{
public:
	Adaptee(){}
	~Adaptee(){}
	void specificRequest();
};
void Adaptee::specificRequest(){
	cout<<"<-----------------�ⲿ�ӿ�------------------>"<<endl;
}

//Adapter����Adaptee�Ľӿ���Target�ӿڽ������䣩
class Adapter:public Target,Adaptee{
public:
	Adapter(){}
	~Adapter(){}
	void request();
};
void Adapter::request(){//���ⲿ�ӿ�ת�����ڲ��ӿ�
	specificRequest();
}


/**********************2������������**************************/
//Target������Clientʹ�õ����ض�������صĽӿڣ�
class Target{
public:
	Target(){}
	virtal ~Target(){}
	virtual void request()=0;
};

//Client�������Target�ӿڵĶ���Эͬ��
void doRequest(){
	Target *tar = new Adapter(new ConcreteAdaptee());
	tar.request();
}
//Adaptee������һ���Ѿ����ڵĽӿڣ�����ӿ���Ҫ���䣩
class Adaptee{
public:
	Adaptee(){}
	~Adaptee(){}
	virtual void specificRequest()=0;
};
//ConcreteAdaptee���ⲿ�ӿ�Adaptee��ʵ���ࣩ
class ConcreteAdaptee:public Adaptee{
public:
	ConcreteAdaptee(){}
	~ConcreteAdaptee(){}
	void specificRequest();
};
void ConcreteAdaptee::specificRequest(){
	cout<<"<-----------------�ⲿ�ӿ�------------------>"<<endl;
}

//Adapter����Adaptee�Ľӿ���Target�ӿڽ������䣩
class Adapter:public Target{
private:
	Adaptee *adpee;
public:
	Adapter(Adaptee *adpee){
		this->adpee = adpee;
	}
	~Adapter(){
		if(NULL != adpee)
			delete adpee;
	}
	void request();
};
void Adapter::request(){//���ⲿ�ӿ�ת�����ڲ��ӿ�
	adpee.specificRequest();
}
 