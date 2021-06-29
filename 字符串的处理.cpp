#include<cstdio>
#include<cstring>
//壹 换个格式输出整数
//	int main(){
//		int n,b,s,g;
//		scanf("%d",&n);
//		 b=n/100;
//		 s=n/10%10;
//		 g=n%10;
//		if(b!=0)
//			for(int i=0;i<b;i++) printf("B");
//		if(s!=0)
//			for(int j=0;j<s;j++) printf("S");
//		if(g!=0)
//			for(int k=1;k<=g;k++) printf("%d",k);
//		return 0;
//	} 

////贰 个位数统计
//	int main(){
//		char str[1010];
//		gets(str);//scanf("%s",&str);
//		int len=strlen(str);
//		int count[10]={0};
//		for(int i=0;i<len;i++){
//			count[str[i]-'0']++;
//		}
//		for(int i=0;i<10;i++){
//			if(count[i]!=0){
//				printf("%d:%d",i,count[i]);
//			}
//		}
//		return 0;
//	}

////叁 检查身份证信息
//	//权重 ,w[0]=7,w[1]=9...
//	int w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//	//校验码 ,change[0]='1',change[1]='0'...
//	char change[15]={'1','0','X','9','8','7','6','5','4','3','2'};
//	int main(){
//		int n;
//		scanf("%d",&n);
//		bool flag=true;//记录是否所有的身份证都正确，若都正确，则flag=true
//		char str[20];
//		for(int i=0;i<n;i++){
//			scanf("%s",str);
//			int j,last=0;//last记录前17位的加权和
//			for(j=0;j<17;j++){
//				if(!(str[j]>='0'&&str[j]<='9')) break;
//				last=last+(str[j]-'0')*w[j];
//			} 
//			if(j<17){//有非数字的存在
//				flag=false;//存在身份证错误
//				printf("%s\n",str); 
//			}else{
//				if(change[last%11]!=str[17]){ //校验码不等于身份证号最后一位
//				 flag=false;//存在身份证号码错误；
//				 printf("%s\n",str); 
//				}
//			}
//		} 
//		if(flag==true){
//			printf("All passed\n");
//		}
//		return 0;
//	} 

//肆  写出这个数
	int main(){
		char str[110];
		scanf("%s",&str);
		int len=strlen(str);
		int sum=0;//sum存放所有位数之和
		for(int i=0;i<len;i++){
			sum+=str[i]-'0';//将每一位累加 
		} 
		int num=0,ans[10];//num表示sum的位数
		while(sum){
			//将sum每一位存到数组中， sum的低位存到ans[]的低位
			ans[num]=sum%10;
			num++;
			sum/=10;
		} 
//		char change[12]={'1','0','X','9','8','7','6','5','4','3','2'};√ 
		char change[11][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"}; 
//		char change[11]={'ling','yi','er','san','si','wu','liu','qi','ba','jiu'};×
//		char change[11]={"q","w","s","a","d","c","v","g","b","n"};× 
//		char change[10][2]={"q","w","s","a","d","c","v","g","b","n"};√ 
//		char change[11]={'q','w','s','a','d','c','v','g','b','n'};√ 
		for(int i=num-1;i>=0;i--){//从高位开始输出
			printf("%s",change[ans[i]]);//ans[i]为从高位开始的第i个数字
			if(i!=0) printf(" "); 
		}
		return 0;
	} 

















 


