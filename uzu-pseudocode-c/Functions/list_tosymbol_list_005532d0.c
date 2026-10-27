// Function : list_tosymbol_list
// Namespace: 
// Entry    : 005532d0
// Prototype: undefined list_tosymbol_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12)
// Body     : 005532d0 - 00553394


void list_tosymbol_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,uint param_11,long param_12)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  float fVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  char acStack_48 [8];
  long local_40;
  long local_38;
  
  local_38 = (long)(int)(param_11 + 1);
  if ((int)param_11 < 999) {
    pcVar2 = acStack_48 + -(local_38 + 0xfU & 0xfffffffffffffff0);
    pcVar3 = pcVar2;
    if ((int)param_11 < 1) goto LAB_00553353;
  }
  else {
    pcVar2 = getbytes((ulong)(param_11 + 1));
    pcVar3 = acStack_48;
  }
  uVar4 = 0;
  local_40 = param_9;
  do {
    builtin_strncpy(pcVar3 + -8,">3U",4);
    pcVar3[-4] = '\0';
    pcVar3[-3] = '\0';
    pcVar3[-2] = '\0';
    pcVar3[-1] = '\0';
    fVar5 = (float)atom_getfloatarg((int)uVar4,param_11,param_12);
    pcVar2[uVar4] = (char)(int)fVar5;
    uVar4 = uVar4 + 1;
  } while (param_11 != uVar4);
  param_9 = local_40;
LAB_00553353:
  pcVar2[(int)param_11] = '\0';
  plVar1 = *(long **)(param_9 + 0x18);
  builtin_strncpy(pcVar3 + -8,"f3U",4);
  pcVar3[-4] = '\0';
  pcVar3[-3] = '\0';
  pcVar3[-2] = '\0';
  pcVar3[-1] = '\0';
  gensym(pcVar2);
  builtin_strncpy(pcVar3 + -8,"q3U",4);
  pcVar3[-4] = '\0';
  pcVar3[-3] = '\0';
  pcVar3[-2] = '\0';
  pcVar3[-1] = '\0';
  outlet_symbol(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,plVar1);
  if (0x3e6 < (int)param_11) {
    pcVar3[-8] = -0x7a;
    pcVar3[-7] = '3';
    pcVar3[-6] = 'U';
    pcVar3[-5] = '\0';
    pcVar3[-4] = '\0';
    pcVar3[-3] = '\0';
    pcVar3[-2] = '\0';
    pcVar3[-1] = '\0';
    freebytes(pcVar2);
  }
  return;
}


