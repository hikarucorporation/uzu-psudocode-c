// Function : getComponentAt
// Namespace: juce:Component
// Entry    : 00231630
// Prototype: Component * getComponentAt(undefined8 param_1, Component * this)
// Body     : 00231630 - 002316ef


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Component::getComponentAt(juce::Point<float>) */

Component * __thiscall juce::Component::getComponentAt(undefined8 param_1,Component *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  char cVar4;
  undefined4 uVar5;
  Component *pCVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  
  if ((*(ushort *)(this + 0xe8) & 2) != 0) {
    dVar2 = (double)(float)param_1 + _DAT_005d9a90;
    iVar9 = SUB84(dVar2,0);
    dVar3 = (double)(float)((ulong)param_1 >> 0x20) + _UNK_005d9a98;
    iVar10 = SUB84(dVar3,0);
    auVar1._4_4_ = (uint)(-1 < iVar10) * -0x80000000;
    auVar1._0_4_ = (uint)(-1 < iVar9) * -0x80000000;
    auVar1._8_4_ = (uint)(iVar9 < (int)*(undefined8 *)(this + 0x40)) * -0x80000000;
    auVar1._12_4_ =
         (uint)(iVar10 < (int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20)) * -0x80000000;
    uVar5 = movmskps((uint)*(ushort *)(this + 0xe8),auVar1);
    if (((char)uVar5 == '\x0f') &&
       (cVar4 = (**(code **)(*(long *)this + 0xa0))
                          (this,(ulong)dVar2 & 0xffffffff,(ulong)dVar3 & 0xffffffff), cVar4 != '\0')
       ) {
      uVar7 = (ulong)*(uint *)(this + 100);
      do {
        if ((int)uVar7 < 1) {
          return this;
        }
        pCVar6 = *(Component **)(*(long *)(this + 0x58) + -8 + uVar7 * 8);
        uVar8 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                          (param_1,(long *)pCVar6);
        pCVar6 = getComponentAt(uVar8,pCVar6);
        uVar7 = uVar7 - 1;
      } while (pCVar6 == (Component *)0x0);
      return pCVar6;
    }
  }
  return (Component *)0x0;
}


