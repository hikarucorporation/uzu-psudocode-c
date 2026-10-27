// Function : rgb_ycc_start
// Namespace: juce:jpeglibNamespace
// Entry    : 00375100
// Prototype: undefined rgb_ycc_start(long param_1)
// Body     : 00375100 - 003751ba


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb_ycc_start(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::rgb_ycc_start(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = *(long *)(param_1 + 0x208);
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x4000);
  *(long *)(lVar3 + 0x10) = lVar1;
  plVar2 = (long *)(lVar1 + 0x3800);
  lVar6 = 0x807fff;
  lVar7 = 0x8000;
  lVar8 = 0;
  lVar9 = 0;
  lVar3 = 0;
  lVar1 = 0;
  lVar4 = 0;
  lVar5 = 0;
  do {
    plVar2[-0x700] = lVar8;
    plVar2[-0x600] = lVar9;
    plVar2[-0x500] = lVar7;
    plVar2[-0x400] = lVar3;
    plVar2[-0x300] = lVar1;
    plVar2[-0x200] = lVar6;
    plVar2[-0x100] = lVar4;
    *plVar2 = lVar5;
    lVar5 = lVar5 + -0x14d1;
    plVar2 = plVar2 + 1;
    lVar4 = lVar4 + -0x6b2f;
    lVar6 = lVar6 + 0x8000;
    lVar1 = lVar1 + -0x54ce;
    lVar3 = lVar3 + -0x2b32;
    lVar7 = lVar7 + 0x1d2f;
    lVar9 = lVar9 + 0x9646;
    lVar8 = lVar8 + 0x4c8b;
  } while (lVar5 != -0x14d100);
  return;
}


