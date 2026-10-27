// Function : fexpr_tilde_set
// Namespace: 
// Entry    : 00584bb0
// Prototype: undefined fexpr_tilde_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12)
// Body     : 00584bb0 - 00584eea


void fexpr_tilde_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,uint param_11,long param_12)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar13;
  undefined8 uVar12;
  
  if (param_11 == 0) {
    return;
  }
  puVar3 = (undefined8 *)atom_getsymbolarg(0,param_11,param_12);
  uVar12 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  pcVar7 = (char *)*puVar3;
  cVar1 = *pcVar7;
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_9 + 0x38);
    if (iVar2 < (int)param_11) {
      uVar12 = post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,"fexpr~.set: only %d outlets available");
      post(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "fexpr~.set: the extra set values are ignored");
      iVar2 = *(int *)(param_9 + 0x38);
    }
    if ((int)param_11 < 1) {
      return;
    }
    if (iVar2 < 1) {
      return;
    }
    uVar6 = 0;
    do {
      uVar11 = atom_getfloatarg((int)uVar6,param_11,param_12);
      *(undefined4 *)
       (*(long *)(param_9 + 0x22b8 + uVar6 * 8) + -4 + (long)*(int *)(param_9 + 0x28f8) * 4) =
           uVar11;
      uVar6 = uVar6 + 1;
      if (param_11 <= uVar6) {
        return;
      }
    } while ((long)uVar6 < (long)*(int *)(param_9 + 0x38));
    return;
  }
  uVar11 = extraout_XMM0_Da;
  uVar13 = extraout_XMM0_Db;
  if (cVar1 == 'y') {
    if (pcVar7[1] == '\0') {
      iVar2 = 0;
      if (*(int *)(param_9 + 0x38) < 1) {
LAB_00584da7:
        pcVar7 = "fexpr~.set: only %d outlets";
LAB_00584eca:
        post(CONCAT44(uVar13,uVar11),param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar7)
        ;
        return;
      }
    }
    else {
      lVar4 = strtol(pcVar7 + 1,(char **)0x0,10);
      if ((int)lVar4 == 0) {
        pcVar7 = "fexpr~.set: bad set y vector number";
        uVar11 = extraout_XMM0_Da_01;
        uVar13 = extraout_XMM0_Db_01;
LAB_00584dc3:
        uVar12 = post(CONCAT44(uVar13,uVar11),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,pcVar7);
        goto LAB_00584dca;
      }
      iVar2 = (int)lVar4 + -1;
      uVar11 = extraout_XMM0_Da_01;
      uVar13 = extraout_XMM0_Db_01;
      if (*(int *)(param_9 + 0x38) <= iVar2) goto LAB_00584da7;
    }
    iVar9 = param_11 - 1;
    if (iVar9 != 0) {
      if (*(int *)(param_9 + 0x28f8) < iVar9) {
        uVar12 = post(CONCAT44(uVar13,uVar11),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,"fexpr~-set: %d set values larger than vector size(%d)");
        post(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "fexpr~.set: only the first %d values will be set");
        iVar9 = *(int *)(param_9 + 0x28f8);
      }
      if (0 < iVar9) {
        iVar8 = -1;
        iVar5 = 1;
        do {
          uVar11 = atom_getfloatarg(iVar5,param_11,param_12);
          *(undefined4 *)
           (*(long *)(param_9 + 0x22b8 + (long)iVar2 * 8) +
           (long)(*(int *)(param_9 + 0x28f8) + iVar8) * 4) = uVar11;
          iVar8 = iVar8 + -1;
          bVar10 = iVar5 != iVar9;
          iVar5 = iVar5 + 1;
        } while (bVar10);
      }
      return;
    }
  }
  else {
    if (cVar1 != 'x') {
LAB_00584dca:
      uVar12 = post(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "fexpr~: set val ...");
      pcVar7 = "fexpr~: set {xy}[#] val ...";
      goto LAB_00584ddf;
    }
    if (pcVar7[1] == '\0') {
      iVar2 = 0;
    }
    else {
      lVar4 = strtol(pcVar7 + 1,(char **)0x0,10);
      iVar2 = (int)lVar4;
      if (iVar2 == 0) {
        pcVar7 = "fexpr~.set: bad set x vector number";
        uVar11 = extraout_XMM0_Da_00;
        uVar13 = extraout_XMM0_Db_00;
        goto LAB_00584dc3;
      }
      uVar11 = extraout_XMM0_Da_00;
      uVar13 = extraout_XMM0_Db_00;
      if (99 < iVar2) {
        pcVar7 = "fexpr~.set: no more than %d inlets";
        goto LAB_00584eca;
      }
      iVar2 = iVar2 + -1;
    }
    if (*(long *)(param_9 + 0x6a0 + (long)iVar2 * 0x20) != 0x12) {
      pcVar7 = "fexpr~-set: no signal at inlet %d";
      goto LAB_00584eca;
    }
    iVar9 = param_11 - 1;
    if (iVar9 != 0) {
      if (*(int *)(param_9 + 0x28f8) < iVar9) {
        uVar12 = post(CONCAT44(uVar13,uVar11),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,"fexpr~.set: %d set values larger than vector size(%d)");
        post(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "fexpr~.set: only the first %d values will be set");
        iVar9 = *(int *)(param_9 + 0x28f8);
      }
      if (iVar9 < 1) {
        return;
      }
      iVar8 = -1;
      iVar5 = 1;
      do {
        uVar11 = atom_getfloatarg(iVar5,param_11,param_12);
        *(undefined4 *)
         (*(long *)(param_9 + 0x1f98 + (long)iVar2 * 8) +
         (long)(*(int *)(param_9 + 0x28f8) + iVar8) * 4) = uVar11;
        iVar8 = iVar8 + -1;
        bVar10 = iVar5 != iVar9;
        iVar5 = iVar5 + 1;
      } while (bVar10);
      return;
    }
  }
  uVar12 = CONCAT44(uVar13,uVar11);
  pcVar7 = "fexpr~-set: no argument to set";
LAB_00584ddf:
  post(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar7);
  return;
}


