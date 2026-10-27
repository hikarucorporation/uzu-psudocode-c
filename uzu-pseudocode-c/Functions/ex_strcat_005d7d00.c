// Function : ex_strcat
// Namespace: 
// Entry    : 005d7d00
// Prototype: undefined ex_strcat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 005d7d00 - 005d7f0f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_strcat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,long param_10,long *param_11,undefined8 *param_12,char *param_13,
              undefined8 param_14)

{
  size_t sVar1;
  char *pcVar2;
  char *__dest;
  undefined8 *puVar3;
  long *plVar4;
  long *extraout_RDX;
  long lVar5;
  int iVar6;
  ulong __n;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  
  if (param_10 < 1) {
    sVar1 = 1;
    puVar3 = param_12;
  }
  else {
    lVar5 = 0;
    plVar4 = param_11;
    lVar9 = param_10;
    do {
      puVar3 = (undefined8 *)plVar4[1];
      if (puVar3 == (undefined8 *)0xd) {
        puVar8 = *(undefined8 **)(param_9 + 0x698 + *plVar4 * 0x20);
        pcVar2 = "";
        if (puVar8 != (undefined8 *)0x0) {
LAB_005d7d44:
          pcVar2 = (char *)ex_symname(puVar8);
          goto joined_r0x005d7d4f;
        }
      }
      else {
        if (puVar3 != (undefined8 *)0x7) {
          pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   "expr: \'%s\' - argument not a string - type = %ld\n",
                   *(undefined8 *)(param_9 + 0x40),puVar3,param_13,param_14);
          goto LAB_005d7ed3;
        }
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          puVar8 = (undefined8 *)*plVar4;
          goto LAB_005d7d44;
        }
        pcVar2 = (char *)*plVar4;
joined_r0x005d7d4f:
        if (pcVar2 == (char *)0x0) goto LAB_005d7ed3;
      }
      sVar1 = strlen(pcVar2);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      lVar5 = (long)((int)sVar1 + (int)lVar5);
      plVar4 = plVar4 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    sVar1 = lVar5 + 1;
  }
  param_12[1] = 7;
  *(byte *)(param_12 + 3) = *(byte *)(param_12 + 3) | 1;
  pcVar2 = calloc(sVar1,1);
  *param_12 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"expr: \'%s\' - makesymbol: no memory\n",
             *(undefined8 *)(param_9 + 0x40),puVar3,param_13,param_14);
