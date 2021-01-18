#include<stdio.h>
int n;
int binarySearch(int l,int r,int k,int arr[]){
  while(r-l>1){
    int m=l+(r-l)/2;
    if(k>arr[m])
      l=m;
    else
      r=m;
  }
  if (l>k)
    return l;
  else
    return r;
}
int lis(int v[],int arr[]){
  int l=0;
  arr[0]=v[0];

  for(int i=1;i<n;i++){
    if(v[i]<arr[0])
      arr[0]=v[i];

    else if (v[i]>arr[l]){
      l++;
      arr[l]=v[i];
    }

    else{
      arr[binarySearch(0,l,v[i],arr)]=v[i];
    }
  }
  return l+1;

  }

int main(){
  scanf("%d",&n);
  int v[n],u[n],arr[n+1];
  for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
    u[n-i-1]=v[i];
  }
  int a=n-lis(u,arr);
  int b=n-lis(v,arr);
  if(a<b)
    printf("%d",a);
  else
    printf("%d",b);
  return 0;
}
