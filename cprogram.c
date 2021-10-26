#include<stdio.h>
#include<unistd.h>
int main()
{
  int parent_id,child_id;
  
  parent_id = getppid();
  child_id = getpid();
  
  printf("parent id is : %d\n",parent_id);
  printf("child id is : %d\n" , child_id);
  
  
  return 0;
  }
