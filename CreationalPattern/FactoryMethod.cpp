/*
 *定义一个用于创建对象的接口，让子类决定实例化哪一个类
 

针对的是一个产品等级结构	
一个抽象产品类	
可以派生出多个具体产品类	
一个抽象工厂类，可以派生出多个具体工厂类	
每个具体工厂类只能创建一个具体产品类的实例
 */


//Product（定义工厂方法所创建的对象的接口）
class Product{
	Product(){};
	~Product(){};
	virtual void start()=0;
	virtual void execute()=0;
	virtual void quit()=0;
};

//ConcreteProduct（实现Product接口）
class ConcreteProductP1:public Product{
	ConcreteProductP1(){};
	~ConcreteProductP1(){};
	void start();
	void execute();
	void quit();
};
ConcreteProductP1::start(){
	cout<<"<<----------P1 启动---------->>"<<endl;
}
ConcreteProductP1::execute(){
	cout<<"<<----------P1 执行---------->>"<<endl;
}
ConcreteProductP1::quit(){
	cout<<"<<----------P1 退出---------->>"<<endl;
}

class ConcreteProductP2:public Product{
	ConcreteProductP2(){};
	~ConcreteProductP2(){};
	void start();
	void execute();
	void quit();
};
ConcreteProductP2::start(){
	cout<<"<<----------P2 启动---------->>"<<endl;
}
ConcreteProductP2::execute(){
	cout<<"<<----------P2 执行---------->>"<<endl;
}
ConcreteProductP2::quit(){
	cout<<"<<----------P2 退出---------->>"<<endl;
}


//Creator（声明工厂方法，该方法返回一个Product类型的对象；Creator也可以定义一个工厂方法的缺省实现，它返回一个缺省的ConcreteProduct对象）
//可以调用工厂方法以创建一个Product对象
class Creator{
public:
	Creator(){};
	~Creator(){};
	virtual Product* createProduct()=0;
};

//ConcreteCreator（重定义工厂方法以返回一个ConcreteProduct实例）
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
