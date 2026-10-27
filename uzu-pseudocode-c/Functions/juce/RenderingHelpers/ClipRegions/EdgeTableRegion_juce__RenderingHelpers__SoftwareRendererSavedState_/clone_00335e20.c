// Function : clone
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00335e20
// Prototype: undefined8 * clone(undefined8 * param_1, long param_2)
// Body     : 00335e20 - 00336004


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clone()
   const */

undefined8 * __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clone
          (undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar6 = operator_new(0x40);
  *puVar6 = &PTR__EdgeTableRegion_00711be0;
  uVar10 = *(ulong *)(param_2 + 0x18);
  if (uVar10 * 4 == 0) {
    pvVar7 = (void *)0x0;
    puVar6[2] = 0;
    puVar6[3] = uVar10;
  }
  else {
    pvVar7 = malloc(uVar10 * 4);
    puVar6[2] = pvVar7;
    puVar6[3] = uVar10;
  }
  if (0 < (long)uVar10) {
    uVar10 = uVar10 & 0x3fffffffffffffff;
    pvVar8 = *(void **)(param_2 + 0x10);
    uVar14 = uVar10 + (uVar10 == 0);
    if ((7 < uVar14) &&
       (((void *)((long)pvVar8 + uVar14 * 4) <= pvVar7 ||
        ((void *)((long)pvVar7 + uVar14 * 4) <= pvVar8)))) {
      uVar13 = uVar14 & 0xfffffffffffffff8;
      uVar12 = (uVar13 - 8 >> 3) + 1;
      uVar15 = (ulong)((uint)uVar12 & 3);
      if (uVar13 - 8 < 0x18) {
        lVar9 = 0;
      }
      else {
        uVar12 = uVar12 & 0x3ffffffffffffffc;
        lVar9 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar8 + lVar9 * 4);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar8 + lVar9 * 4 + 0x10);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)((long)pvVar7 + lVar9 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar7 + lVar9 * 4 + 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((long)pvVar8 + lVar9 * 4 + 0x20);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar8 + lVar9 * 4 + 0x30);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)((long)pvVar7 + lVar9 * 4 + 0x20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar7 + lVar9 * 4 + 0x30);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((long)pvVar8 + lVar9 * 4 + 0x40);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar8 + lVar9 * 4 + 0x50);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)((long)pvVar7 + lVar9 * 4 + 0x40);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar7 + lVar9 * 4 + 0x50);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((long)pvVar8 + lVar9 * 4 + 0x60);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar8 + lVar9 * 4 + 0x70);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)((long)pvVar7 + lVar9 * 4 + 0x60);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar7 + lVar9 * 4 + 0x70);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar9 = lVar9 + 0x20;
          uVar12 = uVar12 - 4;
        } while (uVar12 != 0);
      }
      if (uVar15 != 0) {
        lVar11 = 0;
        do {
          puVar2 = (undefined8 *)((long)pvVar8 + lVar11 + lVar9 * 4);
          uVar3 = puVar2[1];
          puVar1 = (undefined8 *)((long)pvVar8 + lVar11 + lVar9 * 4 + 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (undefined8 *)((long)pvVar7 + lVar11 + lVar9 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar7 + lVar11 + lVar9 * 4 + 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar11 = lVar11 + 0x20;
        } while (uVar15 * 0x20 != lVar11);
      }
      if (uVar14 == uVar13) goto LAB_00335fd4;
      uVar10 = uVar10 - uVar13;
      pvVar7 = (void *)((long)pvVar7 + uVar13 * 4);
      pvVar8 = (void *)((long)pvVar8 + uVar13 * 4);
    }
    uVar10 = uVar10 + 1;
    lVar9 = 0;
    do {
      *(undefined4 *)((long)pvVar7 + lVar9) = *(undefined4 *)((long)pvVar8 + lVar9);
      uVar10 = uVar10 - 1;
      lVar9 = lVar9 + 4;
    } while (1 < uVar10);
  }
LAB_00335fd4:
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x31);
  *(undefined8 *)((long)puVar6 + 0x29) = *(undefined8 *)(param_2 + 0x29);
  *(undefined8 *)((long)puVar6 + 0x31) = uVar5;
  puVar6[4] = uVar3;
  puVar6[5] = uVar4;
  *param_1 = puVar6;
  *(undefined4 *)(puVar6 + 1) = 1;
  return param_1;
}


