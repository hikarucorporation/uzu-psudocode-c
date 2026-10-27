// Function : do_expandpath
// Namespace: 
// Entry    : 0057d3f0
// Prototype: char * do_expandpath(char * param_1, char * param_2, uint param_3)
// Body     : 0057d3f0 - 0057d4a2


char * do_expandpath(char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  size_t sVar2;
  char *__src;
  char *pcVar3;
  
  sVar2 = strlen(param_1);
  if ((sVar2 != 1) || (*param_1 != '~')) {
    iVar1 = strncmp(param_1,"~/",2);
    if (iVar1 != 0) {
      strncpy(param_2,param_1,(ulong)param_3);
      pcVar3 = param_2 + (param_3 - 1);
      goto LAB_0057d491;
    }
  }
  __src = getenv("HOME");
  pcVar3 = param_2;
  if (__src != (char *)0x0) {
    strncpy(param_2,__src,(ulong)param_3);
    pcVar3 = param_2 + (param_3 - 1);
    param_2[param_3 - 1] = '\0';
    sVar2 = strlen(param_2);
    strncpy(param_2 + sVar2,param_1 + 1,param_3 - sVar2);
  }
LAB_0057d491:
  *pcVar3 = '\0';
  return param_2;
}


