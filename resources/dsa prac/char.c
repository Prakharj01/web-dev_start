#include<stdio.h>

int main(){
char s[20];

scanf("%[^\n]s",s);
printf("You entered %s",s);  

char *p;
p=s;
printf("%s",p);

 char t[11] = "javatpoint";  
    char *q = t; // pointer p is pointing to string s.   
    printf("%s",t); // the string javatpoint is printed if we print p.  


    return 0;
}