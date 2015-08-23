/*
 * 装饰模式(Decorator):动态地给一个对象添加一些额外的职责。
 */
 
//Component（定义一个对象接口，可以给这些对象动态地添加职责）
class Component{
public:
	Component(){}
	virtual ~Component(){}
	virtual void operation(){}=0;
};

//ConcreteComponent（定义一个对象，可以给这个对象添加一些职责）
class ConcreteComponent:public Component{
public:
	ConcreteComponent(){}
	~ConcreteComponent(){}
	void operation();
};
void ConcreteComponent(){
	cout<<"<---------------------添加一些职责-------------------->"<<endl;
}

//Decorator（维持一个指向Component对象的指针，并定义一个与Component接口一致的接口）
class Decorator{
	
};




//ConcreteDecorator（向组件添加职责）

//Client
 
 
 
 
 
 
 
 
 
 
 
 
 