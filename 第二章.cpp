#include<stdio.h>

//壹 ASCII 7 
//int main(){
//	int num1 =1, num2 = 2;
//	printf("%d\n\n%d", num1, num2);
//	printf ("%c", 7);
//	return 0;
//	}

//贰 str char的区别  %c格式可以读入空格或换行；
//				  %s会读取空格并认为结束 
//int main(){
//	int a;
//	char c,str[10];
//	scanf("%d%c%s",&a, &c, str);
//	printf("a=%d, c=%c,str=%s", a, c, str);
//	return 0;
//}

//叁 冒泡排序
//int main(){
//	int a[10]={3,1,4,5,2};
//	for(int i = 1;i <= 4; i++){  //进行n-1趟 
//		//第i趟从a[0]到a[n-i-1]都与他们下一个数比较
//		for(int j = 0;j < 5 - i;j++){
//			 if(a[j]>a[j+1]){  //如果左边的数更大 
//			 	int temp = a[j];
//			 	a[j] = a[j+1];
//			 	a[j+1] = temp;
//			 }
//		} 
//	}
//	for(int i =0;i<5;i++){
//		printf("%d ",a[i]);
//	}
//	return 0;
//}

// 肆 数组赋值 
//#include <string.h>
//	int main(){
//		int a[5] ={1,2, 3,4,5};
//		//赋初值0
//	memset (a, 0,sizeof (a));
//	for (int i=0;i<5;i++){
//		printf ("%d ",a[i]);
//	}
//	printf("\n");
//	//赋初值-1
//	memset (a,1, sizeof(a));
//	for (int i =0;i<5;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//伍 getchar、、 
//	int main(){
//		char str[15];
//		for(int i=0;i<3;i++){
//			str[i] =getchar();
//		}
//		puts (str);
//		return 0;
//	}

//陆 sscanf sprintf
//	int main(){
//		int n;
//		double db;
//		char str[100] ="2048!3.14, hello", str2[100];
//		sscanf(str, "%d!%lf,%s", &n, &db, str2);
//		printf("n=%d,db=%.2f,str2 = %s\n", n,db, str2);
//		return 0;
//	}

//柒 全局变量 局部变量 
//	void change(int x){
//		x = x +1;
//	}
//	int main(){
//		int x =10;
//		change(x);
//		printf("%d\n", x);
//		return 0;
//	}

//指针表示数组 
//	int main(){
//		int a[10];
//		for(int i =0;i<10; i++){
//			scanf("%d",a+i);
//		}
//		for(int i=0;i<10;i++){
//			printf("%d ",*(a+ i));
//		}
//		return 0;
//	}

//指针交换两值 
	void swap (int* a,int* b){
		int x;
		int* temp =&x;
		*temp=*a;
		*a=*b;
		*b = *temp;
	}
	int main(){
		int a= 1,b=2;
		int *p1 = &a, *p2 = &b;
		swap (p1, p2);
		printf ("a = %d,b= %d\n", *p1, *p2);
		return 0;
	}



