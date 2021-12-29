#include<stdio.h>
int main()
{ 
int telugu,hindi,english,math,science,total,average,percent;
printf(" /n enter telugu marks: ");
scanf("%d",&telugu);
printf(" /n enter hindi marks: ");
scanf("%d",&hindi);
printf(" /n enter english marks: ");
scanf("%d",&english);
printf(" /n enter math marks: ");
scanf("%d",&math);
printf("/n enter science marks: ");
scanf("%d",&science);
total=telugu+hindi+english+math+science;
printf("/n total=%d",total);
average= telugu+hindi+english+math+science/5;
printf("/n average=%d",average);
percent=(total/150)*100;
printf("/n percentage=%d",percent);
}
