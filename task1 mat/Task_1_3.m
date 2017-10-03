%Fir implementation reference by values imported from Dsp C program.
%Here new insample is 1,2,3,4 ,updated state vector with indexes points  in state vector.
coeff=load('coeff.txt');
state=load('task1_3.txt');
y=filter(coeff,1,state);
fprintf('The filterd output is\t %f\n',y(end));