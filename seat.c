#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    
    char answer;
    int r,i,z,j,x,a[100],seat[8][8];

    printf("\n\n\n\n                  ***This is Seat arrangement of Section W**\n");
    printf("\n\n\n                    Are you from section W?\ntype( 'y' for yes and 'n' for no):");
    scanf("%c",&answer);
    if(answer=='y')
    {
    t1:
    printf("SEAT ARRANGEMENT IN THIS ROOM IS ONLY FROM REG NUMBER ( AP22110011440---->AP22110011499 )\n\n\n\n");
    printf("                          Enter your Registeration Number: AP22110011");
    
    scanf("%d",&r);
    z=r;
    for(i=2;i>=0;i--)
    {
        a[i]=r%10;
        r=r/10;
    }
    }
    else
   {
     printf("         Sorry!! there is no seat here for you");
     return 0;
   }
   if(a[2]>=0 && a[2]<=9 && a[1]>=4 && a[1]<=9 && a[0]==4)
    {
     printf("                                    Verified! wait a second for your seat confirmation!!\n\n\n");
     
     if(z==440)
     printf("               goto--->seat34\n\n");
     if(z==441)
     printf("               goto--->seat58\n\n");
     if(z==442)
     printf("               goto--->seat68\n\n");
     if(z==443)
    printf("                goto--->seat48\n\n");
    if(z==444)
    printf("                goto--->seat38\n\n");
    if(z==445)
    printf("                goto--->seat28\n\n");
    if(z==446)
   printf("                 goto--->seat18\n\n");
   if(z==447)
   printf("                 goto--->seat75\n\n");
   if(z==448)
   printf("                 goto--->seat73\n\n");
   if(z==449)
   printf("                 goto--->seat72\n\n");
   if(z==450)
   printf("                 goto--->seat65\n\n");
   if(z==451)
   printf("                 goto--->seat64\n\n");
   if(z==452)
   printf("                 goto--->seat63\n\n");
   if(z==453)
   printf("                 goto--->seat67\n\n");
   if(z==454)
   printf("                 goto--->seat57\n\n");
   if(z==455)
   printf("                 goto--->seat56\n\n");
   if(z==456)
   printf("                 goto--->seat55\n\n");
   if(z==457)
   printf("                 goto--->seat53\n\n");
   if(z==458)
   printf("                 goto--->seat52\n\n");
   if(z==459)
   printf("                 goto--->seat47\n\n");
   if(z==460)
   printf("                 goto--->seat46\n\n");
   if(z==461)
   printf("                 goto--->seat45\n\n");
   if(z==462)
   printf("                 goto--->seat43\n\n");
   if(z==463)
   printf("                 goto--->seat42\n\n");
   if(z==464)
   printf("                 goto--->seat37\n\n");
   if(z==465)
   printf("                 goto--->seat35\n\n");
   if(z==466)
   printf("                 goto--->seat36\n\n");
   if(z==467)
   printf("                 goto--->seat32\n\n");
   if(z==468)
   printf("                 goto--->seat24\n\n");
   if(z==469)
   printf("                 goto--->seat71\n\n");
   if(z==470)
   printf("                 goto--->seat61\n\n");
   if(z==471)
   printf("                 goto--->seat18\n\n");
   if(z==472)
   printf("                 goto--->seat51\n\n");
   if(z==473)
   printf("                 goto--->seat41\n\n");
   if(z==474)
   printf("                 goto--->seat31\n\n");
   if(z==475)
   printf("                 goto--->seat78\n\n");
   if(z==476)
   printf("                 goto--->seat87\n\n");
   if(z==477)
   printf("                 goto--->seat85\n\n");
   if(z==478)
   printf("                 goto--->seat82\n\n");
   if(z==479)
   printf("                 goto--->seat15\n\n");
   if(z==480)
   printf("                 goto--->seat16\n\n");
   if(z==481)
   printf("                 goto--->seat14\n\n");
   if(z==482)
   printf("                 goto--->seat26\n\n");
   if(z==483)
   printf("                 goto--->seat27\n\n");
   if(z==484)
   printf("                 goto--->seat25\n\n");
   if(z==485)
   printf("                 goto--->seat23\n\n");
   if(z==486)
   printf("                 goto--->seat21\n\n");
   if(z==487)
   printf("                 goto--->seat17\n\n");
   if(z==488)
   printf("                 goto--->seat12\n\n");
   if(z==489)
   printf("                 goto--->seat13\n\n");
   if(z==490)
   printf("                 goto--->seat11\n\n");
   if(z==491)
   printf("                 goto--->seat22\n\n");
   if(z==492)
   printf("                 goto--->seat76\n\n");
   if(z==493)
   printf("                 goto--->seat66\n\n");
   if(z==494)
   printf("                 goto--->seat44\n\n");
   if(z==495)
   printf("                 goto--->seat54\n\n");
   if(z==496)
   printf("                 goto--->seat62\n\n");
   if(z==497)
   printf("                 goto--->seat74\n\n");
   if(z==498)
   printf("                 goto--->seat77\n\n");
   if(z==499)
   printf("                 goto--->seat33\n\n");
     
  }
    else
    {
    goto t1;
    }
   printf("This is class S313,Please go and sit to your confirmed seat!!\n\n\n\n");
   for(x=0;x<8;x++)
   {
    for(j=0;j<8;j++)
    {
        printf("\tseat%d%d ",x+1,j+1);

    }
    printf("\n\n");
   }
   printf("\n\n                                           ***GOOD LUCK!***");
   
   getch();
}

