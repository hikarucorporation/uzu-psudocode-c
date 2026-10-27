// Function : getWindowBounds
// Namespace: juce:XWindowSystem
// Entry    : 002ca3d0
// Prototype: undefined1[16] getWindowBounds(XWindowSystem * this, undefined8 param_1, long param_2)
// Body     : 002ca3d0 - 002ca569


/* juce::XWindowSystem::getWindowBounds(unsigned long, unsigned long) */

undefined1  [16] __thiscall
juce::XWindowSystem::getWindowBounds(XWindowSystem *this,undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  
  local_50 = 0;
  local_54 = 0;
  local_44 = 0;
  local_48 = 0;
  if ((singletonHolder._40_8_ != 0) &&
     (lVar6 = *(long *)(singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x210))(lVar6);
  }
                    /* try { // try from 002ca42c to 002ca473 has its CatchHandler @ 002ca574 */
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar4 = (**(code **)(lVar6 + 0x170))
                    (*(undefined8 *)(this + 0x148),param_1,&local_40,&local_50,&local_54,&local_44,
                     &local_48,local_34,local_38);
  if (iVar4 == 0) {
    uVar7 = (ulong)local_54;
  }
  else {
    local_4c = 0;
    local_58 = 0;
                    /* try { // try from 002ca487 to 002ca4bc has its CatchHandler @ 002ca572 */
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar4 = (**(code **)(lVar6 + 0x340))
                      (*(undefined8 *)(this + 0x148),param_1,local_40,0,0,&local_4c,&local_58,
                       local_30);
    uVar1 = local_4c;
    if (iVar4 == 0) {
      local_58 = 0;
      uVar1 = 0;
    }
    if (param_2 == 0) {
      uVar7 = (ulong)local_58;
      local_54 = local_58;
      local_50 = uVar1;
    }
    else {
      uVar7 = (ulong)local_54;
      *(ulong *)(this + 0x1a8) = CONCAT44(local_58 - local_54,uVar1 - local_50);
    }
  }
  uVar3 = local_44;
  uVar2 = local_48;
  uVar1 = local_50;
  if ((singletonHolder._40_8_ != 0) &&
     (lVar6 = *(long *)(singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
                    /* try { // try from 002ca53a to 002ca547 has its CatchHandler @ 002ca56a */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x360))(lVar6);
  }
  auVar8._0_8_ = (ulong)uVar1 | uVar7 << 0x20;
  auVar8._12_4_ = uVar2;
  auVar8._8_4_ = uVar3;
  return auVar8;
}


