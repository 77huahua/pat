#include<stdio.h>

//Ҽ ASCII 7 
//int main(){
//	int num1 =1, num2 = 2;
//	printf("%d\n\n%d", num1, num2);
//	printf ("%c", 7);
//	return 0;
//	}

//�� str char������  %c��ʽ���Զ���ո���У�
//				  %s���ȡ�ո���Ϊ���� 
//int main(){
//	int a;
//	char c,str[10];
//	scanf("%d%c%s",&a, &c, str);
//	printf("a=%d, c=%c,str=%s", a, c, str);
//	return 0;
//}

//�� ð������
//int main(){
//	int a[10]={3,1,4,5,2};
//	for(int i = 1;i <= 4; i++){  //����n-1�� 
//		//��i�˴�a[0]��a[n-i-1]����������һ�����Ƚ�
//		for(int j = 0;j < 5 - i;j++){
//			 if(a[j]>a[j+1]){  //�����ߵ������� 
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

// �� ���鸳ֵ 
//#include <string.h>
//	int main(){
//		int a[5] ={1,2, 3,4,5};
//		//����ֵ0
//	memset (a, 0,sizeof (a));
//	for (int i=0;i<5;i++){
//		printf ("%d ",a[i]);
//	}
//	printf("\n");
//	//����ֵ-1
//	memset (a,1, sizeof(a));
//	for (int i =0;i<5;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//�� getchar���� 
//	int main(){
//		char str[15];
//		for(int i=0;i<3;i++){
//			str[i] =getchar();
//		}
//		puts (str);
//		return 0;
//	}

//½ sscanf sprintf
//	int main(){
//		int n;
//		double db;
//		char str[100] ="2048!3.14, hello", str2[100];
//		sscanf(str, "%d!%lf,%s", &n, &db, str2);
//		printf("n=%d,db=%.2f,str2 = %s\n", n,db, str2);
//		return 0;
//	}

//�� ȫ�ֱ��� �ֲ����� 
//	void change(int x){
//		x = x +1;
//	}
//	int main(){
//		int x =10;
//		change(x);
//		printf("%d\n", x);
//		return 0;
//	}

//ָ���ʾ���� 
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

//ָ�뽻����ֵ 
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



