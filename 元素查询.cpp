#include<cstdio>
#include<cstring>
//	
//	//壹 考试座位
//		const int maxn=1010; 
//		struct Student{
//			long long id;//考证 
//			int examSeat;//考试座位 
//		}testSeat[maxn];//以试机座位为下标记录考生 
//		
//		int main(){
//			int n,m,seat,examSeat;
//			long long id;
//			scanf("%d",&n);//考生人数
//			for(int i=0;i<n;i++){
//				scanf("%lld%d%d",&id,&seat,&examSeat);
//				testSeat[seat].id=id; 
//				testSeat[seat].examSeat = examSeat;//试机座位是seat的考生的考试号 
//				
//			}	
//			scanf("%d",&m);//查询个数
//			for(int i=0;i<m;i++){
//				scanf("%d",&seat);//就查询的试机座位号 直接找考生
//				printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examSeat);	 
//			}
//			return 0; 
//		} 

//// 贰 成绩排名 
//	struct Student{
//		char name[15],id[15];
//		int score;
//	}temp,ans_max,ans_min; 
//	//temp存放临时数据,ans_max存放成绩最高的学生,ans_min存放成绩最低的学生 
//
//	int main(){
//		int n;
//		scanf("%d",&n);
//		ans_max.score=-1;
//		ans_min.score=101;
//		for(int i=0;i<n;i++){
//			scanf("%s%s%d",&temp.name,&temp.id,&temp.score);
//			if(temp.score>ans_max.score) ans_max=temp;
//			if(temp.score<ans_min.score) ans_min=temp;
//		} 
//		printf("%s %s\n",ans_max.name,ans_max.id);
//		printf("%s %s\n",ans_min.name,ans_min.id);
//		return 0;
//	} 

//叁  人口普查

//	struct  person{
//		char name[10];
//		int yy,mm,dd;
//	}oldest,youngest,temp,left,right;
//	//oldest和youngest存放最年长和最年轻的人，left和right用来存放左右边界
//	
//	bool LessEqu(person a,person b){
//		//如果a的日期小于等于b返回true
//		if(a.yy!=b.yy) return a.yy<=b.yy;
//		else if(a.mm!=b.mm) return a.mm<=b.mm;
//		else return a.dd<=b.dd; 
//	} 
//	
//	bool MoreEqu(person a,person b){
//		//如果a的日期大于b的日期返回true
//		if(a.yy!=b.yy) return a.yy>=b.yy;
//		else if(a.mm!=b.mm) return a.mm>=b.mm;
//		else return a.dd>=b.dd; 
//	}
//	
//	void init(){
//		//初始化youngest oldest left right 的初始值
//		youngest.yy=left.yy=1814;
//		oldest.yy=right.yy=2014;
//		youngest.mm=oldest.mm=left.mm=right.mm=9;
//		youngest.dd=oldest.dd=left.dd=right.dd=6; 
//	}
//	
//	int main(){
//		init();
//		int n,num=0;
//		scanf("%d",&n);
//		for(int i=0;i<n;i++){
//			scanf("%s %d/%d/%d",temp.name,&temp.yy,&temp.mm,&temp.dd);
//			if(MoreEqu(temp,left)&&LessEqu(temp,right)){
//				//日期合法
//				num++;
//				if(LessEqu(temp,oldest)) oldest=temp;//更新odlest
//				if(MoreEqu(temp,youngest)) youngest=temp;//更新youngest 
//			}
//		}
//		if(num==0) printf("0\n");//所有人的日期都不合法
//		else printf("%d %s %s",num,oldest.name,youngest.name);
//	    return 0; 
//	}

//	int main(){
//	    int n;
//	    int year,month,day;
//	    int count = 0;  //有效年龄个数
//	    char name[6], max_name[6], min_name[6];
//	    long long maxAge = 20140907, minAge = 18140905; 
//	    scanf("%d",&n);
//	    for(int i = 0; i < n; i++){
//	        scanf("%s %d/%d/%d",&name,&year,&month,&day);
//	        //方便年龄比较 
//	        long long birth = year*10000+month*100+day; 
//	//printf("%lld\n",birth);
//	        //过滤不合理日期
//	        if(birth < 18140906 || birth > 20140906);
//	        else{ //得到最年长和最年轻的人
//	            count++;
//	            if(birth < maxAge){ //得到最年长 
//	            	strcpy(max_name,name);//字符串的赋值 
//	//max_name=name; 
//	                maxAge = birth; 
//	            }
//	            if(birth > minAge){ //得到最年轻 
//	                strcpy(min_name,name);
//	                minAge = birth;
//	            }       
//	        } 
//	    }
//	    if(count) printf("%d %s %s\n",count,max_name,min_name); 
//	    else printf("0\n");
//	    return 0;
//	}

//肆  挖掘机技术哪家强
	const int maxn=100010;
	int school[maxn]={0};
	int main(){
		int n,schID,score;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d%d",&schID,&score);
			school[schID]+=score;
		}
		int k=1,MAX=-1;
		for(int i=1;i<=n;i++){
			if(school[i]>MAX){
				MAX=school[i];
				k=i;
			}
		} 
		printf("%d %d\n",k,MAX);
		return 0;
	} 













