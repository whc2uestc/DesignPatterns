/*
 * �Ž�ģʽ��Bridge���������󲿷�������ʵ�ֲ��ַ��룬ʹ���Ƕ����Զ����ر仯
 */
 
 //Implementor������ʵ����Ľӿڣ��ýӿڲ�һ��Ҫ��Abstraction�Ľӿ���ȫһ�£���ʵ���������ӿڿ�����ȫ��ͬ��
 //һ����˵��Implementor�ӿڽ��ṩ������������Abstraction�����˻�����Щ���������Ľϸ߲�εĲ�������
class Implementor{
public:
	Implementor(){}
	virtual Implementor(){}
	virtual void operationImp()=0;
};
 
 //ConcreteImplementor��ʵ��Implementor�ӿڲ��������ľ���ʵ�֣�
class ConcreteImplementorA{
public:
	ConcreteImplementorA(){}
	~ConcreteImplementorA(){}
	void operationImp();
};
void ConcreteImplementorA::operationImp(){
	cout<<"<---------------------����ʵ��A-------------------->"<<endl;
}
 
class ConcreteImplementorB{
public:
	ConcreteImplementorB(){}
	~ConcreteImplementorB(){}
	void operationImp();
};
void ConcreteImplementorB::operationImp(){
	cout<<"<---------------------����ʵ��B-------------------->"<<endl;
} 

 //Abstraction �����������Ľӿڣ�ά��һ��ָ��Implementor���Ͷ����ָ�룩
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
 // RefinedAbstraction��������Abstraction����Ľӿڣ�
class RefinedAbstraction{
public:
	RefinedAbstraction(Implementor *imp):Abstraction(imp){}
	~RefinedAbstraction();
	void operation();
};
void RefinedAbstraction::operation(){
	this->Abstraction::operation();
	cout<<"<----------------���Ӳ���---------------->"<<endl;
}
 //Client
 int main(){
	 // A�Ĳ���
	 Abstraction *abstractA = new RefinedAbstraction(new ConcreteImplementorA());
	 abstractA->operation();
	 
	 //B�Ĳ���
	 Abstraction *abstractB = new RefinedAbstraction(new ConcreteImplementorB());
	 abstractB->operation();
	 
	 delete abstractB;
	 delete abstractA;
	 return 0;
 }
 