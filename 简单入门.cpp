#include<cstdio> 

//壹  3n+1 

//	int main(){
//		int a,n=0;//写写规范  int n,step 
//		scanf("%d",&a);
//		while(a!=1){
//		
//			if(a%2==0) a=a/2;
//			else a=(3*a+1)/2;
//			n++;   // step++; 
//		}
//		printf("%d",n);
//		return 0;
//} 

//贰  A+B和C 

//	int main(){
//		int n;
//		scanf("%d", &n);
//		while(n--){
//			long long a,b,c;
//			scanf("%lld%lld%lld",&a,&b,&c);
//			int x=(n-n--)+1;//不要把判断条件放到表达式里 ！ 
//			if(a+b>c){	
//			printf("Case #%d:true\n",x);
//			}else{
//			printf("Case #%d:false\n",x);
//			}
//				
//		}
//		return 0;
//	}
//	
//			int main(){
//				int T,tcase =1;
//				scanf("%d",&T);//输入数据组数
//				while (T--) {//循环T次
//					long long a,b,c;
//					scanf("%lld%lld%lld",&a,&b,&c);
//					if(a +b >c){
//						printf ("Case #%d: true\n",tcase++); 
//					}else{
//						printf ("Case #%d: false\n",tcase++);
//					}
//				}
//				return 0;
//		}

//叁  部分A+B
//		int main(){
//			long long a,b,pa=0,pb=0;
//			int da,db;
//		//	printf("%lld %lld %lld %lld %d %d\n",a,b,pa,pb,da,db);
//			scanf("%lld%d%lld%d",&a,&da,&b,&db);
//			while(a!=0){
//				if(a%10==da) pa=pa*10+da;
//				a=a/10;
//			}
//			while(b!=0){
//				if(b%10==db) pb=pb*10+db;
//				b=b/10;
//			}
//			printf("%lld\n",pa+pb);
//			return 0;
//		} 

//肆   程序运行时间
//		int main(){
//			int c1,c2;
//			scanf("%d%d",&c1,&c2);
//			int ans=c2-c1;
//			if(ans%100>=50){
//				ans=ans/100+1;
//			}else{
//				ans=ans/100;
//			}
//			printf("%02d:%02d:%02d\n",ans/3600,ans%3600/60,ans%60);
//			return 0;
//		} 

// 伍 划拳
//		int main(){
//			int jj,jh,yj,yh,jstep=0,ystep=0;//甲叫，甲划，乙叫，乙划 
//			int n;
//			scanf("%d",&n);
//			while(n--){
//				scanf("%d%d%d%d",&jj,&jh,&yj,&yh);
//				if((jj+yj)==jh&&(jj+yj)!=yh)
//					ystep++;
//				if((jj+yj)==yh&&(jj+yj)!=jh)
//					jstep++;
//			}
//			printf("%d %d",jstep,ystep);
//			return 0;
//		} 

// 陆 数组元素循环右移
//		int main(){
//			int n,m,a[n],count=0;
//			scanf("%d%d",&n,&m);
//			m=m%n;//禁止思维定式，m不一定比n小 
//			for(int i=0;i<n;i++){
//				scanf("%d",&a[i]);
//			}
//			for(int i =n -m; i<n; i++){//输出n-m号到n-1号
//				printf ("%d", a[i]);
//				count++;//已输出数的个数加1
//				if(count < n) printf(" ");//如果已经输出数的个数小于n,则输出空格
//			} 
//			for(int i = 0;i<n-m; i++){//输出0号到n-m - 1号
//				printf("%d",a[i]);
//				count++;
//				if (count < n) printf(" ");
//			} 
//			return 0;
//		} 

