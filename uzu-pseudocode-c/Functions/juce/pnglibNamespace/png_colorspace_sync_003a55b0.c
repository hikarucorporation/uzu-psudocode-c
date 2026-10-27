// Function : png_colorspace_sync
// Namespace: juce:pnglibNamespace
// Entry    : 003a55b0
// Prototype: undefined png_colorspace_sync(long param_1, long param_2)
// Body     : 003a55b0 - 003a5692


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_colorspace_sync(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_info_def*) */

void __cdecl juce::pnglibNamespace::png_colorspace_sync(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x3dc);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x3d4);
    *(undefined8 *)(param_2 + 0x78) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x398);
    uVar4 = *(undefined8 *)(param_1 + 0x3a0);
    uVar5 = *(undefined8 *)(param_1 + 0x3a8);
    uVar6 = *(undefined8 *)(param_1 + 0x3b0);
    uVar7 = *(undefined8 *)(param_1 + 0x3b8);
    uVar8 = *(undefined8 *)(param_1 + 0x3c0);
    uVar9 = *(undefined8 *)(param_1 + 0x3d0);
    *(undefined8 *)(param_2 + 100) = *(undefined8 *)(param_1 + 0x3c8);
    *(undefined8 *)(param_2 + 0x6c) = uVar9;
    *(undefined8 *)(param_2 + 0x54) = uVar7;
    *(undefined8 *)(param_2 + 0x5c) = uVar8;
    *(undefined8 *)(param_2 + 0x44) = uVar5;
    *(undefined8 *)(param_2 + 0x4c) = uVar6;
    *(undefined8 *)(param_2 + 0x34) = uVar3;
    *(undefined8 *)(param_2 + 0x3c) = uVar4;
    uVar1 = *(ushort *)(param_2 + 0x7e);
    uVar2 = *(uint *)(param_2 + 8);
    if ((uVar1 & 0x8000) == 0) {
      uVar10 = (uVar1 & 0x80) * 0x10 + (uVar1 & 2) * 2;
      if ((uVar1 & 1) == 0) {
        uVar10 = uVar10 | uVar2 & 0xfffff7fa;
      }
      else {
        uVar10 = uVar10 | uVar2 & 0xfffff7fb | 1;
      }
      *(uint *)(param_2 + 8) = uVar10;
    }
    else {
      *(uint *)(param_2 + 8) = uVar2 & 0xffffe7fa;
      uVar10 = *(uint *)(param_2 + 0x11c);
      if ((uVar10 & 0x10) != 0) {
        if (*(void **)(param_2 + 0x80) != (void *)0x0) {
          free(*(void **)(param_2 + 0x80));
        }
        if (*(void **)(param_2 + 0x88) != (void *)0x0) {
          free(*(void **)(param_2 + 0x88));
        }
        *(undefined8 *)(param_2 + 0x80) = 0;
        *(undefined8 *)(param_2 + 0x88) = 0;
        *(uint *)(param_2 + 8) = uVar2 & 0xffffe7fa;
      }
      *(uint *)(param_2 + 0x11c) = uVar10 & 0xffffffef;
    }
  }
  return;
}


