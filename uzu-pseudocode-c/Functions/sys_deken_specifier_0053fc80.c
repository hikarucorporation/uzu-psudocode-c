// Function : sys_deken_specifier
// Namespace: 
// Entry    : 0053fc80
// Prototype: char * sys_deken_specifier(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, ulong param_10, int param_11, uint param_12)
// Body     : 0053fc80 - 0053fd31


char * sys_deken_specifier(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                          undefined8 param_4,undefined8 param_5,undefined8 param_6,
                          undefined8 param_7,undefined8 param_8,char *param_9,ulong param_10,
                          int param_11,uint param_12)

{
  char cVar1;
  undefined1 in_AL;
  __int32_t **pp_Var2;
  ulong uVar3;
  undefined *puVar4;
  
  if (init_deken_arch_initialized == '\0') {
    init_deken_arch_initialized = '\x01';
  }
  if ((int)param_12 < 0) {
    puVar4 = &DAT_00657191;
  }
  else if ((9 < param_12) || (puVar4 = (&deken_CPU)[param_12], puVar4 == (undefined *)0x0)) {
    return (char *)0x0;
  }
  pd_snprintf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10 - 1,
              "%s-%s-%d","Linux",puVar4,(ulong)(param_11 == 0) << 5,in_AL);
  param_9[param_10 - 1] = '\0';
  if (param_10 != 0) {
    uVar3 = 0;
    do {
      cVar1 = param_9[uVar3];
      if ((long)cVar1 == 0) {
        return param_9;
      }
      pp_Var2 = __ctype_tolower_loc();
      param_9[uVar3] = (char)(*pp_Var2)[cVar1];
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < param_10);
  }
  return param_9;
}


