// Function : createCopy
// Namespace: juce:DrawableText
// Entry    : 002afd80
// Prototype: undefined createCopy(undefined8 * param_1, long param_2)
// Body     : 002afd80 - 002b005b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableText::createCopy() const */

void __cdecl juce::DrawableText::createCopy(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Drawable *this;
  long *plVar4;
  int *piVar5;
  long local_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  void *local_d0;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  this = operator_new(0x1a8);
                    /* try { // try from 002afda7 to 002afdb1 has its CatchHandler @ 002b00dc */
  Drawable::Drawable(this,param_2);
  *(undefined ***)this = &PTR__DrawableText_00708428;
  uVar3 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(this + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(this + 0x168) = uVar3;
  *(undefined8 *)(this + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  lVar2 = *(long *)(param_2 + 0x180);
  *(long *)(this + 0x180) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
                    /* try { // try from 002afe1c to 002afe2f has its CatchHandler @ 002b00b6 */
  FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_100,0);
                    /* try { // try from 002afe30 to 002afe41 has its CatchHandler @ 002b00a7 */
  Component::withDefaultMetrics(&local_98,(long)this,&local_100);
                    /* try { // try from 002afe49 to 002afe55 has its CatchHandler @ 002b0098 */
  Font::Font((Font *)(this + 0x188),&local_98);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  plVar4 = local_80;
  if (local_80 != local_78) {
    do {
      piVar5 = (int *)(*plVar4 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != local_78);
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  piVar5 = (int *)(local_90 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(local_98 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  plVar4 = local_e8;
  if (local_d0 != (void *)0x0) {
    operator_delete(local_d0);
    plVar4 = local_e8;
  }
  for (; plVar4 != local_e0; plVar4 = plVar4 + 1) {
    piVar5 = (int *)(*plVar4 + -0x10);
    if (piVar5 != &emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
      }
    }
  }
  if (local_e8 != (long *)0x0) {
    operator_delete(local_e8);
  }
  if (local_f0 != (long *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*local_f0 + 8))();
    }
  }
  piVar5 = (int *)(local_f8 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(local_100 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  lVar2 = *(long *)(param_2 + 400);
  *(long *)(this + 400) = lVar2;
  piVar5 = (int *)(lVar2 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  this[0x198] = (Drawable)0x0;
  *(undefined4 *)(this + 0x199) = *(undefined4 *)(param_2 + 0x199);
  *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
                    /* try { // try from 002afff7 to 002afffe has its CatchHandler @ 002b005c */
  refreshBounds((DrawableText *)this);
  *param_1 = this;
  return;
}


