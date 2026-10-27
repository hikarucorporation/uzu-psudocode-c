// Function : ex_tolower
// Namespace: 
// Entry    : 005d73c0
// Prototype: undefined ex_tolower(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d73c0 - 005d75a2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_tolower(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,long *param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  char *__s;
  size_t sVar1;
  char *__dest;
  __int32_t **pp_Var2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  lVar3 = param_11[1];
  if (lVar3 == 0xd) {
    puVar5 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    if (puVar5 == (undefined8 *)0x0) {
      __s = "";
    }
    else {
LAB_005d7400:
      __s = (char *)ex_symname(puVar5);
      if (__s == (char *)0x0) goto LAB_005d7424;
    }
LAB_005d7445:
    sVar1 = strlen(__s);
    __dest = calloc((long)(int)sVar1 + 1,1);
    if (__dest == (char *)0x0) {
      pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,"expr: \'%s\' - makesymbol: no memory\n",
               *(undefined8 *)(param_9 + 0x40),lVar3,param_13,param_14);
      return;
    }
    strcat(__dest,__s);
    if ((sVar1 & 0x80000000) == 0) {
      pp_Var2 = __ctype_tolower_loc();
      uVar4 = sVar1 + 1 & 0xffffffff;
      uVar6 = (ulong)((uint)(sVar1 + 1) & 3);
      if (uVar4 - 1 < 3) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          __dest[lVar3] = (char)(*pp_Var2)[__dest[lVar3]];
          __dest[lVar3 + 1] = (char)(*pp_Var2)[__dest[lVar3 + 1]];
          __dest[lVar3 + 2] = (char)(*pp_Var2)[__dest[lVar3 + 2]];
          __dest[lVar3 + 3] = (char)(*pp_Var2)[__dest[lVar3 + 3]];
          lVar3 = lVar3 + 4;
        } while (uVar4 - uVar6 != lVar3);
      }
      if (uVar6 != 0) {
        uVar4 = 0;
        do {
          __dest[uVar4 + lVar3] = (char)(*pp_Var2)[__dest[uVar4 + lVar3]];
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
    }
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
        goto LAB_005d7400;
      }
      __s = (char *)*param_11;
      if (__s != (char *)0x0) goto LAB_005d7445;
    }
    else {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: \'%s\' - argument not a string - type = %ld\n",*(undefined8 *)(param_9 + 0x40)
               ,lVar3,param_13,param_14);
    }
LAB_005d7424:
    lVar3 = _UNK_005d99f8;
    *param_12 = _DAT_005d99f0;
    param_12[1] = lVar3;
  }
  return;
}


