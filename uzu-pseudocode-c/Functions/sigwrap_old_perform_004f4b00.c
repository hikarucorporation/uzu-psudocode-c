// Function : sigwrap_old_perform
// Namespace: 
// Entry    : 004f4b00
// Prototype: long sigwrap_old_perform(long param_1)
// Body     : 004f4b00 - 004f4c83


long sigwrap_old_perform(long param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar18 = *(ulong *)(param_1 + 0x18);
  iVar16 = (int)uVar18;
  if (iVar16 != 0) {
    pfVar3 = *(float **)(param_1 + 8);
    pfVar4 = *(float **)(param_1 + 0x10);
    if ((iVar16 - 1U < 7) ||
       ((pfVar4 < pfVar3 + (ulong)(iVar16 - 1) + 1 && (pfVar3 < pfVar4 + (ulong)(iVar16 - 1) + 1))))
    {
      pfVar12 = pfVar3;
      pfVar14 = pfVar4;
    }
    else {
      uVar19 = (ulong)(iVar16 - 1U) + 1;
      uVar20 = uVar19 & 0xfffffffffffffff8;
      pfVar12 = pfVar3 + uVar20;
      pfVar14 = pfVar4 + uVar20;
      uVar18 = (ulong)(uint)(iVar16 - (int)uVar20);
      uVar13 = 0;
      do {
        pfVar1 = (float *)((long)pfVar3 + uVar13);
        fVar2 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar3 + uVar13 + 0x10);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        pfVar1 = (float *)((long)pfVar4 + uVar13);
        *pfVar1 = fVar2 - (float)(int)((int)fVar2 - (uint)(fVar2 <= 0.0));
        pfVar1[1] = fVar5 - (float)(int)((int)fVar5 - (uint)(fVar5 <= 0.0));
        pfVar1[2] = fVar6 - (float)(int)((int)fVar6 - (uint)(fVar6 <= 0.0));
        pfVar1[3] = fVar7 - (float)(int)((int)fVar7 - (uint)(fVar7 <= 0.0));
        pfVar1 = (float *)((long)pfVar4 + uVar13 + 0x10);
        *pfVar1 = fVar8 - (float)(int)((int)fVar8 - (uint)(fVar8 <= 0.0));
        pfVar1[1] = fVar9 - (float)(int)((int)fVar9 - (uint)(fVar9 <= 0.0));
        pfVar1[2] = fVar10 - (float)(int)((int)fVar10 - (uint)(fVar10 <= 0.0));
        pfVar1[3] = fVar11 - (float)(int)((int)fVar11 - (uint)(fVar11 <= 0.0));
        uVar13 = uVar13 + 0x20;
      } while ((uVar19 * 4 & 0xffffffffffffffe0) != uVar13);
      if (uVar19 == uVar20) goto LAB_004f4c7e;
    }
    iVar17 = (int)uVar18;
    iVar16 = iVar17;
    if ((uVar18 & 1) != 0) {
      fVar2 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      *pfVar14 = fVar2 - (float)(int)((int)fVar2 + -1 + (uint)(0.0 < fVar2));
      pfVar14 = pfVar14 + 1;
      iVar16 = iVar17 + -1;
    }
    if (iVar17 != 1) {
      lVar15 = 0;
      do {
        fVar2 = pfVar12[lVar15];
        pfVar14[lVar15] = fVar2 - (float)(int)((int)fVar2 + -1 + (uint)(0.0 < fVar2));
        fVar2 = pfVar12[lVar15 + 1];
        pfVar14[lVar15 + 1] = fVar2 - (float)(int)((int)fVar2 + -1 + (uint)(0.0 < fVar2));
        lVar15 = lVar15 + 2;
      } while (iVar16 != (int)lVar15);
    }
  }
LAB_004f4c7e:
  return param_1 + 0x20;
}


