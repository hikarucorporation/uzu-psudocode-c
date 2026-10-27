// Function : binbuf_savetext
// Namespace: 
// Entry    : 00533e10
// Prototype: undefined binbuf_savetext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint * param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00533e10 - 00533fa6


void binbuf_savetext(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    uint *param_9,int *param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  char acStack_4a8 [128];
  undefined1 in_stack_fffffffffffffbd8;
  
  uVar13 = (ulong)*param_9;
  if (0 < (int)*param_9) {
    piVar11 = *(int **)(param_9 + 2);
    do {
      if (*piVar11 == 1) {
LAB_00533f10:
        lVar1 = (long)*param_10 + 1;
        uVar12 = (long)*param_10 * 0x10;
        pvVar9 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(void **)(param_10 + 2),uVar12,lVar1 * 0x10);
        uVar10 = extraout_RDX_00;
        uVar14 = extraout_XMM0_Da_04;
        uVar15 = extraout_XMM0_Db_04;
        if (pvVar9 == (void *)0x0) goto LAB_00533e40;
        *(void **)(param_10 + 2) = pvVar9;
        *param_10 = (int)lVar1;
        iVar3 = piVar11[1];
        param_1 = *(undefined8 *)piVar11;
        iVar4 = piVar11[2];
        iVar5 = piVar11[3];
        piVar2 = (int *)((long)pvVar9 + uVar12);
        *piVar2 = *piVar11;
        piVar2[1] = iVar3;
        piVar2[2] = iVar4;
        piVar2[3] = iVar5;
      }
      else {
        if (*piVar11 == 2) {
          pcVar7 = (char *)**(undefined8 **)(piVar11 + 2);
          pcVar6 = strchr(pcVar7,0x3b);
          param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = strchr(pcVar7,0x2c);
            param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
            if (pcVar6 == (char *)0x0) {
              pcVar7 = strchr(pcVar7,0x24);
              param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
              if (pcVar7 == (char *)0x0) goto LAB_00533f10;
            }
          }
        }
        atom_string(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar11,
                    acStack_4a8 + 0x80,(uint *)0x3e8,param_12,param_13,param_14,
                    in_stack_fffffffffffffbd8);
        puVar8 = gensym(acStack_4a8 + 0x80);
        lVar1 = (long)*param_10 + 1;
        uVar12 = (long)*param_10 * 0x10;
        pvVar9 = resizebytes(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,*(void **)(param_10 + 2),uVar12
                             ,lVar1 * 0x10);
        param_1 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
        uVar10 = extraout_RDX;
        uVar14 = extraout_XMM0_Da_03;
        uVar15 = extraout_XMM0_Db_03;
        if (pvVar9 == (void *)0x0) {
LAB_00533e40:
          param_1 = pd_error(CONCAT44(uVar15,uVar14),param_2,param_3,param_4,param_5,param_6,param_7
                             ,param_8,0,"binbuf_addmessage: out of space",uVar10,param_12,param_13,
                             param_14);
        }
        else {
          *(void **)(param_10 + 2) = pvVar9;
          *param_10 = (int)lVar1;
          *(undefined4 *)((long)pvVar9 + uVar12) = 2;
          *(undefined8 **)((long)pvVar9 + uVar12 + 8) = puVar8;
        }
      }
      piVar11 = piVar11 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  lVar1 = (long)*param_10 + 1;
  uVar13 = (long)*param_10 * 0x10;
  pvVar9 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_10 + 2),uVar13,lVar1 * 0x10);
  if (pvVar9 == (void *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,0,"binbuf_addmessage: out of space",extraout_RDX_01,param_12,
             param_13,param_14);
  }
  else {
    *(void **)(param_10 + 2) = pvVar9;
    *param_10 = (int)lVar1;
    *(undefined4 *)((long)pvVar9 + uVar13) = 4;
    *(undefined4 *)((long)pvVar9 + uVar13 + 8) = 0;
  }
  return;
}


