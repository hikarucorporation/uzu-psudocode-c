// Function : sys_parsedevlist
// Namespace: 
// Entry    : 00544ee0
// Prototype: ulong sys_parsedevlist(undefined4 * param_1, long param_2, uint param_3, char * param_4)
// Body     : 00544ee0 - 00544f59


ulong sys_parsedevlist(undefined4 *param_1,long param_2,uint param_3,char *param_4)

{
  char *in_RAX;
  long lVar1;
  ulong uVar2;
  char *local_38;
  
  if ((int)param_3 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    local_38 = in_RAX;
    do {
      if (*param_4 == '\0') goto LAB_00544f45;
      lVar1 = strtol(param_4,&local_38,10);
      *(int *)(param_2 + uVar2 * 4) = (int)lVar1;
      if (local_38 == param_4) goto LAB_00544f45;
      if (*local_38 == '\0') {
        uVar2 = uVar2 + 1;
        goto LAB_00544f45;
      }
      uVar2 = uVar2 + 1;
      param_4 = local_38 + 1;
    } while (param_3 != uVar2);
    uVar2 = (ulong)param_3;
  }
LAB_00544f45:
  *param_1 = (int)uVar2;
  return uVar2 & 0xffffffff;
}


