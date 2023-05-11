#include<iostream>//利用梯度下降法求y=x^2的极小值点
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
        if(i==10)cout<<"迭代是10步结果为："<<x<<endl;
        if(i==20)cout<<"迭代是20步结果为："<<x<<endl;
        if(i==30)cout<<"迭代是30步结果为："<<x<<endl;
        if(i==40)cout<<"迭代是40步结果为："<<x<<endl;
        if(i==50)cout<<"迭代是50步结果为："<<x<<endl;

    }
	cout << "hello world\n";
	cut << "test for webhook\n";
	# add a new line
	
	add by to_merge branch
    return 0;
}
