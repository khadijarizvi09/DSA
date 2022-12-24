
#include<stdio.h>
#include<stdlib.h>
#define stacksize 20
#define true 1
#define false 0
struct stack{
	int item[stacksize];
	int TOP;
};


void initialize(struct stack* s){
	s->TOP=-1;
}

int Isempty(struct stack* s){
	if(s->TOP==-1){
		return true;
	}
	else{
		return false;
	}
}

void push(struct stack *s,int x){
	if(s->TOP==stacksize-1){
		printf("STACK OVERFLOW");
		exit(1);
	}
	else{
		s->TOP=s->TOP+1;
		s->item[s->TOP]=x;
	}
}

int pop(struct stack* s){
	if(Isempty (s)){
		printf("STACK UNDERFLOW");
		exit(1);
	}
	else{
		int x=s->item[s->TOP];
		s->TOP=s->TOP-1;
		return x;
	}
}

int stack_top(struct stack *s){
	int x=s->item[s->TOP];
	return x;
}
int main(){
    struct stack fs,ss;
    initialize(&fs);
	initialize(&ss);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
        int a;
		scanf("%d",&a);
		push(&fs,a);
	}
	int min=pop(&fs);
	push(&ss,min);
	for(int i=0;i<n-1;i++){
		int x=pop(&fs);
        if(min>x){
            min=x;
		}
		push(&ss,x);
	}
	printf("%d\n",min);
	
	int max=pop(&ss);
	for(int i=0;i<n-1;i++){
		int x=pop(&ss);
        if(max<x){
            max=x;
		}
		push(&fs,x);
	}
    printf("%d\n",max);
    return 0;
}