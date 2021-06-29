#include<iostream>
using namespace std;
bool LessEqu(int a,int b)
{
    //如果a 的日期小于等于b返回true
    if (a != b) return a <= b;
    
}
	int main(){
//		bool a;
//		bool b =2; //执行此行后，b=true(整型2转为bool型后结果为true)
//		if(b) cout << "ok!" << endl;
//		else cout << "b is ok!" <<endl;
//		a = b-1; //执行此行后，b=false(bool型数据true参与算术运算时会转为int值1，减1后结果为0，赋值给b时会转换为bool值false)
//		if(a) cout << "error!" <<endl;
//		else cout << "a is error!" <<endl;
int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",LessEqu(a,b));
//	printf(c);
		return 0;
}
