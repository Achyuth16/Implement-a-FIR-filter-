//TASK1-3
#include<stdio.h>

#include<stdlib.h>


void myFIR(float * outsamples, float * insamples, const int numsamples, float * state, int * index,const float * coeff, const int length)

{
    //const float coeff[16]={1.8339,-2.2588,0.8622,0.3188,-1.3077,-0.4336,0.3426,3.5784,2.7694,-1.3499,3.0349,0.7254,-0.0631,0.7147,-0.2050,-0.1241};
    //float coeff[16]={16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    //float state[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    //float state[16]={1.4897,1.4090,1.4172,0.6715,-1.2075,0.7172,1.6302,0.4889,1.0347,0.7269,-0.3034,0.2939,-0.7873,0.8884,-1.1471,-1.0689};
	//const int length=16;
	//float outsamples[4];
	//int index[4]={5,6,8,9};
	//const int numsamples=4;
	//float insamples[4]={1,2,3,4};

	float vec=0,vec1[16],y[16],store;
	int a,cnt=1,i,k,m,kk=0,kk1=0,kk2=15,i1; 
        
        for(m=0;m<numsamples;m++)
        { 
            printf("%d--------------------------%d\n",m,m);
           store=state[0];
              
                 
                  for (i=0;i<length;i++)
	           {

                    state[i]=state[i+1];
                     state[15]=store;
                     state[15]=3;
                    
                    printf("%d %f\n",i,state[i]);
                   
                    y[i]=coeff[i]*state[length-i-1];
                    vec=vec+y[i];
                    outsamples[m]=vec;
                    
                    

	            }

        }

        printf("---------------------------------------\n");
        for(i=0;i<16;i++)
        {
         
            printf("%d. The filter  %f\n",i,state[i]);
        }
        printf("---------------------------------------\n");
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
	int index[4]={15};
	const int numsamples=4;
	float insamples[1]={1,2,3,4};
	
	myFIR(outsamples,insamples,numsamples,state,index,coeff,length);

}

