#include<stdio.h>
#include<string.h>


int gmail(char a[] ){
    
if(strcmp(a, "@gmail.com") == 0)
return 1;
else
return 0;
}

int username(char b[]){
    for(int i=0 ; i<=20;i++){
    if(((b[i] >= 'A' && b[i] <='Z') || (b[i] >= 'a' && b[i] <='z') || (b[i] >= '0' && b[i] <='9') || (b[i] == '.' || b[i] == '_' || b[i] == '-')))
    return 1;
    else
    return 0;
    }

}

void main()
{
    char email[50];
   printf("Enter the email:");
   scanf("%s",&email);
int at=0;
   for(int i=0 ; i<50 ; i++){
    if(email[i] == '@'){
    at=i;
    break;
    }
   }

   char domain[10];
   char Username[20];

   int r1 = gmail(domain);
   int r2 = username(Username);

   if(r1)
   printf("Valid email");
   else
   printf("Invalid email");
}