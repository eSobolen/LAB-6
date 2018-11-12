#include<stdio.h>
#include<malloc.h>
main(){
	float **a,sum=0,xxx=1,min,max;
	int i,k,I,K;
	a=(float**)calloc(I,sizeof(float*));
	printf("Enter I and K=");
	scanf("%d%d",&I,&K);
		printf("Enter matric");
	for(i=0;i<I;i++){
		*(a+i)=(float*)calloc(K,sizeof(float));
		  for(k=0;k<K;k++){
		  	printf("A[%d][%d]=",i,k);
		  	scanf("%f",&*(*(a+i)+k));
	}}
		for(i=0;i<I;i++){
		
		  for(k=0;k<K;k++){
		   if(*(*(a+i)+k)<0){
		   	sum+=*(*(a+i)+k);
		   }
	}}
	printf("\nsum=%f\n",sum);
	min=*(*(a+0)+0);
	for(i=0;i<I;i++){
		
		  for(k=0;k<K;k++){
		   if(*(*(a+i)+k)<min)
		   min=*(*(a+i)+k);
		   }
	}
	printf("\nmin=%f\n",min);
	max=*(*(a+0)+0);
	for(i=0;i<I;i++){
		
		  for(k=0;k<K;k++){
		   if(*(*(a+i)+k)>max)
		   max=*(*(a+i)+k);
		   }
	}
		printf("\nmax=%f\n",max);

	
	
	
	
	
	
	
	
	for(i=0;i<I;i++) free(a[i]);
	free(a);
	
	
}
	
	
	
	
	
	
	
		

