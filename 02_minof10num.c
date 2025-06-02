#include<stdio.h>
int main(){
    int n,i,a[10],min;
    printf("enter the number of element of array: ");
    
scanf("%d",&n);
printf("enter %d number:\n ",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<min){
        min=a[i];
    }
    
}
printf("%d",min);
return 0;
}
