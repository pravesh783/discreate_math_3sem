 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int set1[10],set2[10],size1,size2,i,flag=0,result[10],count=0,k=0,search,j,t,search2,m=0,result2[10];
 int result3[10],s,o=0,search3;
 clrscr();
 printf("Enter the size of set 1:");
 scanf("%d",&size1);
 printf("\n Enter the size of set 2:");
 scanf("%d",&size2);
 printf("\nEnter the elements of set 1:");
 for(i=0;i<size1;i++)
 {
  scanf("%d",&set1[i]);
    }
  printf("\n Enter the elements of set 2:");
  for(i=0;i<size2;i++)
  {
  scanf("%d",&set2[i]);
  }
//difference between set1-set2

 for(i=0;i<size1;i++)
 { search=set1[i];
 for(j=0;j<size2;j++)
{
if(search==set2[j])
{
flag=1;
break;
}
else
{
flag=0;
}
}
if(flag==0)
{
result[k]=search;
k++;
flag=0;
}
count=k;
 }
 printf("difference of two sets A-B\n");
 for(i=0;i<count;i++)
 {
printf("%d  ",result[i]);
 }
 //difference of set2-set1
 for(i=0;i<size2;i++)
 { search2=set2[i];
 for(j=0;j<size1;j++)
{
if(search2==set1[j])
{
flag=1;
break;
}
else
{
flag=0;
}
}
if(flag==0)
{
result2[m]=search2;
m++;
flag=0;
}
t=m;
 }
 printf("\ndifference of two sets B-A \n");
 for(i=0;i<t;i++)
 {
 printf("%d  ",result2[i]);
  }
 //union of result and result2
 for(i=0;i<count;i++)
 {
 result3[o]=result[i];
 o++;
 }
 for(i=0;i<t;i++)
 { search3=result2[i];
 flag=0;
 for(j=0;j<count;j++)
 {
   if(search3==result3[j])
   {
   flag=1;
   break;
   }
   else
   {
   flag=0;
   break;
   }
   }
   if(flag==0)
   {
   result3[o]=search3;
   o++;
   }
s=o;
   }
   //print result of union
   printf("\n union of set1 and set2 \n");
   for(i=0;i<s;i++)
   {
   printf("%d ",result3[i]);
   }
   getch();
   }
