// Function : block_set
// Namespace: 
// Entry    : 004f5ec0
// Prototype: undefined block_set(ulong param_1, undefined8 param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f5ec0 - 004f605d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void block_set(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,char *param_10,
              undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double dVar15;
  undefined4 uVar16;
  
  fVar1 = (float)param_3;
  fVar13 = (float)param_1;
  uVar10 = (uint)(float)param_2;
  uVar2 = canvas_suspend_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar9 = 1;
  if ((int)uVar10 < 1) {
    uVar10 = 1;
  }
  dVar14 = 0.0;
  dVar15 = (double)(param_3 & 0xffffffff);
  if (fVar1 <= 0.0) {
    uVar11 = 1;
  }
  else {
    dVar14 = (double)(param_3 & 0xffffffff);
    if (DAT_005d9038 <= fVar1) {
      uVar9 = (uint)fVar1;
      uVar11 = 1;
    }
    else {
      dVar14 = (double)fVar1;
      dVar15 = _DAT_005d9000 / dVar14;
      uVar11 = (uint)dVar15;
    }
  }
  uVar16 = 0;
  iVar12 = (int)fVar13;
  uVar6 = 0xffffffff;
  uVar8 = (ulong)uVar10;
  uVar3 = uVar10;
  do {
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar5;
    uVar3 = uVar3 >> 1;
    uVar7 = (uint)uVar8;
    uVar8 = (ulong)uVar3;
  } while (1 < uVar7);
  if (uVar10 != 1 << ((byte)uVar5 & 0x1f)) {
    param_10 = "block~: overlap not a power of 2";
    pd_error(dVar14,dVar15,param_1 & 0xffffffff,param_4,param_5,param_6,param_7,param_8,param_9,
             "block~: overlap not a power of 2",uVar8,uVar6,param_13,param_14);
    uVar10 = 1;
    uVar8 = extraout_RDX;
    dVar14 = extraout_XMM0_Qa;
  }
  if ((int)uVar11 < 1) {
    uVar6 = 0;
    if (uVar11 != 1) goto LAB_004f5fb8;
  }
  else {
    uVar6 = 0xffffffff;
    uVar8 = (ulong)uVar11;
    uVar3 = uVar11;
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar5;
      uVar3 = (int)uVar3 >> 1;
      uVar7 = (uint)uVar8;
      uVar8 = (ulong)uVar3;
    } while (1 < uVar7);
    if (uVar11 != 1 << ((byte)uVar5 & 0x1f)) {
LAB_004f5fb8:
      param_10 = "block~: downsampling not a power of 2";
      pd_error(dVar14,dVar15,CONCAT44(uVar16,fVar13),param_4,param_5,param_6,param_7,param_8,param_9
               ,"block~: downsampling not a power of 2",uVar8,uVar6,param_13,param_14);
      uVar11 = 1;
      uVar8 = extraout_RDX_00;
      dVar14 = extraout_XMM0_Qa_00;
    }
  }
  if ((int)uVar9 < 1) {
    uVar6 = 0;
    if (uVar9 == 1) goto LAB_004f600d;
  }
  else {
    uVar6 = 0xffffffff;
    uVar8 = (ulong)uVar9;
    uVar3 = uVar9;
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar5;
      uVar3 = (int)uVar3 >> 1;
      uVar7 = (uint)uVar8;
      uVar8 = (ulong)uVar3;
    } while (1 < uVar7);
    if (uVar9 == 1 << ((byte)uVar5 & 0x1f)) goto LAB_004f600d;
  }
  param_10 = "block~: upsampling not a power of 2";
  pd_error(dVar14,dVar15,CONCAT44(uVar16,fVar13),param_4,param_5,param_6,param_7,param_8,param_9,
           "block~: upsampling not a power of 2",uVar8,uVar6,param_13,param_14);
  uVar9 = 1;
  uVar8 = extraout_RDX_01;
  dVar14 = extraout_XMM0_Qa_01;
LAB_004f600d:
  iVar4 = 0;
  if (-1 < iVar12) {
    iVar4 = iVar12;
  }
  *(int *)(param_9 + 0x30) = iVar4;
  *(uint *)(param_9 + 0x34) = uVar10;
  *(uint *)(param_9 + 0x58) = uVar9;
  *(uint *)(param_9 + 0x5c) = uVar11;
  canvas_resume_dsp(dVar14,dVar15,CONCAT44(uVar16,fVar13),param_4,param_5,param_6,param_7,param_8,
                    (ulong)uVar2,param_10,uVar8,uVar6,param_13,param_14);
  return;
}