LAB_005d7ed3:
    param_12[1] = 1;
    *param_12 = 0;
  }
  else if (0 < param_10) {
    lVar9 = param_10 + -1;
    plVar4 = (long *)param_11[1];
    uVar10 = extraout_XMM0_Da_00;
    uVar12 = extraout_XMM0_Db_00;
    if (plVar4 != (long *)0xd) goto LAB_005d7e50;
LAB_005d7e30:
    puVar3 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
    pcVar7 = "";
    if (puVar3 != (undefined8 *)0x0) goto LAB_005d7e64;
LAB_005d7e6c:
    strcat(pcVar2,pcVar7);
    plVar4 = param_11;
    uVar10 = extraout_XMM0_Da_01;
    uVar12 = extraout_XMM0_Db_01;
    if (lVar9 != 0) {
      do {
        lVar9 = lVar9 + -1;
        pcVar2 = (char *)*param_12;
        param_11 = plVar4 + 4;
        plVar4 = (long *)plVar4[5];
        if (plVar4 == (long *)0xd) goto LAB_005d7e30;
LAB_005d7e50:
        if (plVar4 != (long *)0x7) {
          uVar11 = pd_error(CONCAT44(uVar12,uVar10),param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,param_9,"expr: \'%s\' - argument not a string - type = %ld\n",
                            *(undefined8 *)(param_9 + 0x40),plVar4,param_13,param_14);
          lVar9 = extraout_RDX[1];
          if (lVar9 == 0xd) {
            puVar3 = *(undefined8 **)(param_9 + 0x698 + *extraout_RDX * 0x20);
            if (puVar3 == (undefined8 *)0x0) {
              pcVar2 = "";
              lVar9 = extraout_RDX[5];
              if (lVar9 != 0xd) goto LAB_005d7f6a;
LAB_005d7fcb:
              puVar3 = *(undefined8 **)(param_9 + 0x698 + extraout_RDX[4] * 0x20);
              if (puVar3 != (undefined8 *)0x0) goto LAB_005d7fe0;
              pcVar7 = "";
              lVar5 = extraout_RDX[9];
              if (lVar5 == 7) goto LAB_005d8028;
LAB_005d7ff9:
              iVar6 = 0;
              if (lVar5 == 2) {
                iVar6 = (int)*(float *)(extraout_RDX + 8);
              }
              else if (lVar5 == 1) {
                iVar6 = (int)extraout_RDX[8];
              }
            }
            else {
LAB_005d7f53:
              pcVar2 = (char *)ex_symname(puVar3);
              uVar11 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
              if (pcVar2 == (char *)0x0) goto LAB_005d7f96;
LAB_005d7f60:
              lVar9 = extraout_RDX[5];
              if (lVar9 == 0xd) goto LAB_005d7fcb;
LAB_005d7f6a:
              if (lVar9 != 7) goto LAB_005d7f80;
              lVar9 = 7;
              if ((*(byte *)(extraout_RDX + 7) & 1) == 0) {
                puVar3 = (undefined8 *)extraout_RDX[4];
LAB_005d7fe0:
                pcVar7 = (char *)ex_symname(puVar3);
              }
              else {
                pcVar7 = (char *)extraout_RDX[4];
              }
              if (pcVar7 == (char *)0x0) goto LAB_005d7f96;
              lVar5 = extraout_RDX[9];
              if (lVar5 != 7) goto LAB_005d7ff9;
LAB_005d8028:
              iVar6 = 0;
              if ((*(byte *)(extraout_RDX + 0xb) & 1) != 0) {
                free((void *)extraout_RDX[8]);
                *(byte *)(extraout_RDX + 0xb) = *(byte *)(extraout_RDX + 0xb) & 0xfe;
              }
            }
            __n = (ulong)iVar6;
            sVar1 = strlen(pcVar7);
            if (__n <= sVar1) {
              sVar1 = __n;
            }
            __dest = calloc((long)(int)sVar1 + 1,1);
            if (__dest == (char *)0x0) {
              pd_error(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,param_9,
                       "expr: \'%s\' - makesymbol: no memory\n",*(undefined8 *)(param_9 + 0x40),
                       lVar9,param_13,param_14);
              return;
            }
            strcat(__dest,pcVar2);
            strncat(__dest,pcVar7,__n);
            if (plVar4[1] == 0xf) {
              ex_mkvector(0,*plVar4,*(int *)(param_9 + 0x28f8));
              free(__dest);
              return;
            }
            *(int *)plVar4 = (int)__dest;
            *(int *)((long)plVar4 + 4) = (int)((ulong)__dest >> 0x20);
            plVar4[1] = 7;
            *(undefined2 *)(plVar4 + 3) = 1;
          }
          else {
            if (lVar9 == 7) {
              if ((*(byte *)(extraout_RDX + 3) & 1) == 0) {
                puVar3 = (undefined8 *)*extraout_RDX;
                goto LAB_005d7f53;
              }
              pcVar2 = (char *)*extraout_RDX;
              if (pcVar2 != (char *)0x0) goto LAB_005d7f60;
            }
            else {
LAB_005d7f80:
              pd_error(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       "expr: \'%s\' - argument not a string - type = %ld\n",
                       *(undefined8 *)(param_9 + 0x40),lVar9,param_13,param_14);
            }
LAB_005d7f96:
            lVar9 = _UNK_005d99f8;
            *plVar4 = _DAT_005d99f0;
            plVar4[1] = lVar9;
          }
          return;
        }
        if ((*(byte *)(param_11 + 3) & 1) == 0) goto code_r0x005d7e61;
        strcat(pcVar2,(char *)*param_11);
        plVar4 = param_11;
        uVar10 = extraout_XMM0_Da_02;
        uVar12 = extraout_XMM0_Db_02;
        if (lVar9 == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
code_r0x005d7e61:
  puVar3 = (undefined8 *)*param_11;
LAB_005d7e64:
  pcVar7 = (char *)ex_symname(puVar3);
  goto LAB_005d7e6c;
}


