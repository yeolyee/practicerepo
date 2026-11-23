#include <stdio.h>
#include <unistd.h>

void main() 
{
   char pwd[1024];
   getcwd(pwd, sizeof(pwd));
   printf("print working dir: %s\n" ,pwd);
   fput("%s\n",f);
   fclose(f);
}
