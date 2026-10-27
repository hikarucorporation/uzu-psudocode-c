// Function : set
// Namespace: juce:NamedValueSet
// Entry    : 00487320
// Prototype: undefined8 set(NamedValueSet * this, long * param_1, long * param_2)
// Body     : 00487320 - 00487443


/* juce::NamedValueSet::set(juce::Identifier const&, juce::var&&) */

undefined8 __thiscall juce::NamedValueSet::set(NamedValueSet *this,long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  
  iVar5 = *(int *)(this + 0xc);
  if ((long)iVar5 == 0) {
    lVar9 = *param_1;
    piVar8 = (int *)(lVar9 + -0x10);
    if (piVar8 == &emptyString) goto LAB_0048738d;
  }
  else {
    lVar9 = *param_1;
    plVar10 = (long *)(*(long *)this + 0x10);
    lVar7 = (long)iVar5 * 0x18;
    do {
      if (plVar10[-2] == lVar9) {
        lVar9 = plVar10[-1];
        lVar7 = *param_2;
        if (lVar9 == lVar7) {
                    /* try { // try from 0048740e to 00487413 has its CatchHandler @ 00487444 */
          cVar4 = (**(code **)(lVar9 + 0x68))(plVar10,param_2 + 1);
          if (cVar4 != '\0') {
            return 0;
          }
          lVar9 = plVar10[-1];
          lVar7 = *param_2;
        }
        plVar10[-1] = lVar7;
        *param_2 = lVar9;
        lVar7 = *plVar10;
        *plVar10 = param_2[1];
        param_2[1] = lVar7;
        goto LAB_00487438;
      }
      plVar10 = plVar10 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
    piVar8 = (int *)(lVar9 + -0x10);
    if (piVar8 == &emptyString) goto LAB_0048738d;
  }
  LOCK();
  *piVar8 = *piVar8 + 1;
  UNLOCK();
  iVar5 = *(int *)(this + 0xc);
LAB_0048738d:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *param_2 = (long)&var::Instance::attributesVoid;
  if (*(int *)(this + 8) <= iVar5) {
    ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>::setAllocatedSize
              ((ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> *)this,
               iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8);
    iVar5 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar5 + 1;
  lVar3 = *(long *)this;
  lVar6 = (long)iVar5;
  lVar7 = lVar6 * 3;
  *(long *)(lVar3 + lVar6 * 0x18) = lVar9;
  *(long *)(lVar3 + 8 + lVar6 * 0x18) = lVar1;
  *(long *)(lVar3 + 0x10 + lVar6 * 0x18) = lVar2;
LAB_00487438:
  return CONCAT71((int7)((ulong)lVar7 >> 8),1);
}


