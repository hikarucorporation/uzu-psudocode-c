// Function : ex_strncat
// Namespace: 
// Entry    : 005d7f10
// Prototype: undefined ex_strncat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d7f10 - 005d80fb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_strncat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,long *param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  char *__src;
  char *__s;
  long lVar1;
  size_t sVar2;
  char *__dest;
  long lVar3;
  int iVar4;
  ulong __n;
  undefined8 *puVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  lVar3 = param_11[1];
  if (lVar3 == 0xd) {
    puVar5 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    if (puVar5 == (undefined8 *)0x0) {
      __src = "";
      lVar3 = param_11[5];
      if (lVar3 != 0xd) goto LAB_005d7f6a;
LAB_005d7fcb:
      puVar5 = *(undefined8 **)(param_9 + 0x698 + param_11[4] * 0x20);
      if (puVar5 != (undefined8 *)0x0) goto LAB_005d7fe0;
      __s = "";
      lVar1 = param_11[9];
      if (lVar1 == 7) goto LAB_005d8028;
LAB_005d7ff9:
      iVar4 = 0;
      if (lVar1 == 2) {
        iVar4 = (int)*(float *)(param_11 + 8);
      }
      else if (lVar1 == 1) {
        iVar4 = (int)param_11[8];
      }
    }
    else {
LAB_005d7f53:
      __src = (char *)ex_symname(puVar5);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if (__src == (char *)0x0) goto LAB_005d7f96;
LAB_005d7f60:
      lVar3 = param_11[5];
      if (lVar3 == 0xd) goto LAB_005d7fcb;
LAB_005d7f6a:
      if (lVar3 != 7) goto LAB_005d7f80;
      lVar3 = 7;
      if ((*(byte *)(param_11 + 7) & 1) == 0) {
        puVar5 = (undefined8 *)param_11[4];
LAB_005d7fe0:
        __s = (char *)ex_symname(puVar5);
      }
      else {
        __s = (char *)param_11[4];
      }
      if (__s == (char *)0x0) goto LAB_005d7f96;
      lVar1 = param_11[9];
      if (lVar1 != 7) goto LAB_005d7ff9;
LAB_005d8028:
      iVar4 = 0;
      if ((*(byte *)(param_11 + 0xb) & 1) != 0) {
        free((void *)param_11[8]);
        *(byte *)(param_11 + 0xb) = *(byte *)(param_11 + 0xb) & 0xfe;
      }
    }
    __n = (ulong)iVar4;
    sVar2 = strlen(__s);
    if (__n <= sVar2) {
      sVar2 = __n;
    }
    __dest = calloc((long)(int)sVar2 + 1,1);
    if (__dest == (char *)0x0) {
      pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,"expr: \'%s\' - makesymbol: no memory\n",
               *(undefined8 *)(param_9 + 0x40),lVar3,param_13,param_14);
      return;
    }
    strcat(__dest,__src);
    strncat(__dest,__s,__n);
    if (param_12[1] == 0xf) {
      ex_mkvector(0,*param_12,*(int *)(param_9 + 0x28f8));
      free(__dest);
      return;
    }
    *(int *)param_12 = (int)__dest;
    *(int *)((long)param_12 + 4) = (int)((ulong)__dest >> 0x20);
    param_12[1] = 7;
    *(undefined2 *)(param_12 + 3) = 1;
  }
  else {
    if (lVar3 == 7) {
      if ((*(byte *)(param_11 + 3) & 1) == 0) {
        puVar5 = (undefined8 *)*param_11;
        goto LAB_005d7f53;
      }
      __src = (char *)*param_11;
      if (__src != (char *)0x0) goto LAB_005d7f60;
    }
    else {
LAB_005d7f80:
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: \'%s\' - argument not a string - type = %ld\n",*(undefined8 *)(param_9 + 0x40)
               ,lVar3,param_13,param_14);
    }
LAB_005d7f96:
    lVar3 = _UNK_005d99f8;
    *param_12 = _DAT_005d99f0;
    param_12[1] = lVar3;
  }
  return;
}


