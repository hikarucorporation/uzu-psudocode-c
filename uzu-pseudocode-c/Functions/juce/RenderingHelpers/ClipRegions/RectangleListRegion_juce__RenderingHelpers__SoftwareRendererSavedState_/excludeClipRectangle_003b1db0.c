// Function : excludeClipRectangle
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1db0
// Prototype: undefined excludeClipRectangle(long * param_1, long param_2, ulong param_3, ulong param_4)
// Body     : 003b1db0 - 003b1f03


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::excludeClipRectangle(juce::Rectangle<int>)
    */

void __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::excludeClipRectangle
          (long *param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint local_8c;
  ulong local_88;
  ulong local_80;
  long local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  uint *local_50;
  undefined8 *local_48;
  ulong *local_40;
  long local_38;
  
  local_8c = *(uint *)(param_2 + 0x1c);
  if (local_8c == 0) {
LAB_003b1eee:
    *param_1 = 0;
  }
  else {
    uVar2 = param_4 + param_3;
    uVar6 = (param_4 & 0xffffffff00000000) + param_3;
    local_80 = uVar2 & 0xffffffff | uVar6 & 0xffffffff00000000;
    if (0 < (int)local_8c) {
      uVar5 = param_3 >> 0x20;
      uVar6 = uVar6 >> 0x20;
      local_88 = param_3;
      local_78 = param_2;
      local_70 = param_1;
      while( true ) {
        local_8c = local_8c - 1;
        local_38 = *(long *)(param_2 + 0x10);
        lVar3 = (ulong)local_8c * 0x10;
        local_68 = *(undefined8 *)(local_38 + lVar3);
        iVar1 = *(int *)(local_38 + 8 + lVar3) + (int)local_68;
        iVar4 = (int)((ulong)local_68 >> 0x20);
        iVar7 = *(int *)(local_38 + 0xc + lVar3) + iVar4;
        local_60 = CONCAT44(iVar7,iVar1);
        if (((((int)local_68 < (int)uVar2) && ((int)param_3 < iVar1)) && (iVar4 < (int)uVar6)) &&
           ((int)uVar5 < iVar7)) {
          local_38 = local_38 + lVar3;
          local_50 = &local_8c;
          local_48 = &local_68;
          local_58 = (long *)(param_2 + 0x10);
          local_40 = &local_88;
          RectangleList<int>::
          subtract<juce::Rectangle<int>>(juce::Array<juce::Rectangle<int>,juce::DummyCriticalSection,0>&,juce::Rectangle<int>)
          ::{lambda()#1}::operator()((_lambda___1_ *)&local_58);
        }
        if ((int)local_8c < 1) break;
        uVar2 = local_80 & 0xffffffff;
        param_3 = local_88 & 0xffffffff;
        uVar5 = local_88 >> 0x20;
        uVar6 = local_80 >> 0x20;
      }
      param_1 = local_70;
      param_2 = local_78;
      if (*(int *)(local_78 + 0x1c) == 0) goto LAB_003b1eee;
    }
    *param_1 = param_2;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  return;
}


