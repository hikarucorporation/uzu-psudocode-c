// Function : drawnumber_new
// Namespace: 
// Entry    : 005292e0
// Prototype: long * drawnumber_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, ulong param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005292e0 - 00529692


long * drawnumber_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 *param_9,ulong param_10,long param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  int *piVar1;
  undefined4 uVar2;
  char *__s1;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar10;
  
  uVar9 = param_10 & 0xffffffff;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_drawnumber_class_007158f8,param_10,param_11,param_12,param_13,
                  param_14);
  *(undefined2 *)(plVar4 + 0x16) = 1;
  *(undefined4 *)(plVar4 + 0x17) = 0x3f800000;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  *(undefined4 *)(plVar4 + 0x1a) = 0;
  lVar5 = canvas_getcurrent(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar4[0x1c] = lVar5;
  do {
    uVar8 = (uint)uVar9;
    puVar6 = (undefined8 *)atom_getsymbolarg(0,uVar8,param_11);
    __s1 = (char *)*puVar6;
    iVar3 = strcmp(__s1,"-v");
    if (((int)uVar8 < 2) || (iVar3 != 0)) {
      iVar3 = strcmp(__s1,"-n");
      if (iVar3 == 0) {
        *(undefined2 *)(plVar4 + 0x16) = 1;
        *(undefined4 *)(plVar4 + 0x17) = 0;
        plVar4[0x18] = 0;
        plVar4[0x19] = 0;
        *(undefined4 *)(plVar4 + 0x1a) = 0;
      }
      else {
        if (*__s1 != '-') break;
        pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar4,"%s: unknown flag \'%s\'...",*param_9,__s1,
                 param_13,param_14);
      }
      lVar5 = 1;
      iVar3 = -1;
    }
    else {
      if (*(int *)(param_11 + 0x10) == 2) {
        fielddesc_setfloat_var
                  (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8,(undefined2 *)(plVar4 + 0x16),
                   *(undefined8 **)(param_11 + 0x18));
      }
      else {
        uVar2 = *(undefined4 *)(param_11 + 0x18);
        *(undefined2 *)(plVar4 + 0x16) = 1;
        *(undefined4 *)(plVar4 + 0x17) = uVar2;
        plVar4[0x18] = 0;
        plVar4[0x19] = 0;
        *(undefined4 *)(plVar4 + 0x1a) = 0;
      }
      lVar5 = 2;
      iVar3 = -2;
    }
    uVar9 = (ulong)(uVar8 + iVar3);
    param_11 = param_11 + lVar5 * 0x10;
  } while( true );
  lVar5 = atom_getsymbolarg(0,uVar8,param_11);
  plVar4[6] = lVar5;
  if (uVar8 < 2) {
    *(undefined2 *)(plVar4 + 7) = 1;
    *(undefined4 *)(plVar4 + 8) = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xb) = 0;
    goto LAB_0052957d;
  }
  lVar5 = (ulong)(uVar8 != 0) * 0x10;
  piVar1 = (int *)(param_11 + lVar5);
  if ((int)uVar8 < 2) {
    *(undefined2 *)(plVar4 + 7) = 1;
    *(undefined4 *)(plVar4 + 8) = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xb) = 0;
    *(undefined2 *)(plVar4 + 0xc) = 1;
    *(undefined4 *)(plVar4 + 0xd) = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    *(undefined4 *)(plVar4 + 0x10) = 0;
    *(undefined2 *)(plVar4 + 0x11) = 1;
    *(undefined4 *)(plVar4 + 0x12) = 0;
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    *(undefined4 *)(plVar4 + 0x15) = 0;
LAB_00529507:
    lVar5 = atom_getsymbolarg(0,uVar8 - 4,(long)(piVar1 + 0xc));
    goto LAB_005295e5;
  }
  if (*piVar1 == 2) {
    uVar10 = fielddesc_setfloat_var
                       (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(undefined2 *)(plVar4 + 7),
                        *(undefined8 **)(param_11 + 8 + lVar5));
    if (uVar8 == 2) goto LAB_0052957d;
LAB_00529534:
    if (piVar1[4] != 2) {
      iVar3 = piVar1[6];
      *(undefined2 *)(plVar4 + 0xc) = 1;
      *(int *)(plVar4 + 0xd) = iVar3;
      uVar10 = 0;
      plVar4[0xe] = 0;
      plVar4[0xf] = 0;
      *(undefined4 *)(plVar4 + 0x10) = 0;
      if (uVar8 != 3) goto LAB_0052962d;
      goto LAB_0052959f;
    }
    uVar10 = fielddesc_setfloat_var
                       (uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (undefined2 *)(plVar4 + 0xc),*(undefined8 **)(piVar1 + 6));
    if (uVar8 == 3) goto LAB_0052959f;
LAB_0052962d:
    if (piVar1[8] == 2) {
      fielddesc_setfloat_var
                (uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (undefined2 *)(plVar4 + 0x11),*(undefined8 **)(piVar1 + 10));
    }
    else {
      iVar3 = piVar1[10];
      *(undefined2 *)(plVar4 + 0x11) = 1;
      *(int *)(plVar4 + 0x12) = iVar3;
      plVar4[0x13] = 0;
      plVar4[0x14] = 0;
      *(undefined4 *)(plVar4 + 0x15) = 0;
    }
    if (uVar8 != 4) goto LAB_00529507;
  }
  else {
    uVar2 = *(undefined4 *)(param_11 + 8 + lVar5);
    *(undefined2 *)(plVar4 + 7) = 1;
    *(undefined4 *)(plVar4 + 8) = uVar2;
    uVar10 = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xb) = 0;
    if (uVar8 != 2) goto LAB_00529534;
LAB_0052957d:
    *(undefined2 *)(plVar4 + 0xc) = 1;
    *(undefined4 *)(plVar4 + 0xd) = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    *(undefined4 *)(plVar4 + 0x10) = 0;
LAB_0052959f:
    *(undefined2 *)(plVar4 + 0x11) = 1;
    *(undefined4 *)(plVar4 + 0x12) = 0;
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    *(undefined4 *)(plVar4 + 0x15) = 0;
  }
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar5 = *plVar7 + 0x168;
LAB_005295e5:
  plVar4[0x1b] = lVar5;
  return plVar4;
}


