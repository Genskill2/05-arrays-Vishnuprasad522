/* Enter your solutions in this file */
#include <stdio.h>

/*SOLUTION _ MAX*/
int max(int x[], int j) {
 
for (int n=0; n<j; n++)
 {
   if(x[0]<x[0+n])
   {
     int t = x[0];
     x[0] = x[0+n];
     x[n+0] = t;
   }
  
 }

 return x[0];
}

/*SOLUTION_MIN*/
int min(int x[], int j) {

for (int n=0; n<j; n++)
 {
   if(x[0]>x[0+n])
   {
     int t = x[0];
     x[0] = x[0+n];
     x[n+0] = t;
   }
  
 }

 return x[0];
}

/*SOLUTION_AVERAGE*/
float average(int x[], int j) {

  int sum = 0;
  float average =0;
  for(int i=0; i<j ; i++)
  {
    sum += x[i];
  }
  average = (float)sum/j;
  
  printf("The average is %f\n", average);
  
  return average;
}


/*SOLUTION_MODE*/
int mode(int x[], int n)
{
  int count=0, value=0;
  for(int i=0; i<n; i++)
  {
    int a=0;
    for(int j=0; j<n; j++)
    {
      if(x[j]==x[i])
      {
        a++;    
      }
      if(a>count)
      {
        count=a;
        value=x[i];
      }
       
    }
  }
  return value;
}


/*SOLUTION_FACTORS*/

int factors(int number, int ret[])
{ int i,j=0,count=0;
   while(number % 2 == 0) 
   {
      count++;
      ret[j]=2;
      j++;
      number=number/2;
   }
   for(i = 3; i <= (number/2); i=i+2)
   {  
      while(number % i == 0)
      {
         count++;
         ret[j]=i;
         j++;
         number = number/i;
      }
   }
   if(number>2)
   { count++;
       ret[j]=number;
   }
  return count;
}
