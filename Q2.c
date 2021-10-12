#include <stdio.h>

int main()
{
 
  char mailid[30];
  int i , p1, p2 ;
  p1=p2=0;
  
  scanf("%s", mailid);
  
  for(int i=0; mailid[i]!='\0'; i++)
  {
      if(mailid[i]=='@')
      p1=i;
      if(mailid[i]='.')
      p2=i;
      
     
  }
   if(p1>3 && (p2-p1)>3)
   printf("Valid Id");
   else
   printf("Not valid id");

    return 0;
}