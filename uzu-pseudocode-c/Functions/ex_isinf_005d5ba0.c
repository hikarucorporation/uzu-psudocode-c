// Function : ex_isinf
// Namespace: 
// Entry    : 005d5ba0
// Prototype: undefined ex_isinf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d5ba0 - 005d5c88


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_isinf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,long param_11,long *param_12,char *param_13,
             undefined8 param_14)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *__s;
  
  lVar3 = _UNK_005d99f8;
  lVar2 = *(long *)(param_11 + 8);
  if (lVar2 - 0xeU < 2) {
    if (param_12[1] == 0xf) {
      __s = (void *)*param_12;
      uVar1 = *(uint *)(param_9 + 0x28f8);
    }
    else {
      param_12[1] = 0xf;
      __s = (void *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *param_12 = (long)__s;
      uVar1 = *(uint *)(param_9 + 0x28f8);
    }
    if ((ulong)uVar1 == 0) {
      return;
    }
    memset(__s,0,(ulong)uVar1 << 2);
    return;
  }
  if (lVar2 == 2) {
    if (param_12[1] != 0xf) {
      param_12[1] = 2;
      *(undefined4 *)param_12 = 0;
      return;
    }
  }
  else {
    if (lVar2 != 1) {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x793,lVar2,param_13,param_14);
      return;
    }
    if (param_12[1] != 0xf) {
      *param_12 = _DAT_005d99f0;
      param_12[1] = lVar3;
      return;
    }
  }
  ex_mkvector(0,*param_12,*(int *)(param_9 + 0x28f8));
  return;
}


