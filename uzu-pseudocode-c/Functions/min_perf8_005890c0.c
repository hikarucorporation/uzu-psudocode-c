// Function : min_perf8
// Namespace: 
// Entry    : 005890c0
// Prototype: long min_perf8(long param_1)
// Body     : 005890c0 - 00589172


long min_perf8(long param_1)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar5 != 0) {
    pauVar2 = *(undefined1 (**) [16])(param_1 + 0x18);
    pauVar3 = *(undefined1 (**) [16])(param_1 + 8);
    pauVar4 = *(undefined1 (**) [16])(param_1 + 0x10);
    uVar1 = uVar5 - 8;
    if ((uVar1 & 8) == 0) {
      auVar8 = minps(*pauVar4,*pauVar3);
      auVar7 = minps(pauVar4[1],pauVar3[1]);
      *pauVar2 = auVar8;
      pauVar2[1] = auVar7;
      pauVar3 = pauVar3 + 2;
      pauVar4 = pauVar4 + 2;
      pauVar2 = pauVar2 + 2;
      uVar5 = uVar1;
    }
    if (7 < uVar1) {
      lVar6 = 0;
      do {
        auVar8 = minps(*(undefined1 (*) [16])(*pauVar4 + lVar6 * 4),
                       *(undefined1 (*) [16])(*pauVar3 + lVar6 * 4));
        auVar7 = minps(*(undefined1 (*) [16])(pauVar4[1] + lVar6 * 4),
                       *(undefined1 (*) [16])(pauVar3[1] + lVar6 * 4));
        *(undefined1 (*) [16])(*pauVar2 + lVar6 * 4) = auVar8;
        *(undefined1 (*) [16])(pauVar2[1] + lVar6 * 4) = auVar7;
        auVar8 = minps(*(undefined1 (*) [16])(pauVar4[2] + lVar6 * 4),
                       *(undefined1 (*) [16])(pauVar3[2] + lVar6 * 4));
        auVar7 = minps(*(undefined1 (*) [16])(pauVar4[3] + lVar6 * 4),
                       *(undefined1 (*) [16])(pauVar3[3] + lVar6 * 4));
        *(undefined1 (*) [16])(pauVar2[2] + lVar6 * 4) = auVar8;
        *(undefined1 (*) [16])(pauVar2[3] + lVar6 * 4) = auVar7;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 != (uint)lVar6);
    }
  }
  return param_1 + 0x28;
}


