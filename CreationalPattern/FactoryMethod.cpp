/*
 *����һ�����ڴ�������Ľӿڣ����������ʵ������һ����
 

��Ե���һ����Ʒ�ȼ��ṹ	
һ�������Ʒ��	
������������������Ʒ��	
һ�����󹤳��࣬����������������幤����	
ÿ�����幤����ֻ�ܴ���һ�������Ʒ���ʵ��
 */


//Product�����幤�������������Ķ���Ľӿڣ�
class Product{
	Product(){};
	~Product(){};
	virtual void start()=0;
	virtual void execute()=0;
	virtual void quit()=0;
};

//ConcreteProduct��ʵ��Product�ӿڣ�
class ConcreteProductP1:public Product{
	ConcreteProductP1(){};
	~ConcreteProductP1(){};
	void start();
	void execute();
	void quit();
};
ConcreteProductP1::start(){
	cout<<"<<----------P1 ����---------->>"<<endl;
}
ConcreteProductP1::execute(){
	cout<<"<<----------P1 ִ��---------->>"<<endl;
}
ConcreteProductP1::quit(){
	cout<<"<<----------P1 �˳�---------->>"<<endl;
}

class ConcreteProductP2:public Product{
	ConcreteProductP2(){};
	~ConcreteProductP2(){};
	void start();
	void execute();
	void quit();
};
ConcreteProductP2::start(){
	cout<<"<<----------P2 ����---------->>"<<endl;
}
ConcreteProductP2::execute(){
	cout<<"<<----------P2 ִ��---------->>"<<endl;
}
ConcreteProductP2::quit(){
	cout<<"<<----------P2 �˳�---------->>"<<endl;
}


//Creator�����������������÷�������һ��Product���͵Ķ���CreatorҲ���Զ���һ������������ȱʡʵ�֣�������һ��ȱʡ��ConcreteProduct����
//���Ե��ù��������Դ���һ��Product����
class Creator{
public:
	Creator(){};
	~Creator(){};
	virtual Product* createProduct()=0;
};

//ConcreteCreator���ض��幤�������Է���һ��ConcreteProductʵ����
class ConcreteCreatorP1:public Creator{
public:
	ConcreteCreatorP1(){};
	~ConcreteCreatorP1(){};
	Product* createProduct();
};
Product* ConcreteCreatorP1::createProduct(){
	return new ConcreteProductP1();
}


class ConcreteCreatorP2:public Creator{
public:
	ConcreteCreatorP2(){};
	~ConcreteCreator()P2{};
	Product* createProduct();
};
Product* ConcreteCreatorP2::createProduct(){
	return new ConcreteProductP2();
}
