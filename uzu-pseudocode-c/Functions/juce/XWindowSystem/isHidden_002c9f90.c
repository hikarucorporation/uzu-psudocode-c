// Function : isHidden
// Namespace: juce:XWindowSystem
// Entry    : 002c9f90
// Prototype: ulong isHidden(XWindowSystem * this, undefined8 param_1)
// Body     : 002c9f90 - 002ca1bf


/* juce::XWindowSystem::isHidden(unsigned long) const */

ulong __thiscall juce::XWindowSystem::isHidden(XWindowSystem *this,undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  XWindowSystem *pXVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 uVar11;
  long *local_58;
  ulong auStack_50 [3];
  int local_38 [2];
  
  if ((singletonHolder._40_8_ != 0) &&
     (lVar6 = *(long *)(singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x210))(lVar6);
  }
  uVar2 = *(undefined8 *)(this + 0x60);
  uVar3 = *(undefined8 *)(this + 0x148);
  uVar11 = 0;
  local_58 = (long *)0x0;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  local_38[0] = -1;
                    /* try { // try from 002c9ff7 to 002ca041 has its CatchHandler @ 002ca1d0 */
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar4 = (**(code **)(lVar6 + 0x1b8))
                    (uVar3,param_1,uVar2,0,0x80,0,4,auStack_50 + 2,local_38,auStack_50,
                     auStack_50 + 1,&local_58,this,uVar11);
  uVar8 = 0;
  if (((local_58 == (long *)0x0 || iVar4 != 0) || (local_38[0] != 0x20)) || (auStack_50[2] != 4))
  goto LAB_002ca174;
  plVar1 = local_58 + auStack_50[0];
  lVar6 = auStack_50[0] * 8;
  if (lVar6 < 0x20) {
    lVar6 = lVar6 >> 3;
    plVar10 = local_58;
    if (lVar6 == 3) goto LAB_002ca0fe;
LAB_002ca12f:
    if (lVar6 == 2) {
      lVar6 = *(long *)(this + 0x68);
      if (*plVar10 != lVar6) goto LAB_002ca110;
LAB_002ca158:
      pXVar7 = this;
      plVar9 = plVar10;
    }
    else {
      pXVar7 = this;
      plVar9 = plVar1;
      if ((lVar6 == 1) && (plVar9 = plVar10, *plVar10 != *(long *)(this + 0x68))) goto LAB_002ca14a;
    }
  }
  else {
    pXVar7 = *(XWindowSystem **)(this + 0x68);
    lVar5 = ((auStack_50[0] & 0x1fffffffffffffff) >> 2) + 1;
    plVar10 = local_58 + 2;
    do {
      plVar9 = plVar10;
      if ((XWindowSystem *)plVar9[-2] == pXVar7) {
        plVar9 = plVar9 + -2;
        goto LAB_002ca16d;
      }
      if ((XWindowSystem *)plVar9[-1] == pXVar7) {
        plVar9 = plVar9 + -1;
        goto LAB_002ca16d;
      }
      if ((XWindowSystem *)*plVar9 == pXVar7) goto LAB_002ca16d;
      if ((XWindowSystem *)plVar9[1] == pXVar7) {
        plVar9 = plVar9 + 1;
        goto LAB_002ca16d;
      }
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + -0x20;
      plVar10 = plVar9 + 4;
    } while (1 < lVar5);
    lVar6 = lVar6 >> 3;
    plVar10 = plVar9 + 2;
    if (lVar6 != 3) goto LAB_002ca12f;
LAB_002ca0fe:
    lVar6 = *(long *)(this + 0x68);
    if ((*plVar10 == lVar6) || (plVar10 = plVar10 + 1, *plVar10 == lVar6)) goto LAB_002ca158;
LAB_002ca110:
    pXVar7 = this;
    plVar9 = plVar10 + 1;
    if (plVar10[1] != lVar6) {
LAB_002ca14a:
      pXVar7 = this;
      plVar9 = plVar1;
    }
  }
LAB_002ca16d:
  uVar8 = CONCAT71((int7)((ulong)pXVar7 >> 8),plVar9 != plVar1);
LAB_002ca174:
  if (local_58 != (long *)0x0) {
                    /* try { // try from 002ca179 to 002ca188 has its CatchHandler @ 002ca1c8 */
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar6 + 0x128))(local_58);
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar6 = *(long *)(singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
                    /* try { // try from 002ca1a1 to 002ca1ae has its CatchHandler @ 002ca1c0 */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x360))(lVar6);
  }
  return uVar8 & 0xffffffff;
}


