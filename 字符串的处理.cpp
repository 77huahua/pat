#include<cstdio>
#include<cstring>
//Ҽ ������ʽ�������
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

////�� ��λ��ͳ��
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

////�� ������֤��Ϣ
//	//Ȩ�� ,w[0]=7,w[1]=9...
//	int w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//	//У���� ,change[0]='1',change[1]='0'...
//	char change[15]={'1','0','X','9','8','7','6','5','4','3','2'};
//	int main(){
//		int n;
//		scanf("%d",&n);
//		bool flag=true;//��¼�Ƿ����е����֤����ȷ��������ȷ����flag=true
//		char str[20];
//		for(int i=0;i<n;i++){
//			scanf("%s",str);
//			int j,last=0;//last��¼ǰ17λ�ļ�Ȩ��
//			for(j=0;j<17;j++){
//				if(!(str[j]>='0'&&str[j]<='9')) break;
//				last=last+(str[j]-'0')*w[j];
//			} 
//			if(j<17){//�з����ֵĴ���
//				flag=false;//�������֤����
//				printf("%s\n",str); 
//			}else{
//				if(change[last%11]!=str[17]){ //У���벻�������֤�����һλ
//				 flag=false;//�������֤�������
//				 printf("%s\n",str); 
//				}
//			}
//		} 
//		if(flag==true){
//			printf("All passed\n");
//		}
//		return 0;
//	} 

//��  д�������
	int main(){
		char str[110];
		scanf("%s",&str);
		int len=strlen(str);
		int sum=0;//sum�������λ��֮��
		for(int i=0;i<len;i++){
			sum+=str[i]-'0';//��ÿһλ�ۼ� 
		} 
		int num=0,ans[10];//num��ʾsum��λ��
		while(sum){
			//��sumÿһλ�浽�����У� sum�ĵ�λ�浽ans[]�ĵ�λ
			ans[num]=sum%10;
			num++;
			sum/=10;
		} 
//		char change[12]={'1','0','X','9','8','7','6','5','4','3','2'};�� 
		char change[11][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"}; 
//		char change[11]={'ling','yi','er','san','si','wu','liu','qi','ba','jiu'};��
//		char change[11]={"q","w","s","a","d","c","v","g","b","n"};�� 
//		char change[10][2]={"q","w","s","a","d","c","v","g","b","n"};�� 
//		char change[11]={'q','w','s','a','d','c','v','g','b','n'};�� 
		for(int i=num-1;i>=0;i--){//�Ӹ�λ��ʼ���
			printf("%s",change[ans[i]]);//ans[i]Ϊ�Ӹ�λ��ʼ�ĵ�i������
			if(i!=0) printf(" "); 
		}
		return 0;
	} 

















 


