#include<iostream>
using namespace std;
bool LessEqu(int a,int b)
{
    //���a ������С�ڵ���b����true
    if (a != b) return a <= b;
    
}
	int main(){
//		bool a;
//		bool b =2; //ִ�д��к�b=true(����2תΪbool�ͺ���Ϊtrue)
//		if(b) cout << "ok!" << endl;
//		else cout << "b is ok!" <<endl;
//		a = b-1; //ִ�д��к�b=false(bool������true������������ʱ��תΪintֵ1����1����Ϊ0����ֵ��bʱ��ת��Ϊboolֵfalse)
//		if(a) cout << "error!" <<endl;
//		else cout << "a is error!" <<endl;
int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",LessEqu(a,b));
//	printf(c);
		return 0;
}
