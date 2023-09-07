#include<iostream>//�����ݶ��½�����y=x^2�ļ�Сֵ��
using namespace std;
int main()
{
    float x,dx,step;
    int i;
    step=0.2;
    x=10;

    for(i=1;i<=50;i++)
    {
        dx=2*x;
        x=x-step*dx;
        if(i==10)cout<<"������10�����Ϊ��"<<x<<endl;
        if(i==20)cout<<"������20�����Ϊ��"<<x<<endl;
        if(i==30)cout<<"������30�����Ϊ��"<<x<<endl;
        if(i==40)cout<<"������40�����Ϊ��"<<x<<endl;
        if(i==50)cout<<"������50�����Ϊ��"<<x<<endl;

    }
	cout << "hello world\n";
	cut << "test for webhook\n";
	# add a new line
	
	add by master branch
	add by to_merge branch
	add a new line
    return 0;
}
