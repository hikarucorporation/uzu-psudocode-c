// Function : ex_strcmp
// Namespace: 
// Entry    : 005d8100
// Prototype: undefined ex_strcmp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d8100 - 005d823e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_strcmp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,long *param_11,long *param_12,char *param_13,
              undefined8 param_14)

{
  int iVar1;
  char *__s1;
  char *__s2;
  long lVar2;
  undefined8 *puVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  lVar2 = param_11[1];
  if (lVar2 == 0xd) {
    puVar3 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    if (puVar3 == (undefined8 *)0x0) {
      __s1 = "";
      lVar2 = param_11[5];
      if (lVar2 != 0xd) goto LAB_005d8157;
LAB_005d81b1:
      puVar3 = *(undefined8 **)(param_9 + 0x698 + param_11[4] * 0x20);
      if (puVar3 != (undefined8 *)0x0) goto LAB_005d81c6;
      __s2 = "";
    }
    else {
LAB_005d8140:
      __s1 = (char *)ex_symname(puVar3);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if (__s1 == (char *)0x0) goto LAB_005d817f;
LAB_005d814d:
      lVar2 = param_11[5];
      if (lVar2 == 0xd) goto LAB_005d81b1;
LAB_005d8157:
      if (lVar2 != 7) goto LAB_005d8169;
      if ((*(byte *)(param_11 + 7) & 1) == 0) {
        puVar3 = (undefined8 *)param_11[4];
LAB_005d81c6:
        __s2 = (char *)ex_symname(puVar3);
      }
      else {
        __s2 = (char *)param_11[4];
      }
      if (__s2 == (char *)0x0) goto LAB_005d817f;
    }
    iVar1 = strcmp(__s1,__s2);
    if (param_12[1] == 0xf) {
      ex_mkvector((float)(long)iVar1,*param_12,*(int *)(param_9 + 0x28f8));
      return;
    }
    *(int *)param_12 = iVar1;
    *(int *)((long)param_12 + 4) = iVar1 >> 0x1f;
    param_12[1] = 1;
    *(undefined2 *)(param_12 + 3) = 0;
  }
  else {
    if (lVar2 == 7) {
      if ((*(byte *)(param_11 + 3) & 1) == 0) {
        puVar3 = (undefined8 *)*param_11;
        goto LAB_005d8140;
      }
      __s1 = (char *)*param_11;
      if (__s1 != (char *)0x0) goto LAB_005d814d;
    }
    else {
LAB_005d8169:
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: \'%s\' - argument not a string - type = %ld\n",*(undefined8 *)(param_9 + 0x40)
               ,lVar2,param_13,param_14);
    }
LAB_005d817f:
    lVar2 = _UNK_005d99f8;
    *param_12 = _DAT_005d99f0;
    param_12[1] = lVar2;
  }
  return;
}


