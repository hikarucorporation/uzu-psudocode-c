// Function : buttonStateChanged
// Namespace: juce:DrawableButton
// Entry    : 00287ba0
// Prototype: undefined buttonStateChanged(DrawableButton * this)
// Body     : 00287ba0 - 00287ea2


/* juce::DrawableButton::buttonStateChanged() */

void __thiscall juce::DrawableButton::buttonStateChanged(DrawableButton *this)

{
  Component *pCVar1;
  char cVar2;
  uint uVar3;
  DrawableButton *pDVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  long lVar9;
  long local_28;
  undefined1 local_20 [8];
  
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  pDVar4 = this;
  do {
    if ((*(ushort *)(pDVar4 + 0xe8) & 0x8000) != 0) {
                    /* try { // try from 00287c71 to 00287c76 has its CatchHandler @ 00287f2b */
      (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 00287c80 to 00287c85 has its CatchHandler @ 00287f23 */
      uVar3 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 00287c8c to 00287c91 has its CatchHandler @ 00287f1b */
      (**(code **)(local_28 + 0x58))();
      plVar7 = *(long **)(this + ((ulong)uVar3 & 0xff) * 0x20 + 0x218);
      if (*(long **)(this + ((ulong)uVar3 & 0xff) * 0x20 + 0x218) != (long *)0x0) goto LAB_00287dac;
                    /* try { // try from 00287cb4 to 00287cb9 has its CatchHandler @ 00287f13 */
      (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 00287cc3 to 00287cc8 has its CatchHandler @ 00287f0b */
      cVar2 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 00287ccf to 00287cd4 has its CatchHandler @ 00287f03 */
      (**(code **)(local_28 + 0x58))();
      plVar7 = *(long **)(this + 0x220);
      if (*(long **)(this + 0x220) == (long *)0x0) {
        plVar7 = *(long **)(this + 0x200);
      }
      if (cVar2 == '\0') {
        plVar7 = *(long **)(this + 0x200);
      }
      cVar8 = -0x67;
      plVar5 = *(long **)(this + 0x240);
      cVar2 = -0x67;
      if (plVar7 != plVar5) goto LAB_00287dbe;
      goto LAB_00287e79;
    }
    pDVar4 = *(DrawableButton **)(pDVar4 + 0x30);
  } while (pDVar4 != (DrawableButton *)0x0);
  if (*(int *)(this + 0x1b8) == 0) {
                    /* try { // try from 00287d13 to 00287d18 has its CatchHandler @ 00287ee3 */
    (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 00287d22 to 00287d27 has its CatchHandler @ 00287edb */
    cVar2 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 00287d2e to 00287d33 has its CatchHandler @ 00287ed3 */
    (**(code **)(local_28 + 0x58))();
    plVar7 = *(long **)(this + 0x220);
    if (*(long **)(this + 0x220) == (long *)0x0) {
      plVar7 = *(long **)(this + 0x200);
    }
    if (cVar2 == '\0') {
      plVar7 = *(long **)(this + 0x200);
    }
  }
  else {
    if (*(int *)(this + 0x1b8) == 2) {
                    /* try { // try from 00287bfe to 00287c03 has its CatchHandler @ 00287efb */
      (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 00287c0d to 00287c12 has its CatchHandler @ 00287ef3 */
      uVar3 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 00287c19 to 00287c1e has its CatchHandler @ 00287eeb */
      (**(code **)(local_28 + 0x58))();
      plVar7 = *(long **)(this + ((ulong)uVar3 & 0xff) * 0x20 + 0x210);
      if (*(long **)(this + ((ulong)uVar3 & 0xff) * 0x20 + 0x210) != (long *)0x0) goto LAB_00287dac;
                    /* try { // try from 00287c41 to 00287c46 has its CatchHandler @ 00287eb3 */
      (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 00287c50 to 00287c55 has its CatchHandler @ 00287eab */
      cVar2 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 00287c5c to 00287c61 has its CatchHandler @ 00287ea3 */
      (**(code **)(local_28 + 0x58))();
    }
    else {
                    /* try { // try from 00287d5c to 00287d61 has its CatchHandler @ 00287ecb */
      (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 00287d6b to 00287d70 has its CatchHandler @ 00287ec3 */
      cVar2 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 00287d77 to 00287d7c has its CatchHandler @ 00287ebb */
      (**(code **)(local_28 + 0x58))();
    }
    if (((cVar2 == '\0') ||
        ((plVar7 = *(long **)(this + 0x228), *(long **)(this + 0x228) == (long *)0x0 &&
         (plVar7 = *(long **)(this + 0x220), *(long **)(this + 0x220) == (long *)0x0)))) &&
       (plVar7 = *(long **)(this + 0x208), *(long **)(this + 0x208) == (long *)0x0)) {
      plVar7 = *(long **)(this + 0x200);
    }
  }
LAB_00287dac:
  cVar8 = '\0';
  plVar5 = *(long **)(this + 0x240);
  cVar2 = '\0';
  if (plVar7 != plVar5) {
LAB_00287dbe:
    cVar8 = cVar2;
    uVar3 = 0xffffffff;
    if ((long)*(int *)(this + 100) != 0) {
      lVar6 = (long)*(int *)(this + 100) << 3;
      lVar9 = 0;
      do {
        if (*(long **)(*(long *)(this + 0x58) + lVar9 * 8) == plVar5) {
          uVar3 = (uint)lVar9;
          break;
        }
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    Component::removeChildComponent((Component *)this,uVar3,'\x01',1);
    *(long **)(this + 0x240) = plVar7;
    if (plVar7 == (long *)0x0) {
      return;
    }
    *(undefined1 *)((long)plVar7 + 0xea) = *(undefined1 *)((long)plVar7 + 0xea);
    *(ushort *)(plVar7 + 0x1d) = (ushort)plVar7[0x1d] & 0xffe7 | 8;
    pCVar1 = *(Component **)(this + 0x240);
    if (pCVar1 != (Component *)0x0) {
      (**(code **)(*(long *)pCVar1 + 0x60))(pCVar1,1);
      Component::addChildComponent((Component *)this,pCVar1,0xffffffff);
    }
    (**(code **)(*(long *)this + 0x140))(this);
    plVar7 = *(long **)(this + 0x240);
  }
LAB_00287e79:
  if ((plVar7 != (long *)0x0) && (*(char *)((long)plVar7 + 0xec) != cVar8)) {
    *(char *)((long)plVar7 + 0xec) = cVar8;
    (**(code **)(*plVar7 + 0xe8))(plVar7);
  }
  return;
}


