/*
 * �ṩһϵ����ػ��໥��������Ľӿ�

��Ե�����������Ʒ�ȼ��ṹ
��������Ʒ��
ÿ�������Ʒ�������������������Ʒ��
һ�����󹤳��࣬����������������幤����
ÿ�����幤������Դ�����������Ʒ���ʵ��
 */
#include <iostream>
using namespace std;

//AbstractFactory������һ�����������Ʒ����Ľӿڣ�
class AbstractFactory{
public:
	AbstractFactory(){};
	~AbstractFactory(){};
	virtual AbstractProductA* createProductA()=0;
	virtual AbstractProductB* createProductB()=0;
};
//ConcreteFactory��ʵ�ִ��������Ʒ����Ĳ�����
/************************����1***************************/
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
/************************����2***************************/
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

//AbstractProduct��Ϊһ���Ʒ��������һ���ӿڣ�
/**************************�����ƷA*****************************/
class AbstractProductA{
public:
	AbstractProductA(){};
	~AbstractProductA(){};
	void start();
	virtual void  execute()=0;
	void quit();
};
void AbstractProductA::start(){
	cout<<"<---------------------A���Ʒ������������----------------------->"<endl;
}
void AbstractProductA::quit(){
	cout<<"<---------------------A���Ʒ�������˳���----------------------->"<endl;
}
/**************************�����ƷB*****************************/
class AbstractProductB{
public:
	AbstractProductB(){};
	~AbstractProductB(){};
	void start();
	virtual void execute()=0;
	void quit();
};
void AbstractProductB::start(){
	cout<<"<---------------------B���Ʒ������������----------------------->"<endl;
}
void AbstractProductB::quit(){
	cout<<"<---------------------B���Ʒ�������˳���----------------------->"<endl;
}
//ConcreteProduct������һ��������Ӧ�ľ��幤�������Ĳ�Ʒ����ʵ��AbstractProduct�ӿڣ�
/**************************�����ƷA�ľ����ƷA1*****************************/
class ConcreteProductA1:public AbstractProductA{
public:
	ConcreteProductA1(){};
	~ConcreteProductA1(){};
	void  execute();
};
void  ConcreteProductA1::execute(){
	cout<<"<---------------------��Ʒ1���������е�----------------------->"<endl;
}
/**************************�����ƷA�ľ����ƷA2*****************************/
class ConcreteProductA2:public AbstractProductA{
public:
	ConcreteProductA2(){};
	~ConcreteProductA2(){};
	void  execute();
};
void  ConcreteProductA2::execute(){
	cout<<"<---------------------��Ʒ2���������е�----------------------->"<endl;
}
/**************************�����ƷB�ľ����ƷB1*****************************/
class ConcreteProductB1:public AbstractProductB{
public:
	ConcreteProductB1(){};
	~ConcreteProductB1(){};
	void  execute();
};
void  ConcreteProductB1::execute(){
	cout<<"<---------------------��Ʒ1���������е�----------------------->"<endl;
}
/**************************�����ƷB�ľ����ƷB2*****************************/
class ConcreteProductB2:public AbstractProductB{
public:
	ConcreteProductB2(){};
	~ConcreteProductB2(){};
	void  execute();
};
void  ConcreteProductB2::execute(){
	cout<<"<---------------------��Ʒ2���������е�----------------------->"<endl;
}

//main���ͻ���
int main(){
	AbstractFactory *factory1 = new ConcreteFactory1();
	/*********************������ƷA1****************************/
	ConcreteProductA *pA1 = factory1.createProductA();
	pA1->start();		//A����ô������
	pA1->execute();		//A1���������е�
	pA1->quit();		//A�������˳���
	/*********************������ƷB1****************************/
	ConcreteProductB *pB1 = factory1.createProductB();
	pB1->start();		//B����ô������
	pB1->execute();		//B1���������е�
	pB1->quit();		//B�������˳���
	
	AbstractFactory *factory2 = new ConcreteFactory2();
	/*********************������ƷA2****************************/
	ConcreteProductA *pA2 = factory2.createProductA();
	pA2->start();		//A����ô������
	pA2->execute();		//A2���������е�
	pA2->quit();		//A�������˳���
	/*********************������ƷB2****************************/
	ConcreteProductB *pB2 = factory2.createProductB();
	pB2->start();		//B����ô������
	pB2->execute();		//B2���������е�
	pB2->quit();		//B�������˳���
	
	return 0;
}















