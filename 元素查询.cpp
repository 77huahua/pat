#include<cstdio>
#include<cstring>
//	
//	//Ҽ ������λ
//		const int maxn=1010; 
//		struct Student{
//			long long id;//��֤ 
//			int examSeat;//������λ 
//		}testSeat[maxn];//���Ի���λΪ�±��¼���� 
//		
//		int main(){
//			int n,m,seat,examSeat;
//			long long id;
//			scanf("%d",&n);//��������
//			for(int i=0;i<n;i++){
//				scanf("%lld%d%d",&id,&seat,&examSeat);
//				testSeat[seat].id=id; 
//				testSeat[seat].examSeat = examSeat;//�Ի���λ��seat�Ŀ����Ŀ��Ժ� 
//				
//			}	
//			scanf("%d",&m);//��ѯ����
//			for(int i=0;i<m;i++){
//				scanf("%d",&seat);//�Ͳ�ѯ���Ի���λ�� ֱ���ҿ���
//				printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examSeat);	 
//			}
//			return 0; 
//		} 

//// �� �ɼ����� 
//	struct Student{
//		char name[15],id[15];
//		int score;
//	}temp,ans_max,ans_min; 
//	//temp�����ʱ����,ans_max��ųɼ���ߵ�ѧ��,ans_min��ųɼ���͵�ѧ�� 
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

//��  �˿��ղ�

//	struct  person{
//		char name[10];
//		int yy,mm,dd;
//	}oldest,youngest,temp,left,right;
//	//oldest��youngest������곤����������ˣ�left��right����������ұ߽�
//	
//	bool LessEqu(person a,person b){
//		//���a������С�ڵ���b����true
//		if(a.yy!=b.yy) return a.yy<=b.yy;
//		else if(a.mm!=b.mm) return a.mm<=b.mm;
//		else return a.dd<=b.dd; 
//	} 
//	
//	bool MoreEqu(person a,person b){
//		//���a�����ڴ���b�����ڷ���true
//		if(a.yy!=b.yy) return a.yy>=b.yy;
//		else if(a.mm!=b.mm) return a.mm>=b.mm;
//		else return a.dd>=b.dd; 
//	}
//	
//	void init(){
//		//��ʼ��youngest oldest left right �ĳ�ʼֵ
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
//				//���ںϷ�
//				num++;
//				if(LessEqu(temp,oldest)) oldest=temp;//����odlest
//				if(MoreEqu(temp,youngest)) youngest=temp;//����youngest 
//			}
//		}
//		if(num==0) printf("0\n");//�����˵����ڶ����Ϸ�
//		else printf("%d %s %s",num,oldest.name,youngest.name);
//	    return 0; 
//	}

//	int main(){
//	    int n;
//	    int year,month,day;
//	    int count = 0;  //��Ч�������
//	    char name[6], max_name[6], min_name[6];
//	    long long maxAge = 20140907, minAge = 18140905; 
//	    scanf("%d",&n);
//	    for(int i = 0; i < n; i++){
//	        scanf("%s %d/%d/%d",&name,&year,&month,&day);
//	        //��������Ƚ� 
//	        long long birth = year*10000+month*100+day; 
//	//printf("%lld\n",birth);
//	        //���˲���������
//	        if(birth < 18140906 || birth > 20140906);
//	        else{ //�õ����곤�����������
//	            count++;
//	            if(birth < maxAge){ //�õ����곤 
//	            	strcpy(max_name,name);//�ַ����ĸ�ֵ 
//	//max_name=name; 
//	                maxAge = birth; 
//	            }
//	            if(birth > minAge){ //�õ������� 
//	                strcpy(min_name,name);
//	                minAge = birth;
//	            }       
//	        } 
//	    }
//	    if(count) printf("%d %s %s\n",count,max_name,min_name); 
//	    else printf("0\n");
//	    return 0;
//	}

//��  �ھ�������ļ�ǿ
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













