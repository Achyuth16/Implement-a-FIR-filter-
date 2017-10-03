//TASK1-2

#include<stdio.h>

#include<stdlib.h>


void myFIR(float * outsamples, float * insamples, const int numsamples, float * state, int * index,const float * coeff, const int length)

{
    
	float vec=0,vec1[16],y[16],store;
	int a,cnt=1,i,k,m,kk=0,kk1=0,kk2=15,i1; 
        
        for(m=0;m<numsamples;m++)
        { 
            store=state[0];

                  for (i=0;i<length;i++)
	           {
	           	
                    state[i]=state[i+1];
  
	            }
                  state[15]=store;
                  for(k=0;k<length;k++)
                  {
                     state[index[m]]=insamples[m];
                    printf(" %f\n",state[k]);
                   
                   y[k]=coeff[k]*state[length-k-1];
                    vec=vec+y[k];
                    outsamples[m]=vec; 
                  }
        } 

       
        for(i=0;i<numsamples;i++)
        {
         
            printf("%d. The outsamples  %f\n",i,outsamples[i]);
        }
}

	
int main(void)
{
const float coeff[16]={1.8339,-2.2588,0.8622,0.3188,-1.3077,-0.4336,0.3426,3.5784,2.7694,-1.3499,3.0349,0.7254,-0.0631,0.7147,-0.2050,-0.1241};
	float state[16]={1.4897,1.4090,1.4172,0.6715,-1.2075,0.7172,1.6302,0.4889,1.0347,0.7269,-0.3034,0.2939,-0.7873,0.8884,-1.1471,-1.0689};
	const int length=16;
	float outsamples[16];
	int index[4]={5,6,7,8};
	const int numsamples=3;
	float insamples[4]={1,2,3};
	
	myFIR(outsamples,insamples,numsamples,state,index,coeff,length);

}

