#include<stdio.h>
#include<conio.h>
void mergesort(int a[],int low,int mid,int high)
{
	 int i,j,k,t[20];
	 i=low;
	 j=mid+1;
	 k=low;
	 while(i<mid && j<=high)
	 {
	       if(a[i]>=a[j])
	       {
		  t[k++]=a[j++];
	       }
	       else
	       {
		   t[k++]=a[i++];
	       }
	 }
	 while(i<=mid)
	 {
	    t[k++]=a[i++];
	 }
	 while(j<=high)
	 {
	    t[k++]=a[j++];
	 }
	for(i=low;i<=high;i++)
	{
	    a[i]=t[i];
	}


}
void msortdiv(int a[],int low,int high)
{
      int mid;
      if(low!=high)
      {
	 mid=(low+high)/2;
	 msortdiv(a,low,mid);
	 msortdiv(a,mid+1,high);
	 mergesort(a,low,mid,high);
      }
}
int main()
{
   int a[20],i,n,low,high;
   printf("Enter array size");
   scanf("%d",&n);
   printf("\nEnter array's elements");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   low=0;
   high=n-1;
   msortdiv(a,low,high);
   printf("\nArray after merge sort");
   for(i=0;i<n;i++)
   {
     printf("\n%d",a[i]);
   }
    return 0;



}