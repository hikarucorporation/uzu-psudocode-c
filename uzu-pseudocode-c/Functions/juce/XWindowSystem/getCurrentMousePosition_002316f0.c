// Function : getCurrentMousePosition
// Namespace: juce:XWindowSystem
// Entry    : 002316f0
// Prototype: undefined8 getCurrentMousePosition(XWindowSystem * this)
// Body     : 002316f0 - 0023181c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::XWindowSystem::getCurrentMousePosition() const */

undefined8 __thiscall juce::XWindowSystem::getCurrentMousePosition(XWindowSystem *this)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int local_5c;
  int local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  if ((singletonHolder._40_8_ != 0) &&
     (lVar7 = *(long *)(singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar6 + 0x210))(lVar7);
  }
                    /* try { // try from 00231726 to 0023179e has its CatchHandler @ 00231825 */
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar1 = *(code **)(lVar7 + 0x278);
  uVar2 = *(undefined8 *)(this + 0x148);
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar3 = *(code **)(lVar7 + 0x2a8);
  uVar8 = *(undefined8 *)(this + 0x148);
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar4 = (**(code **)(lVar7 + 0xb0))(*(undefined8 *)(this + 0x148));
  uVar8 = (*pcVar3)(uVar8,uVar4);
  iVar5 = (*pcVar1)(uVar2,uVar8,local_30,local_38,&local_58,&local_5c,local_4c,local_50,local_54);
  if (iVar5 == 0) {
    local_5c = -1;
    local_58 = -1;
    local_48 = _DAT_005d9910;
    uStack_40 = _UNK_005d9918;
  }
  else {
    local_48 = CONCAT44((float)local_5c,(float)local_58);
    uStack_40 = 0;
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar7 = *(long *)(singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
                    /* try { // try from 002317fc to 00231809 has its CatchHandler @ 0023181d */
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar6 + 0x360))(lVar7);
  }
  return local_48;
}


