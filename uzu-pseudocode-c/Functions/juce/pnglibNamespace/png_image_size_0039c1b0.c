// Function : png_image_size
// Namespace: juce:pnglibNamespace
// Entry    : 0039c1b0
// Prototype: long png_image_size(long param_1)
// Body     : 0039c1b0 - 0039c44d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_image_size(juce::pnglibNamespace::png_struct_def*) */

long __cdecl juce::pnglibNamespace::png_image_size(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (0x7fff < *(ulong *)(param_1 + 0x128)) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(param_1 + 0x11c);
  uVar4 = (ulong)uVar1;
  if (0x7fff < uVar1) {
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0x184) == '\0') {
    return (*(ulong *)(param_1 + 0x128) + 1) * uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x118);
  uVar7 = (ulong)uVar2;
  uVar6 = (ulong)*(byte *)(param_1 + 0x18a);
  uVar5 = uVar2 + 7;
  if (uVar6 < 8) {
    if (uVar5 < 8) {
      lVar3 = 0;
      if (uVar2 + 3 < 8) goto LAB_0039c256;
LAB_0039c373:
      lVar3 = lVar3 + (uVar4 + 7 >> 3) * (((uVar2 + 3 >> 3) * uVar6 + 7 >> 3) + 1);
LAB_0039c397:
      lVar3 = lVar3 + (uVar4 + 3 >> 3) * (((uVar2 + 3 >> 2) * uVar6 + 7 >> 3) + 1);
      if (3 < uVar2 + 1) goto LAB_0039c3c6;
LAB_0039c26c:
      if (1 < uVar2 + 1) goto LAB_0039c3ea;
      if (1 < uVar2) goto LAB_0039c413;
LAB_0039c27f:
      if (uVar7 == 0) {
        return lVar3;
      }
    }
    else {
      lVar3 = (uVar4 + 7 >> 3) * (((uVar5 >> 3) * uVar6 + 7 >> 3) + 1);
      if (7 < uVar2 + 3) goto LAB_0039c373;
LAB_0039c256:
      if (3 < uVar2 + 3) goto LAB_0039c397;
      if (uVar2 + 1 < 4) goto LAB_0039c26c;
LAB_0039c3c6:
      lVar3 = lVar3 + (uVar4 + 3 >> 2) * (((uVar2 + 1 >> 2) * uVar6 + 7 >> 3) + 1);
LAB_0039c3ea:
      lVar3 = lVar3 + (ulong)(uVar1 + 1 >> 2) * (((uVar2 + 1 >> 1) * uVar6 + 7 >> 3) + 1);
      if (uVar2 < 2) goto LAB_0039c27f;
LAB_0039c413:
      lVar3 = lVar3 + (ulong)(uVar1 + 1 >> 1) * (((uVar2 >> 1) * uVar6 + 7 >> 3) + 1);
    }
    uVar7 = uVar7 * uVar6 + 7 >> 3;
    goto LAB_0039c440;
  }
  uVar6 = (ulong)(*(byte *)(param_1 + 0x18a) >> 3);
  if (uVar5 < 8) {
    lVar3 = 0;
    if (7 < uVar2 + 3) goto LAB_0039c211;
LAB_0039c2ae:
    if (3 < uVar2 + 3) goto LAB_0039c2b3;
  }
  else {
    lVar3 = (uVar4 + 7 >> 3) * ((uVar5 >> 3) * uVar6 + 1);
    if (uVar2 + 3 < 8) goto LAB_0039c2ae;
LAB_0039c211:
    lVar3 = lVar3 + (uVar4 + 7 >> 3) * ((uVar2 + 3 >> 3) * uVar6 + 1);
LAB_0039c2b3:
    lVar3 = lVar3 + (uVar4 + 3 >> 3) * ((uVar2 + 3 >> 2) * uVar6 + 1);
  }
  uVar5 = uVar2 + 1;
  if (uVar5 < 4) {
    if (1 < uVar5) goto LAB_0039c307;
    if (1 < uVar2) goto LAB_0039c324;
LAB_0039c2e1:
    if (uVar7 == 0) {
      return lVar3;
    }
  }
  else {
    lVar3 = lVar3 + (uVar4 + 3 >> 2) * ((uVar5 >> 2) * uVar6 + 1);
LAB_0039c307:
    lVar3 = lVar3 + (ulong)(uVar1 + 1 >> 2) * ((uVar5 >> 1) * uVar6 + 1);
    if (uVar2 < 2) goto LAB_0039c2e1;
LAB_0039c324:
    lVar3 = lVar3 + (ulong)(uVar1 + 1 >> 1) * ((uVar2 >> 1) * uVar6 + 1);
  }
  uVar7 = uVar7 * uVar6;
LAB_0039c440:
  return lVar3 + (ulong)(uVar1 >> 1) * (uVar7 + 1);
}


