/*
 * 将一个类的接口转换成客户希望的另外一个接口
 */
#include <iostream>
using namespace std;
 
/**********************1、类适配器****************************/
//Target（定义Client使用的与特定领域相关的接口）
class Target{
public:
	Target(){}
	virtal ~Target(){}
	virtual void request()=0;
};

//Client（与符合Target接口的对象协同）
void doRequest(){
	Target *tar = new Adapter();
	tar.request();
}
//Adaptee（定义一个已经存在的接口，这个接口需要适配）
class Adaptee{
public:
	Adaptee(){}
	~Adaptee(){}
	void specificRequest();
};
void Adaptee::specificRequest(){
	cout<<"<-----------------外部接口------------------>"<<endl;
}

//Adapter（对Adaptee的接口与Target接口进行适配）
class Adapter:public Target,Adaptee{
public:
	Adapter(){}
	~Adapter(){}
	void request();
};
void Adapter::request(){//把外部接口转换成内部接口
	specificRequest();
}


/**********************2、对象适配器**************************/
//Target（定义Client使用的与特定领域相关的接口）
class Target{
public:
	Target(){}
	virtal ~Target(){}
	virtual void request()=0;
};

//Client（与符合Target接口的对象协同）
void doRequest(){
	Target *tar = new Adapter(new ConcreteAdaptee());
	tar.request();
}
//Adaptee（定义一个已经存在的接口，这个接口需要适配）
class Adaptee{
public:
	Adaptee(){}
	~Adaptee(){}
	virtual void specificRequest()=0;
};
//ConcreteAdaptee（外部接口Adaptee的实现类）
class ConcreteAdaptee:public Adaptee{
public:
	ConcreteAdaptee(){}
	~ConcreteAdaptee(){}
	void specificRequest();
};
void ConcreteAdaptee::specificRequest(){
	cout<<"<-----------------外部接口------------------>"<<endl;
}

//Adapter（对Adaptee的接口与Target接口进行适配）
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
void Adapter::request(){//把外部接口转换成内部接口
	adpee.specificRequest();
}
 