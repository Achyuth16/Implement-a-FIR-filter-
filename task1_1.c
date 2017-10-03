//TASK1-1
#include<stdio.h>
#include<vector.h>
#include<stdlib.h>

float myFIR(float insample,float *state,const float *coeff,const int *length)

{

	float vec=0,vec1[16],y[16];
	int i,k,l,kk=0,kk1=0,kk2=15;
	
	for (i=0;i<16;i++)
	{
		state[i]=state[i+1]; 

	}
	state[15]=insample; 
	while(kk<16)
	{
		vec1[kk1]=(coeff[kk1]*state[kk2]); 
		kk1++;
		kk2--;
		kk++;		
	}
	for(k=0;k<16;k++)
	{
       printf(" The filter output is %f \n ",vec1[k]);
       vec=vec+vec1[k];       
	}

	printf("The  solution is %f \n ",vec);

}
main()
{
	const int length=16;
	const float coeff[16]={9.169500,2.414431,-0.989030,-0.989030,1.029552,-0.127435,-0.103945 ,2.601139,2.865498,-0.659966,4.947494,0.520257 ,0.076193 ,0.479921,-0.290526 ,-0.174857 };
	float state[16]={1.4897,1.4090,1.4172,0.6715,-1.2075,0.7172,1.6302,0.4889,1.0347,0.7269,-0.3034,0.2939,-0.7873,0.8884,-1.1471,-1.0689};
	float insample=5;
	myFIR(insample ,state,coeff,length);
}


