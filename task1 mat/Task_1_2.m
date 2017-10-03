%Fir implementation reference by values imported from Dsp C program.
%Here new insample is '3' placed in last position in state vector and by circular shifting.
coeff=load('coeff.txt');
state=load('Task1_2.txt');
y=filter(coeff,1,state);
fprintf('The filtered output is\t %f\n',y(end));