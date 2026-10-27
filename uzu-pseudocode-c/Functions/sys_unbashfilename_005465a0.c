// Function : sys_unbashfilename
// Namespace: 
// Entry    : 005465a0
// Prototype: undefined sys_unbashfilename(char * param_1, char * param_2)
// Body     : 005465a0 - 005465c4


void sys_unbashfilename(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    *param_2 = cVar1;
    param_2 = param_2 + 1;
    cVar1 = *param_1;
  }
  *param_2 = '\0';
  return;
}


