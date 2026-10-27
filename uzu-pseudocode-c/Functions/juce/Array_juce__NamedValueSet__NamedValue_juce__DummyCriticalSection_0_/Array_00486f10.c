// Function : Array
// Namespace: juce:Array_juce__NamedValueSet__NamedValue_juce__DummyCriticalSection_0_
// Entry    : 00486f10
// Prototype: undefined Array(Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0> * this, long * param_1)
// Body     : 00486f10 - 00486fc5


/* juce::Array<juce::NamedValueSet::NamedValue, juce::DummyCriticalSection,
   0>::Array(juce::Array<juce::NamedValueSet::NamedValue, juce::DummyCriticalSection, 0> const&) */

void __thiscall
juce::Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0>::Array
          (Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0> *this,long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *param_1;
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar3 < 1) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>::setAllocatedSize
              ((ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> *)this,
               uVar3 + (uVar3 >> 1) + 8 & 0xfffffff8);
    lVar8 = (long)*(int *)(this + 0xc);
    lVar6 = *(long *)this;
  }
  lVar6 = lVar6 + lVar8 * 0x18;
  iVar9 = uVar3 + 1;
  lVar8 = 0;
  while (iVar9 = iVar9 + -1, 0 < iVar9) {
    lVar1 = lVar4 + lVar8;
    lVar2 = lVar6 + lVar8;
    lVar5 = *(long *)(lVar4 + lVar8);
    *(long *)(lVar6 + lVar8) = lVar5;
    piVar7 = (int *)(lVar5 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    lVar8 = lVar8 + 0x18;
    lVar5 = *(long *)(lVar1 + 8);
    *(long *)(lVar2 + 8) = lVar5;
                    /* try { // try from 00486f84 to 00486f86 has its CatchHandler @ 00486fc6 */
    (**(code **)(lVar5 + 0x60))(lVar2 + 0x10,lVar1 + 0x10);
  }
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + uVar3;
  return;
}


