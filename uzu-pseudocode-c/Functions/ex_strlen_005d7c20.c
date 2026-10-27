// Function : ex_strlen
// Namespace: 
// Entry    : 005d7c20
// Prototype: undefined ex_strlen(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d7c20 - 005d7cf2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_strlen(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,long *param_11,long *param_12,char *param_13,
              undefined8 param_14)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 *puVar3;
  
  lVar1 = param_11[1];
  if (lVar1 == 0xd) {
    puVar3 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    if (puVar3 == (undefined8 *)0x0) {
      sVar2 = strlen("");
      lVar1 = param_12[1];
      goto joined_r0x005d7ccf;
    }
LAB_005d7c59:
    __s = (char *)ex_symname(puVar3);
  }
  else {
    if (lVar1 != 7) {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: \'%s\' - argument not a string - type = %ld\n",*(undefined8 *)(param_9 + 0x40)
               ,lVar1,param_13,param_14);
      goto LAB_005d7ca2;
    }
    if ((*(byte *)(param_11 + 3) & 1) == 0) {
      puVar3 = (undefined8 *)*param_11;
      goto LAB_005d7c59;
    }
    __s = (char *)*param_11;
  }
  if (__s == (char *)0x0) {
LAB_005d7ca2:
    lVar1 = _UNK_005d99f8;
    *param_12 = _DAT_005d99f0;
    param_12[1] = lVar1;
    return;
  }
  sVar2 = strlen(__s);
  lVar1 = param_12[1];
joined_r0x005d7ccf:
  if (lVar1 == 0xf) {
    ex_mkvector((float)(long)sVar2,*param_12,*(int *)(param_9 + 0x28f8));
    return;
  }
  *(int *)param_12 = (int)sVar2;
  *(int *)((long)param_12 + 4) = (int)(sVar2 >> 0x20);
  param_12[1] = 1;
  *(undefined2 *)(param_12 + 3) = 0;
  return;
}


