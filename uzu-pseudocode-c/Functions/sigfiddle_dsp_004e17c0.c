// Function : sigfiddle_dsp
// Namespace: 
// Entry    : 004e17c0
// Prototype: undefined sigfiddle_dsp(long param_1, undefined8 * param_2)
// Body     : 004e17c0 - 004e18eb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigfiddle_dsp(long param_1,undefined8 *param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 in_R9;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined8 in_XMM7_Qa;
  undefined8 in_stack_00000008;
  
  piVar2 = (int *)*param_2;
  fVar1 = (float)piVar2[4];
  *(float *)(param_1 + 0x6c) = fVar1;
  uVar6 = DAT_005d94d8;
  uVar9 = -(uint)(0.0 < *(float *)(param_1 + 0x324));
  auVar17._4_4_ = (float)*(int *)(param_1 + 0x31c);
  auVar17._0_4_ = (float)*(int *)(param_1 + 0x328);
  auVar17._8_8_ = 0;
  auVar17 = maxps(ZEXT816(0),auVar17);
  dVar5 = (double)auVar17._0_4_;
  fVar3 = auVar17._4_4_;
  uVar14 = ~uVar9 & DAT_005d94d8;
  *(int *)(param_1 + 0x31c) = (int)fVar3;
  *(uint *)(param_1 + 0x324) = uVar14 | (uint)*(float *)(param_1 + 0x324) & uVar9;
  dVar4 = (double)fVar1 * DAT_00651e50;
  dVar15 = _DAT_005d9000 / (double)*(int *)(param_1 + 0x68);
  dVar16 = dVar15 * dVar4 * dVar5;
  iVar11 = (int)dVar16;
  iVar12 = (int)(dVar15 * dVar4 * (double)fVar3);
  auVar13._0_4_ = -(uint)(iVar11 < _DAT_006525d0);
  auVar13._4_4_ = auVar13._0_4_;
  auVar13._8_4_ = -(uint)(iVar12 < _UNK_006525d4);
  auVar13._12_4_ = -(uint)(iVar12 < _UNK_006525d4);
  uVar9 = movmskpd((int)fVar3,auVar13);
  iVar8 = iVar12;
  if ((uVar9 & 2) == 0) {
    iVar8 = 0x13;
  }
  *(int *)(param_1 + 800) = iVar8;
  uVar14 = -(uint)(0.0 < *(float *)(param_1 + 0x330));
  uVar10 = (uint)*(float *)(param_1 + 0x330) & uVar14;
  uVar14 = ~uVar14 & uVar6 | uVar10;
  *(int *)(param_1 + 0x328) = (int)auVar17._0_4_;
  *(uint *)(param_1 + 0x330) = uVar14;
  iVar8 = iVar11;
  if ((uVar9 & 1) == 0) {
    iVar8 = 0x13;
  }
  iVar7 = 1;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  *(int *)(param_1 + 0x32c) = iVar7;
  dsp_add((ulong)uVar10,(ulong)uVar6,CONCAT44(iVar12,iVar11),(ulong)uVar14,dVar16,
          CONCAT44(fVar3,fVar3),dVar5,in_XMM7_Qa,fiddle_perform,3,*(undefined8 *)(piVar2 + 2),
          param_1,(long)*piVar2,in_R9,in_stack_00000008);
  return;
}


