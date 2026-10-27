// Function : scalarmax_perf8
// Namespace: 
// Entry    : 00588e30
// Prototype: long scalarmax_perf8(long param_1)
// Body     : 00588e30 - 00588ece


long scalarmax_perf8(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar10 = *(uint *)(param_1 + 0x20);
  if (uVar10 != 0) {
    uVar2 = **(undefined4 **)(param_1 + 0x10);
    pauVar8 = *(undefined1 (**) [16])(param_1 + 8);
    pauVar9 = *(undefined1 (**) [16])(param_1 + 0x18);
    uVar1 = uVar10 - 8;
    if ((uVar1 & 8) == 0) {
      auVar13 = pauVar8[1];
      auVar12._4_4_ = uVar2;
      auVar12._0_4_ = uVar2;
      auVar12._8_4_ = uVar2;
      auVar12._12_4_ = uVar2;
      auVar12 = maxps(*pauVar8,auVar12);
      *pauVar9 = auVar12;
      auVar3._4_4_ = uVar2;
      auVar3._0_4_ = uVar2;
      auVar3._8_4_ = uVar2;
      auVar3._12_4_ = uVar2;
      auVar13 = maxps(auVar13,auVar3);
      pauVar9[1] = auVar13;
      pauVar8 = pauVar8 + 2;
      pauVar9 = pauVar9 + 2;
      uVar10 = uVar1;
    }
    if (7 < uVar1) {
      lVar11 = 0;
      do {
        auVar13 = *(undefined1 (*) [16])(pauVar8[1] + lVar11 * 4);
        auVar4._4_4_ = uVar2;
        auVar4._0_4_ = uVar2;
        auVar4._8_4_ = uVar2;
        auVar4._12_4_ = uVar2;
        auVar12 = maxps(*(undefined1 (*) [16])(*pauVar8 + lVar11 * 4),auVar4);
        *(undefined1 (*) [16])(*pauVar9 + lVar11 * 4) = auVar12;
        auVar5._4_4_ = uVar2;
        auVar5._0_4_ = uVar2;
        auVar5._8_4_ = uVar2;
        auVar5._12_4_ = uVar2;
        auVar13 = maxps(auVar13,auVar5);
        *(undefined1 (*) [16])(pauVar9[1] + lVar11 * 4) = auVar13;
        auVar13 = *(undefined1 (*) [16])(pauVar8[3] + lVar11 * 4);
        auVar6._4_4_ = uVar2;
        auVar6._0_4_ = uVar2;
        auVar6._8_4_ = uVar2;
        auVar6._12_4_ = uVar2;
        auVar12 = maxps(*(undefined1 (*) [16])(pauVar8[2] + lVar11 * 4),auVar6);
        *(undefined1 (*) [16])(pauVar9[2] + lVar11 * 4) = auVar12;
        auVar7._4_4_ = uVar2;
        auVar7._0_4_ = uVar2;
        auVar7._8_4_ = uVar2;
        auVar7._12_4_ = uVar2;
        auVar13 = maxps(auVar13,auVar7);
        *(undefined1 (*) [16])(pauVar9[3] + lVar11 * 4) = auVar13;
        lVar11 = lVar11 + 0x10;
      } while (uVar10 != (uint)lVar11);
    }
  }
  return param_1 + 0x28;
}


