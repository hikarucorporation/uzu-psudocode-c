// Function : sys_open_absolute
// Namespace: 
// Entry    : 00546df0
// Prototype: undefined8 sys_open_absolute(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, char * param_11, undefined8 * param_12, uint param_13, undefined8 param_14, int * param_15, int param_16)
// Body     : 00546df0 - 00546ea4


undefined8
sys_open_absolute(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,char *param_10,char *param_11,undefined8 *param_12,uint param_13,
                 undefined8 param_14,int *param_15,int param_16)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  size_t __n;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_stack_fffffffffffffbd8;
  char local_418 [1000];
  
  if ((*param_9 == '~') || (uVar4 = 0, *param_9 == '/')) {
    pcVar3 = strrchr(param_9,0x2f);
    if (pcVar3 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      iVar1 = (int)pcVar3 - (int)param_9;
      iVar2 = 999;
      if (iVar1 < 999) {
        iVar2 = iVar1;
      }
      __n = (size_t)iVar2;
      strncpy(local_418,param_9,__n);
      local_418[__n] = '\0';
      iVar2 = sys_trytoopenit(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,local_418,param_9 + __n + 1,param_10,param_11,param_12,
                              (ulong)param_13,in_stack_fffffffffffffbd8,param_16);
      *param_15 = iVar2;
      uVar4 = 1;
    }
  }
  return uVar4;
}


