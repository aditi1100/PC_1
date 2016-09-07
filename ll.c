//Name: Aditi Mishra
//UNCC ID: 800917773
//Program Name: ll.c

#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
typedef struct node {
	int number;
	struct node *next;
} Node, *NodePtr;

void printlist(NodePtr top)
{	while(top!=NULL)
	{
		printf("%d\n",top->number);
		top=top->next;
	}
}


int main (int argc, char *argv[])
{
    int n;
    struct timeval start, end;
    unsigned long long time_diff;
    NodePtr top,new;
    void add(int a);
	void printlist(NodePtr top);
	//printf("The number of args : %d", argc);
	int num_of_ints = atoi(argv[1]);
	int num_searches = atoi(argv[2]);
	//printf("\n%d", num_of_ints);
	while(num_of_ints != 0)
	{
		int temp = rand();
		//code for adding into linked list
        new = malloc(sizeof(Node));
        new -> number = temp;
        new -> next = top;
        top = new;
		num_of_ints --;
	}
	//printf("\nnumbers are ");
	//printlist(top);
    
    //code to search for num_searches random numbers
    printf("\nTime taken: ");
    
    while(num_searches != 0){
        
        int temp = rand();
        
        //printf("\nsearching for: %d",temp);
        NodePtr t;
        t = top;
        gettimeofday(&start,NULL);
        while(t!=NULL){
            
            if (t->number == temp){
                //printf("\nfound the number: %d", temp);
                break;
            }
            else{
                t=t->next;
            }
        }
        gettimeofday(&end,NULL);
        time_diff = ((end.tv_usec * 1000000 + end.tv_usec)
                     - (start.tv_usec * 1000000 + start.tv_usec));
        
        printf("\n %d\t\t%llu", temp,time_diff);
        num_searches--;
    }
}

