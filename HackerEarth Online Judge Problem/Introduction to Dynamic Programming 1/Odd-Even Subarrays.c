#include <stdio.h>
 
int main(){
 
    int n;
    scanf("%d",&n);
    long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    int pos[n+1],neg[n+1];
    for(int i=0;i<=n;i++)
    {
        pos[i]=0;
        neg[i]=0;
    }
    pos[0]=1;
    int diff=0; long int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i] & 1==1)
            diff++;
        else
            diff--;
        if(diff<0){
            ans+=neg[-diff];
            neg[-diff]++;
        }
        else{
            ans+=pos[diff];
            pos[diff]++;
        }
    }
    printf("%ld",ans);
}