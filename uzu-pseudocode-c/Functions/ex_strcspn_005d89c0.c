// Function : ex_strcspn
// Namespace: 
// Entry    : 005d89c0
// Prototype: undefined ex_strcspn(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d89c0 - 005d8b0b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_strcspn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,long *param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  char *__s;
  char *__reject;
  size_t sVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  lVar2 = param_11[1];
  if (lVar2 == 0xd) {
    puVar3 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    if (puVar3 == (undefined8 *)0x0) {
      __s = "";
      lVar2 = param_11[5];
      if (lVar2 != 0xd) goto LAB_005d8a17;
LAB_005d8a75:
      puVar3 = *(undefined8 **)(param_9 + 0x698 + param_11[4] * 0x20);
      if (puVar3 != (undefined8 *)0x0) goto LAB_005d8a8a;
      sVar1 = strcspn(__s,"");
      lVar2 = param_12[1];
    }
    else {
LAB_005d8a00:
      __s = (char *)ex_symname(puVar3);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if (__s == (char *)0x0) goto LAB_005d8a43;
LAB_005d8a0d:
      lVar2 = param_11[5];
      if (lVar2 == 0xd) goto LAB_005d8a75;
LAB_005d8a17:
      if (lVar2 != 7) goto LAB_005d8a2d;
      if ((*(byte *)(param_11 + 7) & 1) == 0) {
        puVar3 = (undefined8 *)param_11[4];
LAB_005d8a8a:
        __reject = (char *)ex_symname(puVar3);
      }
      else {
        __reject = (char *)param_11[4];
      }
      if (__reject == (char *)0x0) goto LAB_005d8a43;
      sVar1 = strcspn(__s,__reject);
      lVar2 = param_12[1];
    }
    if (lVar2 == 0xf) {
      ex_mkvector((float)(long)sVar1,*param_12,*(int *)(param_9 + 0x28f8));
      return;
    }
    *(int *)param_12 = (int)sVar1;
    *(int *)((long)param_12 + 4) = (int)(sVar1 >> 0x20);
    param_12[1] = 1;
    *(undefined2 *)(param_12 + 3) = 0;
  }
  else {
    if (lVar2 == 7) {
      if ((*(byte *)(param_11 + 3) & 1) == 0) {
        puVar3 = (undefined8 *)*param_11;
        goto LAB_005d8a00;
      }
      __s = (char *)*param_11;
      if (__s != (char *)0x0) goto LAB_005d8a0d;
    }
    else {
LAB_005d8a2d:
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: \'%s\' - argument not a string - type = %ld\n",*(undefined8 *)(param_9 + 0x40)
               ,lVar2,param_13,param_14);
    }
LAB_005d8a43:
    lVar2 = _UNK_005d99f8;
    *param_12 = _DAT_005d99f0;
    param_12[1] = lVar2;
  }
  return;
}


