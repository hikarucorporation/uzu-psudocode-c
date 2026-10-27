// Function : set
// Namespace: juce:NamedValueSet
// Entry    : 00487450
// Prototype: undefined8 set(NamedValueSet * this, long * param_1, long * param_2)
// Body     : 00487450 - 004875a2


/* WARNING: Removing unreachable block (ram,0x0048754a) */
/* WARNING: Removing unreachable block (ram,0x00487557) */
/* juce::NamedValueSet::set(juce::Identifier const&, juce::var const&) */

undefined8 __thiscall juce::NamedValueSet::set(NamedValueSet *this,long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 local_20;
  
  if ((long)*(int *)(this + 0xc) == 0) {
    lVar3 = *param_1;
  }
  else {
    lVar3 = *param_1;
    lVar8 = *(long *)this + 0x10;
    lVar7 = (long)*(int *)(this + 0xc) * 0x18;
    do {
      if (*(long *)(lVar8 + -0x10) == lVar3) {
        lVar3 = *(long *)(lVar8 + -8);
        if (lVar3 == *param_2) {
                    /* try { // try from 0048756b to 00487570 has its CatchHandler @ 004875a3 */
          cVar1 = (**(code **)(lVar3 + 0x68))(lVar8,param_2 + 1);
          if (cVar1 != '\0') {
            return 0;
          }
          lVar3 = *(long *)(lVar8 + -8);
        }
        (**(code **)(lVar3 + 0x58))(lVar8);
        lVar3 = *param_2;
        *(long *)(lVar8 + -8) = lVar3;
        puVar6 = (undefined1 *)(**(code **)(lVar3 + 0x60))(lVar8,param_2 + 1);
        goto LAB_00487597;
      }
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  piVar4 = (int *)(lVar3 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  lVar7 = *param_2;
                    /* try { // try from 004874c3 to 004874c8 has its CatchHandler @ 004875ab */
  (**(code **)(lVar7 + 0x60))(&local_20,param_2 + 1);
  iVar2 = *(int *)(this + 0xc);
  if (*(int *)(this + 8) <= iVar2) {
    ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>::setAllocatedSize
              ((ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> *)this,
               iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8);
    iVar2 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar2 + 1;
  lVar8 = *(long *)this;
  lVar5 = (long)iVar2;
  *(long *)(lVar8 + lVar5 * 0x18) = lVar3;
  *(long *)(lVar8 + 8 + lVar5 * 0x18) = lVar7;
  *(undefined8 *)(lVar8 + 0x10 + lVar5 * 0x18) = local_20;
  puVar6 = &var::Instance::attributesVoid;
LAB_00487597:
  return CONCAT71((int7)((ulong)puVar6 >> 8),1);
}


