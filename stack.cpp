#include <stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value){
	if(top==size-1){
		printf("stack overflow:");
	}else{
		stack[++top]=value;
		printf("%d pushed into stack.\n",value);
	}
}
void pop(){
	if(top==-1){
		printf("stack is empty:");
	}else{
		printf("%d pop from stack:\n",stack[top--]);
	}
}
void peek(){
	if(top==-1){
		printf("stack is empty:\n");
	}else{
		printf("%d is removed from stack:\n",stack[top]);
	}
}
void dispaly(){
	if(top==size-1){
		printf("stack overflow:");
	}else{
		printf("stack elements:\n");
		for(int i=0; i<=top;i++){
			printf("%d",stack[i]);
		}
		printf("\n");
	}
} 
  int main(){
  	int chioce,value;
  	while(1)
  	printf("stack menu\n");
  	printf("1.push\n2.pop\n3.peak\n4.display\n5.exit\n");
	  scanf("%d",&chioce);
	  switch(chioce){
	  	case1:
	  		printf("enter value to push:");
	  		scanf("%d",&value);
	  		push(value);
	  		break;
	  		case2:
	  		pop();
	  		break;
	  		case3:
	  			peek();
	  			break;
	  			case4:
	  				dispaly();
	  				break;
	  				case5:
	  					return 0;
	  					default:
	  					printf("invalid chioce\n:");
	  }
  }
