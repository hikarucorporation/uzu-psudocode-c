// Function : clone
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1960
// Prototype: undefined8 * clone(undefined8 * param_1, long param_2)
// Body     : 003b1960 - 003b1a03


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clone()
   const */

undefined8 * __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clone
          (undefined8 *param_1,long param_2)

{
  uint uVar1;
  void *__src;
  undefined8 *puVar2;
  void *__dest;
  uint uVar3;
  
  puVar2 = operator_new(0x20);
  *puVar2 = &PTR__RectangleListRegion_00711b08;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (0 < (int)uVar1) {
    __src = *(void **)(param_2 + 0x10);
    uVar3 = uVar1 + (uVar1 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar3 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc((ulong)uVar3 << 4);
      puVar2[2] = __dest;
    }
    *(uint *)(puVar2 + 3) = uVar3;
    memcpy(__dest,__src,(ulong)uVar1 << 4);
  }
  *(uint *)((long)puVar2 + 0x1c) = uVar1;
  *param_1 = puVar2;
  *(undefined4 *)(puVar2 + 1) = 1;
  return param_1;
}


