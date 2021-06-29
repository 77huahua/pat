#include<cstdio>
#include<cmath>
//	int main(){
//		int row,col;//行 列  
//		char c;
//		scanf("%d%c",&col,&c);
//		if(col%2==0) row=col/2;
//		else row=col/2+1;
//	//	printf("%d %d %c",row,col, a);
//		//第一行 
//		for(int k=0;k<col;k++){
//			printf("%c",c);
//		}
//		printf("\n");
//		//第二~row-1行 
//		for(int k=2;k<row;k++){
//			printf("%c",c);//每行的第一个字符 
//			for(int j=1;j<col-1;j++){
//				printf(" ");
//			}
//			printf("%c\n",c);//每行的最后一个字符 
//		}
//		//第row行 
//		for(int k=0;k<col;k++){
//				printf("%c",c);
//			}		
//		return 0;
//	} 

//贰  打印沙漏
	int main(){
		int n;
		char c;
		scanf("%d %c",&n,&c);
		int bottom=(int)sqrt(2.0*(n+1))-1;//三角形底部的字符数
		if (bottom%2==0) bottom--;//偶数时减一
		int used=(bottom+1)*(bottom+1)/2-1;//总共输出的字符
		//输出倒三角
		for(int i=bottom;i>=1;i-=2){//i为当前行的非空字符数
			for(int j=0;j<(bottom-i)/2;j++){
				printf(" ");//左边的空格数为（bottom-i）/2， 
			} 
		for(int j=0;j<i;j++){
			printf("%c",c);
		} 
		printf("\n");
		} 
		//输出正三角 
		for(int i=3;i<=bottom;i+=2){
			for(int j=0;j<(bottom-i)/2;j++){
				printf(" ");
			}
			for(int j=0;j<i;j++){
				printf("%c",c); 
			}
			printf("\n");
		}
		printf("%d\n",n-used);//输出剩下的字符个数 
		return 0;
	} 




















