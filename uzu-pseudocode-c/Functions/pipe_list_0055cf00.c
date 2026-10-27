// Function : pipe_list
// Namespace: 
// Entry    : 0055cf00
// Prototype: undefined pipe_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined * param_10, int param_11, ulong * param_12, char * param_13, undefined8 param_14)
// Body     : 0055cf00 - 0055d0e7


void pipe_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined *param_10,int param_11,ulong *param_12,char *param_13,
              undefined8 param_14)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  double *pdVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 *puVar14;
  char *pcVar15;
  long lVar16;
  undefined4 *puVar17;
  long *plVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  int iVar19;
  float fVar20;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar21;
  ulong uVar22;
  
  puVar12 = param_12;
  puVar8 = getbytes((long)*(int *)(param_9 + 0x30) * 8 + 0x20);
  iVar2 = *(int *)(param_9 + 0x30);
  pvVar9 = getbytes((long)*(int *)(param_9 + 0x34) * 0x18);
  uVar22 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  puVar8[3] = pvVar9;
  uVar21 = extraout_RDX;
  pcVar15 = param_10;
  if (iVar2 < param_11) {
    if ((int)param_12[(long)iVar2 * 2] == 1) {
      uVar22 = (ulong)(uint)param_12[(long)iVar2 * 2 + 1];
      *(uint *)(param_9 + 0x38) = (uint)param_12[(long)iVar2 * 2 + 1];
    }
    else {
      pcVar15 = "pipe: symbol or pointer in time inlet";
      uVar22 = pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,param_9,"pipe: symbol or pointer in time inlet",
                        extraout_RDX,puVar12,param_13,param_14);
      uVar21 = extraout_RDX_00;
      param_10 = pcVar15;
    }
    pcVar15 = param_10;
    param_11 = iVar2;
  }
  if (0 < param_11) {
    puVar17 = *(undefined4 **)(param_9 + 0x48);
    plVar18 = (long *)(*(long *)(param_9 + 0x40) + 8);
    do {
      iVar19 = (int)plVar18[-1];
      if (iVar19 == 3) {
        uVar21 = gpointer_unset(uVar22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (long)puVar17,pcVar15,uVar21,puVar12,param_13,param_14);
        if ((int)*param_12 == 3) {
          puVar12 = (ulong *)param_12[1];
          uVar3 = puVar12[2];
          *(ulong *)(puVar17 + 4) = uVar3;
          uVar4 = *(undefined4 *)((long)puVar12 + 4);
          uVar6 = *puVar12;
          uVar22 = *puVar12;
          uVar7 = puVar12[1];
          uVar5 = *(undefined4 *)((long)puVar12 + 0xc);
          *puVar17 = (int)*puVar12;
          puVar17[1] = uVar4;
          puVar17[2] = (int)uVar7;
          puVar17[3] = uVar5;
          uVar21 = extraout_RDX_03;
          if (uVar3 != 0) {
            *(int *)(uVar3 + 0xc) = *(int *)(uVar3 + 0xc) + 1;
            uVar22 = uVar6;
          }
        }
        else {
          pcVar15 = "pipe: bad pointer";
          uVar22 = pd_error(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            "pipe: bad pointer",extraout_RDX_03,puVar12,param_13,param_14);
          uVar21 = extraout_RDX_04;
        }
        puVar17 = puVar17 + 6;
      }
      else if (iVar19 == 2) {
        lVar16 = atom_getsymbol((int *)param_12);
        uVar22 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
        *plVar18 = lVar16;
        uVar21 = extraout_RDX_01;
      }
      else if (iVar19 == 1) {
        iVar19 = atom_getfloat((int *)param_12);
        uVar22 = CONCAT44(extraout_XMM0_Db_01,iVar19);
        *(int *)plVar18 = iVar19;
        uVar21 = extraout_RDX_02;
      }
      param_12 = param_12 + 2;
      plVar18 = plVar18 + 3;
      param_11 = param_11 + -1;
    } while (param_11 != 0);
  }
  if (0 < iVar2) {
    puVar13 = (undefined8 *)puVar8[3];
    puVar14 = *(undefined8 **)(param_9 + 0x48);
    puVar10 = (undefined8 *)(*(long *)(param_9 + 0x40) + 8);
    lVar16 = 0;
    do {
      while (*(int *)(puVar10 + -1) == 3) {
        if (puVar14[2] != 0) {
          piVar1 = (int *)(puVar14[2] + 0xc);
          *piVar1 = *piVar1 + 1;
        }
        puVar8[lVar16 + 4] = puVar13;
        puVar13[2] = puVar14[2];
        uVar21 = puVar14[1];
        *puVar13 = *puVar14;
        puVar13[1] = uVar21;
        puVar13 = puVar13 + 3;
        puVar14 = puVar14 + 3;
        lVar16 = lVar16 + 1;
        puVar10 = puVar10 + 3;
        if (iVar2 == (int)lVar16) goto LAB_0055d0a0;
      }
      puVar8[lVar16 + 4] = *puVar10;
      lVar16 = lVar16 + 1;
      puVar10 = puVar10 + 3;
    } while (iVar2 != (int)lVar16);
  }
LAB_0055d0a0:
  puVar8[1] = *(undefined8 *)(param_9 + 0x50);
  *(undefined8 **)(param_9 + 0x50) = puVar8;
  puVar8[2] = param_9;
  pdVar11 = (double *)clock_new(puVar8,hang_tick);
  *puVar8 = pdVar11;
  fVar20 = 0.0;
  if (0.0 <= *(float *)(param_9 + 0x38)) {
    fVar20 = *(float *)(param_9 + 0x38);
  }
  clock_delay((double)fVar20,pdVar11);
  return;
}


