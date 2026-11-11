 #include<stdio.h>
 int main()
 {
     char first[20],last[20],full[50];
     int i=0,j=0,length=0;
     int screen_limit=20;
     printf("Emter first name");
     scanf("%s",first);
     printf("Emter last name");
     scanf("%s",last);
     while(first[i]!='\0')
     {
         full[j]=first[i];
         i++;
         j++;
     }
     full[j]=' s';
     j++;
     i=0;
     while(last[i]!='\0')
     {
      full[j]=last[i];
      i++;
      j++;
      full[j]='\0';
      i=0;
      while(full[i]!='\0')
     {
         length++;
         i++;
     }
     printf("\nFull Name:%s",full);
     printf("\nLength of Full Name:%d",length);
     if(length<=screen_limit)
     printf("\nStatus:Name fits on the screen");
     else
     printf("\nStatus:Name does NOT fits on the screen");
     return 0;
     }
 }



