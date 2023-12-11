#include<stdio.h>
#include<string.h>

int gmail(char a[] ){
if(strcmp(a, "@gmail.com"))
return 0;
else
return 1;
}

void main()
{
   char email[50];
   printf("Enter the email:");
   scanf("%s",&email);

   int at ;

   for(int i=0 ; i<50 ; i++){
    if(email[i] == '@'){
    at=i;
    break;
    }
   }
   printf("%d\n",at);
char domain[10];
for(int j=at,k=0 ; k<11 ; j++,k++){
    domain[k]=email[j];
}
printf("%s\n",domain);
int result=0;
int ret = gmail(domain);
for(int i=0 ; i<=at-1 ; i++){
if(((email[i] >= 'A' && email[i] <='Z') || (email[i] >= 'a' && email[i] <='z') || (email[i] >= '0' && email[i] <='9') || (email[i] == '.' || email[i] == '_' || email[i] == '-')) && ret)
result=result+1;
else
result=0;
}

if(result)
printf("Valid Mail");
else
printf("Inavlid mail");
}