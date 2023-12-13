#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
// int calsum(int x,int y,int z);
// struct details{
//     int h_n;
//     int block;
//     char city[100];
//     char state[100];
    
// }d[5];
// void printinfo(d s3);
int main()
{
   int i,x;
   printf("Enter  x :");
   scanf("%d",&x);
   int a=0;
   int b=1;
   int c=0;
   for(i=1;i<=x;i++)
  {   printf("%d",c);
    a=b;
    b=c;
    c=a+b;
  }
   // float q,p,exp;
// printf("Enter price");
// scanf_s("%f",&p);
// printf("Enter quantity:");
// scanf("%f",&q);
// if(q>1000)
// {
//     exp=q*(p-(p*0.1));
//     printf("The amount to be paid is %f",exp);
// float *ptr;
// int i;
//  ptr=(float*) malloc(5*sizeof(float));
//  ptr[0]=1;
//  ptr[1]=2;
//  ptr[3]=4;
// ptr[2]=3;;
// ptr[4]=5;
// for(i=0;i<5;i++){
//     printf("%f\t",ptr[i]);
// }
// free(ptr);
// ptr=(int*)calloc(2,sizeof(int));
// for(i=0;i<2;i++)
// {
//     printf("%d\n",ptr[i]);
// }

// }
// else
// printf("loser");

//  d s3={"Chirag",3,89.7};
//  printinfo(s3);
//  printf("%d",s3.roll);
// struct details s1;
// s1.roll = 1;
// s1.percentile=99.2;
// strcpy(s1.name,"Himanshi");
// struct details s2={"krishan",2,98.5};

 // printf("student name = %s\n",s2.name);
 // printf("student roll no.=%d\t",s2.roll);
 // printf("Student percentile= %f",s2.percentile);

// struct details *ptr;
// ptr=&s2;
// printf("%s",ptr->name);
// printf("%d",ptr->roll);
// printf("%f",ptr->percentile);

// int i;
// printf("Enter details:\n");
// for(i=0;i<5;i++)
// {
//     printf("Enter house number:\n");
//     scanf("%d",&d[i].h_n);
//     printf("Enter block:\n");
//     scanf("%d",&d[i].block);
//     printf("Enter city:\n");
//     scanf("%s",&d[i].city);
//     printf("Enter state:\n");
//     scanf("%s",&d[i].state);

// }
// for(i=0;i<5;i++)
// {
//     printf("%d\n",d[i].h_n);
//     printf("%d\n",d[i].block);
//     printf("%s\n",d[i].city);
//     printf("%s\n",d[i].state);
// }
// int k=10;
// int *ptr=&k;
// int **pptr = &ptr;
// printf("%d\n",*ptr);
// printf("%d",k);
 // printf("\n%d",**pptr);
// FILE*ptr,*out;
// float k,sum=0;
// float count=0;
// float avg;
// ptr=fopen("w.dat","r");
// if(ptr==NULL){
//     printf("error");
// }
// else{
//     while(!feof(ptr)){
//     fscanf(ptr,"%f",&k);
//     sum +=k;
//     count++;
// }
// }
// avg=sum/count;
// out=fopen("result.res","w");
// if(out==NULL){
//     printf("error");
// }
// else{
//     fprintf(out,"the avg is %f",avg);
// }
// fclose(ptr);
// fclose(out);
// int x=4,y=5;
// x=++x*++y;
// y=y++*x++;
// printf("x %d,y%d",x,y);

// int a,b,c,sum;
// printf("Input numbers :")
// ;
// scanf("%d%d%d",&a,&b,&c);
// sum=calsum(a,b,c);
// printf("%d",sum);
// return 0;

// int k=1;
// int i;
// for(i=1;i<=5;printf("%d",i))
//     i++;
// char ch='y';
// switch(ch)
// {
//     case'x':
//     case'y':
//          printf("You entered y");
//     case'z':     
//          printf("a as in ashar");
// }
// printf("%d\n%d\n%d",k,++k,k++);
// char l[80];
// int count, tag;
// while((l[count]=getchar()) != EOL)
// {++count;
// tag=count;
// }
// count=0;
// while(count<tag)
// {
//     putchar(toupper(l[count]));
//     ++count;
    // }
// int x=5;
// int y=x++;
// printf("%d",x);
// printf("%d",y);
}
// int calsum(int x,int y, int z){
// return x+y+z;    
// }
// void printinfo(d s3)
// {
//     printf("%s\n",s3.name);
//     printf("%d\n",s3.roll);
//     printf("%f\n",s3.percentile);
//     s3.roll=10;
// }

