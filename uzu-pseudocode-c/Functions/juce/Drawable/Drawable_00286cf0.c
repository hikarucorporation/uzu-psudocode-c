// Function : Drawable
// Namespace: juce:Drawable
// Entry    : 00286cf0
// Prototype: undefined Drawable(Drawable * this, long param_1)
// Body     : 00286cf0 - 00286fae


/* juce::Drawable::Drawable(juce::Drawable const&) */

void __thiscall juce::Drawable::Drawable(Drawable *this,long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long *plVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  long *local_70;
  Drawable *local_68;
  undefined8 local_60;
  code *local_58;
  code *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  lVar4 = *(long *)(param_1 + 8);
  piVar1 = (int *)(lVar4 + -0x10);
  if (piVar1 == &emptyString) {
    *(undefined ***)this = &PTR__Component_00707878;
    *(long *)(this + 8) = lVar4;
  }
  else {
    LOCK();
    *(int *)(lVar4 + -0x10) = *(int *)(lVar4 + -0x10) + 1;
    UNLOCK();
    *(undefined ***)this = &PTR__Component_00707878;
    *(long *)(this + 8) = lVar4;
    LOCK();
    *(int *)(lVar4 + -0x10) = *(int *)(lVar4 + -0x10) + 1;
    UNLOCK();
  }
  *(undefined1 **)(this + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe5) = 0;
  if (piVar1 != &emptyString) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar1);
    }
  }
  *(undefined ***)this = &PTR__Drawable_00707b28;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined1 (*) [16])(this + 0x100) = ZEXT416(DAT_005d9038);
  *(undefined8 *)(this + 0x110) = 0x3f800000;
  local_60 = 0;
  local_50 = std::_Function_handler<void(),juce::Drawable::boundsChangeListener::{lambda()#1}>::
             _M_invoke;
  local_58 = std::_Function_handler<void(),juce::Drawable::boundsChangeListener::{lambda()#1}>::
             _M_manager;
                    /* try { // try from 00286e1e to 00286e2d has its CatchHandler @ 0028700f */
  local_68 = this;
  detail::BoundsChangeListener::BoundsChangeListener
            ((BoundsChangeListener *)(this + 0x118),(long)this,&local_68);
  if (local_58 != (code *)0x0) {
                    /* try { // try from 00286e38 to 00286e46 has its CatchHandler @ 00286fcf */
    (*local_58)(&local_68,&local_68,3);
  }
  uVar7 = *(uint3 *)(this + 0xe8) & 0xdeffe7 | 0x210008;
  *(short *)(this + 0xe8) = (short)uVar7;
  this[0xea] = SUB41(uVar7 >> 0x10,0);
  plVar9 = *(long **)(this + 0xe0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  lVar4 = *(long *)(param_1 + 0x10);
  piVar1 = (int *)(lVar4 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  LOCK();
  lVar3 = *(long *)(this + 0x10);
  *(long *)(this + 0x10) = lVar4;
  UNLOCK();
  piVar8 = (int *)(lVar3 + -0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    iVar2 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar8);
    }
  }
  if (piVar1 != &emptyString) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar1);
      pauVar5 = *(undefined1 (**) [16])(param_1 + 0x50);
      goto joined_r0x00286f0a;
    }
  }
  pauVar5 = *(undefined1 (**) [16])(param_1 + 0x50);
joined_r0x00286f0a:
  if (pauVar5 == (undefined1 (*) [16])0x0) {
    local_48 = ZEXT416(DAT_005d9038);
    local_38 = 0x3f800000;
  }
  else {
    local_38 = *(undefined8 *)pauVar5[1];
    local_48 = *pauVar5;
  }
                    /* try { // try from 00286f22 to 00286f2e has its CatchHandler @ 00286fd7 */
  Component::setTransform((Component *)this,(float *)local_48);
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
                    /* try { // try from 00286f3e to 00286f48 has its CatchHandler @ 00286fcd */
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x198))(&local_70);
    plVar6 = local_70;
    plVar9 = *(long **)(this + 0xf8);
    if (plVar9 != local_70) {
      local_70 = (long *)0x0;
      *(long **)(this + 0xf8) = plVar6;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
                    /* try { // try from 00286f79 to 00286f87 has its CatchHandler @ 00286faf */
      Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
      plVar9 = local_70;
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  return;
}


