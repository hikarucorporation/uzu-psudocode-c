// Function : max_perform
// Namespace: 
// Entry    : 005889d0
// Prototype: long max_perform(long param_1)
// Body     : 005889d0 - 00588bbe


/* WARNING: Removing unreachable block (ram,0x00588bbd) */

long max_perform(long param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar9 = *(ulong *)(param_1 + 0x20);
  iVar11 = (int)uVar9;
  if (iVar11 == 0) goto LAB_00588b9b;
  pfVar2 = *(float **)(param_1 + 0x18);
  pfVar3 = *(float **)(param_1 + 8);
  pfVar6 = *(float **)(param_1 + 0x10);
  if (6 < iVar11 - 1U) {
    uVar10 = (ulong)(iVar11 - 1);
    if ((pfVar3 + uVar10 + 1 <= pfVar2 || pfVar2 + uVar10 + 1 <= pfVar3) &&
       (pfVar6 + uVar10 + 1 <= pfVar2 || pfVar2 + uVar10 + 1 <= pfVar6)) {
      uVar9 = (ulong)(iVar11 - 1U) + 1;
      uVar10 = uVar9 & 0xfffffffffffffff8;
      uVar13 = (uVar10 - 8 >> 3) + 1;
      if (uVar10 - 8 == 0) {
        lVar4 = 0;
LAB_00588b75:
        auVar15 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar4),
                        *(undefined1 (*) [16])(pfVar3 + lVar4));
        auVar14 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar4 + 4),
                        *(undefined1 (*) [16])(pfVar3 + lVar4 + 4));
        *(undefined1 (*) [16])(pfVar2 + lVar4) = auVar15;
        *(undefined1 (*) [16])(pfVar2 + lVar4 + 4) = auVar14;
      }
      else {
        uVar5 = uVar13 & 0xfffffffffffffffe;
        lVar4 = 0;
        do {
          auVar15 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar4),
                          *(undefined1 (*) [16])(pfVar3 + lVar4));
          auVar14 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar4 + 4),
                          *(undefined1 (*) [16])(pfVar3 + lVar4 + 4));
          *(undefined1 (*) [16])(pfVar2 + lVar4) = auVar15;
          *(undefined1 (*) [16])(pfVar2 + lVar4 + 4) = auVar14;
          auVar15 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar4 + 8),
                          *(undefined1 (*) [16])(pfVar3 + lVar4 + 8));
          auVar14 = maxps(*(undefined1 (*) [16])(pfVar6 + lVar4 + 0xc),
                          *(undefined1 (*) [16])(pfVar3 + lVar4 + 0xc));
          *(undefined1 (*) [16])(pfVar2 + lVar4 + 8) = auVar15;
          *(undefined1 (*) [16])(pfVar2 + lVar4 + 0xc) = auVar14;
          lVar4 = lVar4 + 0x10;
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
        if ((uVar13 & 1) != 0) goto LAB_00588b75;
      }
      if (uVar9 == uVar10) goto LAB_00588b9b;
      pfVar3 = pfVar3 + uVar10;
      pfVar6 = pfVar6 + uVar10;
      uVar9 = (ulong)(uint)(iVar11 - (int)uVar10);
      pfVar2 = pfVar2 + uVar10;
    }
  }
  uVar12 = (uint)uVar9;
  uVar8 = uVar12 - 1;
  if ((uVar9 & 3) != 0) {
    uVar7 = 0;
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      if (fVar1 <= *pfVar6) {
        fVar1 = *pfVar6;
      }
      pfVar6 = pfVar6 + 1;
      *pfVar2 = fVar1;
      pfVar2 = pfVar2 + 1;
      uVar7 = uVar7 + 1;
    } while ((uVar12 & 3) != uVar7);
    uVar12 = uVar12 - uVar7;
  }
  if (2 < uVar8) {
    lVar4 = 0;
    do {
      fVar1 = pfVar3[lVar4];
      if (pfVar3[lVar4] <= pfVar6[lVar4]) {
        fVar1 = pfVar6[lVar4];
      }
      pfVar2[lVar4] = fVar1;
      fVar1 = pfVar3[lVar4 + 1];
      if (pfVar3[lVar4 + 1] <= pfVar6[lVar4 + 1]) {
        fVar1 = pfVar6[lVar4 + 1];
      }
      pfVar2[lVar4 + 1] = fVar1;
      fVar1 = pfVar3[lVar4 + 2];
      if (pfVar3[lVar4 + 2] <= pfVar6[lVar4 + 2]) {
        fVar1 = pfVar6[lVar4 + 2];
      }
      pfVar2[lVar4 + 2] = fVar1;
      fVar1 = pfVar3[lVar4 + 3];
      if (pfVar3[lVar4 + 3] <= pfVar6[lVar4 + 3]) {
        fVar1 = pfVar6[lVar4 + 3];
      }
      pfVar2[lVar4 + 3] = fVar1;
      lVar4 = lVar4 + 4;
    } while (uVar12 != (uint)lVar4);
  }
LAB_00588b9b:
  return param_1 + 0x28;
}


