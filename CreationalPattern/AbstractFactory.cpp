/*
 * �ṩһϵ����ػ��໥��������Ľӿ�
 */
#include <iostream>
using namespace std;

//AbstractFactory������һ�����������Ʒ����Ľӿڣ�

//ConcreteFactory��ʵ�ִ��������Ʒ����Ĳ�����


//AbstractProduct��Ϊһ���Ʒ��������һ���ӿڣ�
class APerson{
public:
	APerson(){};
	~APerson(){};
	virtual void academy()=0;	//ѧԺ
	virtual void sex()=0;		//�Ա�
	virtual void major()=0;		//רҵ
};

//ConcreteProduct������һ��������Ӧ�ľ��幤�������Ĳ�Ʒ����ʵ��AbstractProduct�ӿڣ�
class CTeacher:public APerson{
public:
	CTeacher(){};
	~CTeacher(){};
	virtual void academy(){
		cout<<"	�����ѧԺ	"<<endl;
	}
	virtual void age()=0;
}
//main���ͻ���
















