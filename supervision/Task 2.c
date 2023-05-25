#include<stdio.h>
//2. C program to read a file and display its contents.
int  main(){
	FILE * p;
	char ch[50];
	p=fopen ("Demo.txt","r");
	
	if(p==NULL){
		printf("Error");
	}
	else{
	fgets(ch,50,p);
	printf("%s",ch);
	fclose(p);
	}
	
	return 0;
}
