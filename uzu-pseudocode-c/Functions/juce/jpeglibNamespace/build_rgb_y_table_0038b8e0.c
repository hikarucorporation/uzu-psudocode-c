// Function : build_rgb_y_table
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b8e0
// Prototype: undefined build_rgb_y_table(long param_1)
// Body     : 0038b8e0 - 0038b9a9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::build_rgb_y_table(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::build_rgb_y_table(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 0x268);
  uVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  uVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  lVar4 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  *(long *)(lVar1 + 0x40) = lVar4;
  lVar2 = *(long *)(lVar1 + 0x30);
  lVar1 = *(long *)(lVar1 + 0x38);
  lVar7 = 0x9d2f;
  lVar8 = 0x9646;
  lVar6 = 0x4c8b;
  lVar5 = 0;
  do {
    *(long *)(lVar2 + lVar5) = lVar6 + -0x4c8b;
    *(long *)(lVar1 + lVar5) = lVar8 + -0x9646;
    *(long *)(lVar4 + lVar5) = lVar7 + -0x1d2f;
    *(long *)(lVar2 + 8 + lVar5) = lVar6;
    *(long *)(lVar1 + 8 + lVar5) = lVar8;
    *(long *)(lVar4 + 8 + lVar5) = lVar7;
    lVar5 = lVar5 + 0x10;
    lVar7 = lVar7 + 0x3a5e;
    lVar8 = lVar8 + 0x12c8c;
    lVar6 = lVar6 + 0x9916;
  } while (lVar5 != 0x800);
  return;
}


