// Function : sys_fopen
// Namespace: 
// Entry    : 00547120
// Prototype: undefined sys_fopen(char * param_1, char * param_2)
// Body     : 00547120 - 00547163


void sys_fopen(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char local_3e8 [1000];
  
  pcVar2 = local_3e8;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *param_1;
  }
  *pcVar2 = '\0';
  fopen(local_3e8,param_2);
  return;
}


