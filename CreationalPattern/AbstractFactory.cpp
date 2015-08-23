/*
 * 提供一系列相关或相互依赖对象的接口

针对的是面向多个产品等级结构
多个抽象产品类
每个抽象产品类可以派生出多个具体产品类
一个抽象工厂类，可以派生出多个具体工厂类
每个具体工厂类可以创建多个具体产品类的实例
 */
#include <iostream>
using namespace std;

//AbstractFactory（声明一个创建抽象产品对象的接口）
class AbstractFactory{
public:
	AbstractFactory(){};
	~AbstractFactory(){};
	virtual AbstractProductA* createProductA()=0;
	virtual AbstractProductB* createProductB()=0;
};
//ConcreteFactory（实现创建具体产品对象的操作）
/************************工厂1***************************/
class ConcreteFactory1:public AbstractFactory{
public:
	ConcreteFactory1(){};
	~ConcreteFactory1(){};
	AbstractProductA* createProductA();
	AbstractProductB* createProductB();
};
void ConcreteFactory1::createProductA(){
	return new AbstractProductA();
}
void ConcreteFactory1::vreateProdyctB(){
	return new AbstractProductB();
}
/************************工厂2***************************/
class ConcreteFactory2:public AbstractFactory{
public:
	ConcreteFactory2(){};
	~ConcreteFactory2(){};
	AbstractProductA* createProductA();
	AbstractProductB* createProductB();
};
void ConcreteFactory2::createProductA(){
	return new AbstractProductA();
}
void ConcreteFactory2::vreateProdyctB(){
	return new AbstractProductB();
}

//AbstractProduct（为一类产品对象声明一个接口）
/**************************抽象产品A*****************************/
class AbstractProductA{
public:
	AbstractProductA(){};
	~AbstractProductA(){};
	void start();
	virtual void  execute()=0;
	void quit();
};
void AbstractProductA::start(){
	cout<<"<---------------------A类产品是这样启动的----------------------->"<endl;
}
void AbstractProductA::quit(){
	cout<<"<---------------------A类产品是这样退出的----------------------->"<endl;
}
/**************************抽象产品B*****************************/
class AbstractProductB{
public:
	AbstractProductB(){};
	~AbstractProductB(){};
	void start();
	virtual void execute()=0;
	void quit();
};
void AbstractProductB::start(){
	cout<<"<---------------------B类产品是这样启动的----------------------->"<endl;
}
void AbstractProductB::quit(){
	cout<<"<---------------------B类产品是这样退出的----------------------->"<endl;
}
//ConcreteProduct（定义一个将被相应的具体工厂创建的产品对象，实现AbstractProduct接口）
/**************************抽象产品A的具体产品A1*****************************/
class ConcreteProductA1:public AbstractProductA{
public:
	ConcreteProductA1(){};
	~ConcreteProductA1(){};
	void  execute();
};
void  ConcreteProductA1::execute(){
	cout<<"<---------------------产品1是这样运行的----------------------->"<endl;
}
/**************************抽象产品A的具体产品A2*****************************/
class ConcreteProductA2:public AbstractProductA{
public:
	ConcreteProductA2(){};
	~ConcreteProductA2(){};
	void  execute();
};
void  ConcreteProductA2::execute(){
	cout<<"<---------------------产品2是这样运行的----------------------->"<endl;
}
/**************************抽象产品B的具体产品B1*****************************/
class ConcreteProductB1:public AbstractProductB{
public:
	ConcreteProductB1(){};
	~ConcreteProductB1(){};
	void  execute();
};
void  ConcreteProductB1::execute(){
	cout<<"<---------------------产品1是这样运行的----------------------->"<endl;
}
/**************************抽象产品B的具体产品B2*****************************/
class ConcreteProductB2:public AbstractProductB{
public:
	ConcreteProductB2(){};
	~ConcreteProductB2(){};
	void  execute();
};
void  ConcreteProductB2::execute(){
	cout<<"<---------------------产品2是这样运行的----------------------->"<endl;
}

//main（客户）
int main(){
	AbstractFactory *factory1 = new ConcreteFactory1();
	/*********************生产产品A1****************************/
	ConcreteProductA *pA1 = factory1.createProductA();
	pA1->start();		//A是这么启动的
	pA1->execute();		//A1是这样运行的
	pA1->quit();		//A是这样退出的
	/*********************生产产品B1****************************/
	ConcreteProductB *pB1 = factory1.createProductB();
	pB1->start();		//B是这么启动的
	pB1->execute();		//B1是这样运行的
	pB1->quit();		//B是这样退出的
	
	AbstractFactory *factory2 = new ConcreteFactory2();
	/*********************生产产品A2****************************/
	ConcreteProductA *pA2 = factory2.createProductA();
	pA2->start();		//A是这么启动的
	pA2->execute();		//A2是这样运行的
	pA2->quit();		//A是这样退出的
	/*********************生产产品B2****************************/
	ConcreteProductB *pB2 = factory2.createProductB();
	pB2->start();		//B是这么启动的
	pB2->execute();		//B2是这样运行的
	pB2->quit();		//B是这样退出的
	
	return 0;
}















