/*
 * װ��ģʽ(Decorator):��̬�ظ�һ���������һЩ�����ְ��
 */
 
//Component������һ������ӿڣ����Ը���Щ����̬�����ְ��
class Component{
public:
	Component(){}
	virtual ~Component(){}
	virtual void operation(){}=0;
};

//ConcreteComponent������һ�����󣬿��Ը�����������һЩְ��
class ConcreteComponent:public Component{
public:
	ConcreteComponent(){}
	~ConcreteComponent(){}
	void operation();
};
void ConcreteComponent(){
	cout<<"<---------------------���һЩְ��-------------------->"<<endl;
}

//Decorator��ά��һ��ָ��Component�����ָ�룬������һ����Component�ӿ�һ�µĽӿڣ�
class Decorator{
	
};




//ConcreteDecorator����������ְ��

//Client
 
 
 
 
 
 
 
 
 
 
 
 
 