// 柒  数字分类
//				int main(){
//					int N,a[1000],b[1000],a21=0,a22=0,a42=0,A1=0,A2=0,A3=0,A5=0,max=0;
//					float a41,A4;
//					scanf("%d",&N);
//					for(int i=0;i<N;i++){
//						scanf("%d",&a[i]);
//						if(a[i]%5==0&&a[i]%2==0)
//							A1++;
//						if(a[i]%5==1){
//							for(int j=0;j<N;j++){ 
//								b[j]=a[i];
//							}	
//							for(int k=1;k<(N/2+1);k+2){
//								a21+=b[k];
//							}
//							for(int k=0;k<(N/2);k+2){
//								a22+=b[k];
//							}
//							A2=a21-a22;
//						}
//						if(a[i]%5==2)
//							A3++;		
//						if(a[i]%5==3){
//							a41+=a[i]; 
//							a42++;
//							A4=a41/a42;
//						}
//						if(a[i]%5==4){
//							for(int j=0;j<N;j++){ 
//								b[j]=a[i];
//							}
//							for(int j=0;j<N;j++){ 
//							if(max<b[j])
//							max=b[j];
//							A5=max;
//							}
//						}
//				}
//				printf("%d %d %d %d %d",A1,A2,A3,A4,A5);
//				return 0;
//				} 
//	int main(){
//		int count[5]={0};//判断是否存在该类型 
//		int ans[5]={0};//对该类型值做运算
//		int n,temp;
//		 scanf("%d",&n);
//		 for(int i=0;i<n;i++){
//		 	scanf("%d",&temp);
//		 	if(temp%5==0){//A1 
//		 		if(temp%2==0){
//		 			ans[0]+=temp;
//		 			count[0]++;
//				}
//			}else if(temp%5==1){//A2
//			 	if(count[1]%2==0){
//			 		ans[1]+=temp;
//				}else{
//				 	ans[1]-=temp;
//				}
//				count[1]++;
//			 }else if(temp%5==2){//A3
//			// 	ans[2]++;
//			 	count[2]++;
//			}else if(temp%5==3){//A4
//				ans[3]+=temp;
//				count[3]++;
//			}else {//A5
//				if(ans[4]<temp){
//					ans[4]=temp;
//				}
//				count[4]++;
//			}
//		 }
//		if(count[0]==0) printf("N ");
//		else printf("%d ",ans[0]);
//		if(count[1]==0) printf("N ");
//		else printf("%d ",ans[1]);
//		if(count[2]==0) printf("N ");
//		else printf("%d ",count[2]);
//		if(count[3]==0) printf("N ");
//		else printf("%.1f ",(double)ans[3]/count[3]);
//		if(count[4]==0) printf("N");
//		else printf("%d",ans[4]);
//		return 0;
//	} 

//捌  剪刀包子锤 
//	
//		int change(char c){//把字符转为数字 
//			if(c=='B') return 0;
//			if(c=='C') return 1;
//			if(c=='J') return 2;
//		}
//		
//		int main(){
//			char mp[3]={'B','C','J'};//mp[0]=B;MP[1]=C;MP[2]=J
//			int n;
//			scanf("%d",&n);
//			int times_A[3]={0},times_B[3]={0}; //记录甲乙胜平负次数
//			int hand_A[3]={0},hand_B[3]={0};//记录各自手势胜负次数
//			char c1,c2;
//			int k1,k2;//甲乙字符转为数字 
//			for(int i=0;i<n;i++){
//				getchar();
//				scanf("%c %c",&c1,&c2);
//				k1=change(c1);
//				k2=change(c2);
//				if((k1+1)%3==k2){//甲赢 
//					times_A[0]++;
//					times_B[2]++;
//					hand_A[k1]++;//靠k1赢得次数 
//				}else if(k1==k2){//平 
//					times_A[1]++;
//					times_B[1]++;
//				}else{//乙赢 
//					times_A[2]++;
//					times_B[0]++;
//					hand_B[k2]++;//靠k2赢得次数 
//				}
//			}
//			printf("%d %d %d\n",times_A[0],times_A[1],times_A[2]);
//			printf("%d %d %d\n",times_B[0],times_B[1],times_B[2]);
//			int id1=0,id2=0;
//			for(int i=0;i<3;i++){//找出甲乙最多的手势
//				if(hand_A[i]>hand_A[id1]) id1=i;
//				if(hand_B[i]>hand_B[id2]) id2=i;
//			}
//			printf("%c %c\n",mp[id1],mp[id2]);//转回字符 
//			return 0;
//		} 


	////玖  Shuffling Machine
	//
	//	const int N = 54;
	//	char mp[5] = {'S','H','C','D','J'};//牌的花色与编号对应关系
	//	int start[N+1],end[N+1],next[N+1];//next数组存放每个位置上的牌在操作后的位置
	//	
	//	int main(){
	//		int k;
	//		scanf("%d",&k);
	//		for(int i=1;i<=N;i++){
	//			start[i]=i;//初始化牌号 
	//		}
	//		for(int i=1;i<=N;i++){
	//			scanf("%d",&next[i]);//输入每个位置的纸牌在操作后的位置 
	//		}
	//		for(int step=0;step<k;step++){//执行k次 
	//			for(int i=1;i<=N;i++){
	//				end[next[i]]=start[i];//把i个位置的牌编号存于位置next[i] 
	//			}
	//			for(int i=0;i<=N;i++){
	//				start[i]=end[i];//把end数组赋值给start数组以供下次操作使用 
	//			}
	//		}
	//		for(int i=1;i<=N;i++){
	//			if(i!=1) printf(" ");//控制输出格式
	//			start[i]--;
	//			printf("%c%d",mp[start[i]/13],start[i]%13+1);//输出结果 
	//		}
	//		return 0; 
	//	} 


//拾  多项式求导 

	int main(){
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(b==0) printf("0 0");
	    else printf("%d %d",a*b ,b-1);
	    while(scanf("%d%d",&a,&b)!=EOF&&b!=0)
	         printf(" a%d %d",a*b,b-1);
	    return 0;
	
	}
























 
