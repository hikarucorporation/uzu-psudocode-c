// Function : sys_bashfilename
// Namespace: 
// Entry    : 00546570
// Prototype: undefined sys_bashfilename(char * param_1, char * param_2)
// Body     : 00546570 - 00546594


void sys_bashfilename(char *param_1,char *param_2)

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


