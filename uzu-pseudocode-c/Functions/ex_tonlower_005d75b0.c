// Function : ex_tonlower
// Namespace: 
// Entry    : 005d75b0
// Prototype: undefined ex_tonlower(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d75b0 - 005d77e2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_tonlower(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  lVar3 = param_11[1];
  if (lVar3 == 0xd) {
    puVar7 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    if (puVar7 == (undefined8 *)0x0) {
      __s = "";
    }
    else {
LAB_005d75f7:
      __s = (char *)ex_symname(puVar7);
      if (__s == (char *)0x0) goto LAB_005d761b;
    }
LAB_005d763d:
    sVar1 = strlen(__s);
    uVar5 = (uint)sVar1;
    __dest = calloc((long)(int)uVar5 + 1,1);
    if (__dest == (char *)0x0) {
      pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,"expr: \'%s\' - makesymbol: no memory\n",
               *(undefined8 *)(param_9 + 0x40),lVar3,param_13,param_14);
      return;
    }
    lVar3 = param_11[5];
    uVar8 = 0;
    if (lVar3 == 7) {
      if ((*(byte *)(param_11 + 7) & 1) != 0) {
        free((void *)param_11[4]);
        *(byte *)(param_11 + 7) = *(byte *)(param_11 + 7) & 0xfe;
      }
    }
    else if (lVar3 == 2) {
      uVar8 = (uint)*(float *)(param_11 + 4);
    }
    else if (lVar3 == 1) {
      uVar8 = *(uint *)(param_11 + 4);
    }
    strcat(__dest,__s);
    if ((int)uVar8 < (int)uVar5) {
      uVar5 = uVar8;
    }
    if (0 < (int)uVar5) {
      pp_Var2 = __ctype_tolower_loc();
      if ((ulong)uVar5 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          __dest[uVar4] = (char)(*pp_Var2)[__dest[uVar4]];
          __dest[uVar4 + 1] = (char)(*pp_Var2)[__dest[uVar4 + 1]];
          __dest[uVar4 + 2] = (char)(*pp_Var2)[__dest[uVar4 + 2]];
          __dest[uVar4 + 3] = (char)(*pp_Var2)[__dest[uVar4 + 3]];
          uVar4 = uVar4 + 4;
        } while ((uVar5 & 0xfffffffc) != uVar4);
      }
      if ((ulong)(uVar5 & 3) != 0) {
        uVar6 = 0;
        do {
          __dest[uVar6 + uVar4] = (char)(*pp_Var2)[__dest[uVar6 + uVar4]];
          uVar6 = uVar6 + 1;
        } while ((uVar5 & 3) != uVar6);
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
        puVar7 = (undefined8 *)*param_11;
        goto LAB_005d75f7;
      }
      __s = (char *)*param_11;
      if (__s != (char *)0x0) goto LAB_005d763d;
    }
    else {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: \'%s\' - argument not a string - type = %ld\n",*(undefined8 *)(param_9 + 0x40)
               ,lVar3,param_13,param_14);
    }
LAB_005d761b:
    lVar3 = _UNK_005d99f8;
    *param_12 = _DAT_005d99f0;
    param_12[1] = lVar3;
  }
  return;
}


