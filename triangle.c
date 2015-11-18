#include <stdio.h>
#define ROW 5
#define COLUMN 5

void triangle1(void);
void triangle2(void);
void triangle3(void);
void triangle4(void);

int main(void){
	triangle1();
	printf("\n");
	triangle2();
	printf("\n");
	triangle3();
	printf("\n");
	triangle4();
	return 0;
}

void triangle1(void){
	int i,j;
	for(i=1;i<=ROW;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
	printf("\n");
	}
}

void triangle2(void){
	int i,j;
    for(i=1;i<=ROW;i++){
    	for(j=5-i;j>0;j--){
        	printf(" ");
        }
        for(j=1;j<=i;j++){
             printf("%d",i);
        }
        printf("\n");
 	}
}
 
void triangle3(void){
	int i,j;
	for(i=1;i<=ROW;i++){
		for(j=5;j>=i;j--){
  	      printf("%d",i);
    	}
    	printf("\n");
 	}
}

void triangle4(void){
	int i,j;
    for(i=1;i<=ROW;i++){
    	for(j=1;j<i;j++){
             printf(" ");
        }
        for(j=5;j>=i;j--){
             printf("%d",i);
        }
        printf("\n");
      }
}


