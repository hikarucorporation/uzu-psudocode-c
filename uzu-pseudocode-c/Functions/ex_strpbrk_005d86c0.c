// Function : ex_strpbrk
// Namespace: 
// Entry    : 005d86c0
// Prototype: undefined ex_strpbrk(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 005d86c0 - 005d8867


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_strpbrk(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,long *param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  lVar4 = param_11[1];
  if (lVar4 == 0xd) {
    puVar5 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    if (puVar5 == (undefined8 *)0x0) {
      pcVar1 = "";
      lVar4 = param_11[5];
      if (lVar4 != 0xd) goto LAB_005d8717;
LAB_005d8774:
      puVar5 = *(undefined8 **)(param_9 + 0x698 + param_11[4] * 0x20);
      if (puVar5 != (undefined8 *)0x0) goto LAB_005d878d;
      pcVar1 = strpbrk(pcVar1,"");
    }
    else {
LAB_005d8700:
      pcVar1 = (char *)ex_symname(puVar5);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if (pcVar1 == (char *)0x0) goto LAB_005d8742;
LAB_005d870d:
      lVar4 = param_11[5];
      if (lVar4 == 0xd) goto LAB_005d8774;
LAB_005d8717:
      if (lVar4 != 7) goto LAB_005d872d;
      lVar4 = 7;
      if ((*(byte *)(param_11 + 7) & 1) == 0) {
        puVar5 = (undefined8 *)param_11[4];
LAB_005d878d:
        pcVar2 = (char *)ex_symname(puVar5);
      }
      else {
        pcVar2 = (char *)param_11[4];
      }
      if (pcVar2 == (char *)0x0) goto LAB_005d8742;
      pcVar1 = strpbrk(pcVar1,pcVar2);
    }
    if (pcVar1 != (char *)0x0) {
      sVar3 = strlen(pcVar1);
      pcVar2 = calloc(sVar3 + 2,1);
      if (pcVar2 == (char *)0x0) {
        pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,param_9,"expr: \'%s\' - makesymbol: no memory\n",
                 *(undefined8 *)(param_9 + 0x40),lVar4,param_13,param_14);
        return;
      }
      strcpy(pcVar2,pcVar1);
      if (param_12[1] == 0xf) {
        ex_mkvector(0,*param_12,*(int *)(param_9 + 0x28f8));
        free(pcVar2);
        return;
      }
      *(int *)param_12 = (int)pcVar2;
      *(int *)((long)param_12 + 4) = (int)((ulong)pcVar2 >> 0x20);
      param_12[1] = 7;
      *(undefined2 *)(param_12 + 3) = 1;
    }
  }
  else {
    if (lVar4 == 7) {
      if ((*(byte *)(param_11 + 3) & 1) == 0) {
        puVar5 = (undefined8 *)*param_11;
        goto LAB_005d8700;
      }
      pcVar1 = (char *)*param_11;
      if (pcVar1 != (char *)0x0) goto LAB_005d870d;
    }
    else {
LAB_005d872d:
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: \'%s\' - argument not a string - type = %ld\n",*(undefined8 *)(param_9 + 0x40)
               ,lVar4,param_13,param_14);
    }
LAB_005d8742:
    lVar4 = _UNK_005d99f8;
    *param_12 = _DAT_005d99f0;
    param_12[1] = lVar4;
  }
  return;
}


