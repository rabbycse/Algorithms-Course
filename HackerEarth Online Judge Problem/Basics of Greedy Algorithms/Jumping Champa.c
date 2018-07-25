int main()
{
	int i,t,q,n;
	long max,min;
	long long h[1001],ans;
   	scanf("%d",&t);
   	while(t--){
   		max=0;min=400000000;
   		scanf("%d %d",&n,&q);
   		for(i=0;i<n;i++){
   			scanf("%lld",&h[i]);
   			if(h[i]>max){
   				max=h[i];
   			}
   			if(h[i]<min){
   				min=h[i];
   			}
   		}
   		ans=(max-min)*q;
   		printf("%lld\n",ans);
   	}
    return 0;
}