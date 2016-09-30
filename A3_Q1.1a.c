#include<stdio.h>
#include<stdlib.h>

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
	
	for(int i=0;i<n;i++){
		integration= integration + f((double)(a+(i+0.5)*((b-a)/n)))/((b-a)/n);
	}
	printf("\n%f result is ",integration);

}






