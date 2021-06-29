# include<cstdio>
////壹 D进制a+b 
//	int main(){
//		int a,b,d;
//		scanf("%d%d%d",&a,&b,&d);
//		int sum=a+b;
//		int ans[31],num=0;
//		do{
//			ans[num++]=sum%d;
//			sum/=d;
//		}while(sum);//这样就避免了直接A+B等于0的情况 
//		for(int i=num-1;i>=0;i--){//从高位到低位输出符合进制转换规律 
//			printf("%d",ans[i]);
//		 }
//		return 0;
//	}

////贰   在霍格沃兹找零钱
//	const int Galleon=17*29;//Galleon换Knut
//	const int Sickle=29;//Sickle换knut 
//	int main(){
//		int a1,b1,c1;
//		int a2,b2,c2;
//		scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
//		int price=a1*Galleon+b1*Sickle+c1;
//		int pay=a2*Galleon+b2*Sickle+c2;
//		int change=pay-price;
//		if(change<0){
//			printf("-");
//			change=-change;
//		}
//		printf("%d.%d.%d\n",change/Galleon,change%Galleon/Sickle,change%Sickle);
//		return 0;
//		
//	} 
// 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
