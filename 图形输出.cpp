#include<cstdio>
#include<cmath>
//	int main(){
//		int row,col;//�� ��  
//		char c;
//		scanf("%d%c",&col,&c);
//		if(col%2==0) row=col/2;
//		else row=col/2+1;
//	//	printf("%d %d %c",row,col, a);
//		//��һ�� 
//		for(int k=0;k<col;k++){
//			printf("%c",c);
//		}
//		printf("\n");
//		//�ڶ�~row-1�� 
//		for(int k=2;k<row;k++){
//			printf("%c",c);//ÿ�еĵ�һ���ַ� 
//			for(int j=1;j<col-1;j++){
//				printf(" ");
//			}
//			printf("%c\n",c);//ÿ�е����һ���ַ� 
//		}
//		//��row�� 
//		for(int k=0;k<col;k++){
//				printf("%c",c);
//			}		
//		return 0;
//	} 

//��  ��ӡɳ©
	int main(){
		int n;
		char c;
		scanf("%d %c",&n,&c);
		int bottom=(int)sqrt(2.0*(n+1))-1;//�����εײ����ַ���
		if (bottom%2==0) bottom--;//ż��ʱ��һ
		int used=(bottom+1)*(bottom+1)/2-1;//�ܹ�������ַ�
		//���������
		for(int i=bottom;i>=1;i-=2){//iΪ��ǰ�еķǿ��ַ���
			for(int j=0;j<(bottom-i)/2;j++){
				printf(" ");//��ߵĿո���Ϊ��bottom-i��/2�� 
			} 
		for(int j=0;j<i;j++){
			printf("%c",c);
		} 
		printf("\n");
		} 
		//��������� 
		for(int i=3;i<=bottom;i+=2){
			for(int j=0;j<(bottom-i)/2;j++){
				printf(" ");
			}
			for(int j=0;j<i;j++){
				printf("%c",c); 
			}
			printf("\n");
		}
		printf("%d\n",n-used);//���ʣ�µ��ַ����� 
		return 0;
	} 




















