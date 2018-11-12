




#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main() {
	
	int n,m,**A,N,M,s=0,s1,s2,s3=0;
	A=(int**)calloc(N,sizeof(int*));
	 printf("Enter N and M");
	 scanf("%d%d",&N,&M);
	for(n=0;n<N;n++){
	   *(A+n)=(int*)calloc(M,sizeof(int));
	  for(m=0;m<M;m++){
	  	printf("A[%d][%d]=",n,m);
	    scanf("%d",&*(*(A+n)+m));}} 
	
	for(n=0;n<N;n++){
	
	  for(m=0;m<M;m++){
	   n=m;
	   
	   s+=*(*(A+n)+m);}}
	   printf("s=%5.d\n",s);
	   
	  for(n=0;n<N;n++){
	     s1=0;
	   for(m=0;m<M;m++)
	   
	   
	   s1+=*(*(A+n)+m);
	   printf("s1=%5.d\n",s1); }
	   
	   for(m=0;m<M;m++){
	     s2=0;
	   for(n=0;n<N;n++)
	   
	   
	   s2+=*(*(A+n)+m);
	   printf("s2=%5.d\n",s2); }
	    for(n=0;n<N;n++){
		
	        
	       
			
	        s3+=A[n][M-1-n];}
			printf("s3=%5.d\n",s3);	
	   if(N==M&&s==s1&&s1==s2&&s2==s3){
	   
	    printf("\nMatritsa - magicheski kwadrat");}
	    else{ printf("\nNe magicheski kwadrat ");
		}
	    
	   
	   for(n=0;n<N;n++) free(A[n]); 
	   free(A);
	   
	   
	      	
	return 0;
}

