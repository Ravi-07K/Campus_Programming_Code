 #include<stdio.h>
 int main()
 {
     int arr[100],i,sum=0,n,count=0;
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
         scanf("%d",&arr[i]);
     }
     while(sum<arr[i-1])
     {
        count+=1;
        sum+=count;
     }
     printf("%d",count);
     return 0;
 }
