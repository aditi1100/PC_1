#include<stdio.h>
#include<stdlib.h>
#include<math.h> //while compiling include flag -lm to link to math.h library
double f( double g){
	g=g*g;
	return g;
}



void main(int argc, char* argv[]){

	double f(double gee);
	double integration=0;
	int a=atoi(argv[1]);	
	int b=atoi(argv[2]);

	int n=atoi(argv[3]);
	int intensity=atoi(argv[4]);
	

	for(int i=0;i<n;i++){
		integration= integration + f((double)(a+(i+0.5)*((b-a)/n)))/((b-a)/n);
	}
	
	double power_result=pow(integration,intensity);
	printf("\n%f result is ",sqrt(power_result));

}


