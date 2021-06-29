#include<cstdio>
#include<cmath>
//“º°¢ ª“∂»÷±∑ΩÕº 
//int main(){
//	int a[500][500];
//	int n,m,l,i,j,sum,x,p;
//	scanf("%d%d%d",&n,&m,&l);
//	p=l;
//	int h[p]={0}; 
//	for(i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			scanf("%d",&a[i][j]);
//			h[a[i][j]]++;
//		}
//	}
////		for(x=l-1;x>=0;x--,l--){
////			for(i=0;i<n;i++){
////				for(j=0;j<m;j++){
////				if((l-1)==a[i][j])
////					h[x]++;
////					//printf("%d ",h[x]);
////				}		
////			}
////		} 
//	for(x=0;x<p;x++)
//	  printf("%d ",h[x]);
//	return 0;
//} 

//∑°°¢¡⁄”Ú„–÷µ 
const int N = 610;

int n, L, r, t;
int q[N][N];
int s[N][N];

int Neighbor(int a, int b, int r)
{
	double res = 0;
	int cnt = 0;
	double ans = 0.0;
//	for(int i = 1; i <= n; i ++)
//	{
//		for(int j = 1; j <= n; j ++)
//		{
//			if(abs(a - i) <= r && abs(b - j) <= r)
//			{
//				res += (double)q[i][j];
//				cnt ++;
//			}
//		}
//	}
	int uu = a - r, dd = a + r, ll = b - r, rr = b + r;
	if(uu <= 0) uu = 1;
	if(dd >= n) dd = n;
	if(ll <= 0) ll = 1;
	if(rr >= n) rr = n;
	res = s[dd][rr] - s[dd][ll - 1] - s[uu - 1][rr] + s[uu - 1][ll - 1];
	cnt = (abs(ll - rr) + 1) * (abs(dd - uu) + 1);
	ans = (res / cnt);
	if(ans <= t)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int ans = 0;
	scanf("%d%d%d%d", &n, &L, &r, &t);
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= n; j ++)
		{
			scanf("%d", &q[i][j]);
			s[i][j] = q[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
		}
	}
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= n; j ++)
		{
			ans += Neighbor(i, j, r);
		}
	}
	printf("%d",ans);
	return 0;
}
