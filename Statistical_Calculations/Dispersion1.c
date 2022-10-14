/* Author: Akash Sinha */

#include <stdio.h>
#include <math.h>

int main(){
	int arr[100],b,i,d,e,z[100],c,max,min,mean,mdm,median,mdmn,v,sd;
	
	c=0;
	b=0;
	while(c==0){
		printf("Enter the element: ");
		scanf("%d",&arr[b]);
		b++;
		printf("Wanna enter more? then press 0 else 1: ");
		scanf("%d",&c);
	}
	
	/* Range calculation */
	min=max=arr[0];
	for(i=0;i<b;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		
		if(min>arr[i]){
			min=arr[i];
		}
	}
	
	/* Mean deviation about mean */
	c=0;
	for(i=0;i<b;i++){
		c=c+arr[i];
	}
	mean=c/b;
	for(i=0;i<b;i++){
		z[i]=arr[i]-mean;
	}
	for(i=0;i<b;i++){
		if(z[i]<0){
			z[i]=z[i]*-1;
		}
	}
	c=0;
	for(i=0;i<b;i++){
		c=c+(z[i]);
	}
	mdm=c/b;
	for(i=0;i<100;i++){
		z[i]=0;
	}
	
	
	//Calculating the Mean Deviation about Median
	for(c=0;c<b-1;c++){
		for(d=0;d<b-c-1;d++){
			if(arr[d]>arr[d+1]){
				e=arr[d];
				arr[d]=arr[d+1];
				arr[d+1]=e;
			}
		}
	}
	if(b%2==0){
		c=b/2;
		d=arr[c]+arr[c+1];
		median=d/2;
	}else{
		c=(b+1)/2;
		median=arr[c-1];
	}
	for(i=0;i<b;i++){
		z[i]=arr[i]-median;
	}
	for(i=0;i<b;i++){
		if(z[i]<0){
			z[i]=z[i]*-1;
		}
	}
	c=0;
	for(i=0;i<b;i++){
		c=c+(z[i]);
	}
	mdmn=c/b;
	for(i=0;i<100;i++){
		z[i]=0;
	}
	
	/* Standard Deviation */
	d=0;
	for(i=0;i<b;i++){
		d=d+((arr[i]-mean)*(arr[i]-mean));
	}
	v=d/b;
	sd=sqrt(v);
	
	printf("%d\t%d\n",mean,median);
	printf("The range is %d.\n",max-min);
	printf("Mean deviation from mean is %d.\n",mdm);
	printf("Mean deviation from median is %d.\n",mdmn);
	printf("Standard deviation is %d.",sd);
	return 0;
}