// Function : SharedObject
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004c19c0
// Prototype: undefined SharedObject(SharedObject * this, long param_1)
// Body     : 004c19c0 - 004c1b17


/* juce::ValueTree::SharedObject::SharedObject(juce::ValueTree::SharedObject const&) */

void __thiscall juce::ValueTree::SharedObject::SharedObject(SharedObject *this,long param_1)

{
  SharedObject *pSVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  SharedObject *this_00;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__SharedObject_00713ff0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(this + 0x10) = lVar3;
  piVar6 = (int *)(lVar3 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
                    /* try { // try from 004c1a0a to 004c1a13 has its CatchHandler @ 004c1b18 */
  Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0>::Array
            ((Array<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection,0> *)(this + 0x18),
             (long *)(param_1 + 0x18));
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  iVar2 = *(int *)(param_1 + 0x34);
  if ((long)iVar2 != 0) {
    pSVar1 = this + 0x28;
    lVar3 = *(long *)(param_1 + 0x28);
    lVar9 = 0;
    do {
      lVar4 = *(long *)(lVar3 + lVar9);
                    /* try { // try from 004c1a9e to 004c1aa7 has its CatchHandler @ 004c1b2a */
      this_00 = operator_new(0x50);
                    /* try { // try from 004c1aab to 004c1ab5 has its CatchHandler @ 004c1b1d */
      SharedObject(this_00,lVar4);
      *(SharedObject **)(this_00 + 0x48) = this;
      iVar5 = *(int *)(this + 0x34);
      if ((int)*(uint *)(this + 0x30) <= iVar5) {
        uVar8 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(this + 0x30) != uVar8) {
          if ((int)uVar8 < 1) {
            free(*(void **)pSVar1);
            *(undefined8 *)pSVar1 = 0;
          }
          else {
            pvVar7 = realloc(*(void **)pSVar1,(ulong)uVar8 << 3);
            *(void **)pSVar1 = pvVar7;
          }
        }
        *(uint *)(this + 0x30) = uVar8;
        iVar5 = *(int *)(this + 0x34);
      }
      *(int *)(this + 0x34) = iVar5 + 1;
      *(SharedObject **)(*(long *)(this + 0x28) + (long)iVar5 * 8) = this_00;
      LOCK();
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      UNLOCK();
      lVar9 = lVar9 + 8;
    } while ((long)iVar2 << 3 != lVar9);
  }
  return;
}


