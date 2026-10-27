// Function : sys_expandpath
// Namespace: 
// Entry    : 005465f0
// Prototype: undefined sys_expandpath(char * param_1, char * param_2, int param_3)
// Body     : 005465f0 - 005466a1


void sys_expandpath(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  char *__src;
  size_t __n;
  char *pcVar3;
  
  sVar2 = strlen(param_1);
  if ((sVar2 != 1) || (*param_1 != '~')) {
    iVar1 = strncmp(param_1,"~/",2);
    if (iVar1 != 0) {
      strncpy(param_2,param_1,(long)param_3);
      pcVar3 = param_2 + ((long)param_3 - 1);
      goto LAB_00546694;
    }
  }
  __src = getenv("HOME");
  pcVar3 = param_2;
  if (__src != (char *)0x0) {
    __n = (size_t)param_3;
    strncpy(param_2,__src,__n);
    pcVar3 = param_2 + (__n - 1);
    param_2[__n - 1] = '\0';
    sVar2 = strlen(param_2);
    strncpy(param_2 + sVar2,param_1 + 1,__n - sVar2);
  }
LAB_00546694:
  *pcVar3 = '\0';
  return;
}


