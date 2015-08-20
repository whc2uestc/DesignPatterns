/*
 * 提供一系列相关或相互依赖对象的接口
 */
#include <iostream>
using namespace std;

//AbstractFactory（声明一个创建抽象产品对象的接口）

//ConcreteFactory（实现创建具体产品对象的操作）


//AbstractProduct（为一类产品对象声明一个接口）
class APerson{
public:
	APerson(){};
	~APerson(){};
	virtual void academy()=0;	//学院
	virtual void sex()=0;		//性别
	virtual void major()=0;		//专业
};

//ConcreteProduct（定义一个将被相应的具体工厂创建的产品对象，实现AbstractProduct接口）
class CTeacher:public APerson{
public:
	CTeacher(){};
	~CTeacher(){};
	virtual void academy(){
		cout<<"	计算机学院	"<<endl;
	}
	virtual void age()=0;
}
//main（客户）
















