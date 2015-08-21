/*
 * 桥接模式（Bridge）：将抽象部分与它的实现部分分离，使它们都可以独立地变化
 */
 
 //Implementor（定义实现类的接口，该接口不一定要与Abstraction的接口完全一致；事实上这两个接口可以完全不同；
 //一般来说，Implementor接口仅提供基本操作，而Abstraction则定义了基于这些基本操作的较高层次的操作。）
class Implementor{
public:
	Implementor(){}
	virtual Implementor(){}
	virtual void operationImp()=0;
};
 
 //ConcreteImplementor（实现Implementor接口并定义它的具体实现）
class ConcreteImplementorA{
public:
	ConcreteImplementorA(){}
	~ConcreteImplementorA(){}
	void operationImp();
};
void ConcreteImplementorA::operationImp(){
	cout<<"<---------------------具体实现A-------------------->"<<endl;
}
 
class ConcreteImplementorB{
public:
	ConcreteImplementorB(){}
	~ConcreteImplementorB(){}
	void operationImp();
};
void ConcreteImplementorB::operationImp(){
	cout<<"<---------------------具体实现B-------------------->"<<endl;
} 

 //Abstraction （定义抽象类的接口，维护一个指向Implementor类型对象的指针）
class Abstraction{
private:
	Implementor *imp;
public:
	Abstraction(Implementor *imp){
		this->imp = imp;
	}
	virtual ~Abstraction(){
		if(imp)
			delete imp;
	}
	void operation();
};
void Abstraction::operation(){
	this->imp->operationImp();
}
 // RefinedAbstraction（扩充由Abstraction定义的接口）
class RefinedAbstraction{
public:
	RefinedAbstraction(Implementor *imp):Abstraction(imp){}
	~RefinedAbstraction();
	void operation();
};
void RefinedAbstraction::operation(){
	this->Abstraction::operation();
	cout<<"<----------------附加操作---------------->"<<endl;
}
 //Client
 int main(){
	 // A的操作
	 Abstraction *abstractA = new RefinedAbstraction(new ConcreteImplementorA());
	 abstractA->operation();
	 
	 //B的操作
	 Abstraction *abstractB = new RefinedAbstraction(new ConcreteImplementorB());
	 abstractB->operation();
	 
	 delete abstractB;
	 delete abstractA;
	 return 0;
 }
 