#include <stdio.h>

int main() {
    int N,k=0,g;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<=N;j++){
            if(arr[i]==arr[j] && i!=j){
                break;
                g=0;
            }else if(j==N){
                k+=arr[i];
                g=1;
            }
        }
    }
    if(g==0){
        printf("-1");
    }
    else{
        printf("%d",k);
    }
}
