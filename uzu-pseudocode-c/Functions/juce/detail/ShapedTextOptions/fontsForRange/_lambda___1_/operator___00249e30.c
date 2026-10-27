// Function : operator()
// Namespace: juce:detail:ShapedTextOptions:fontsForRange:_lambda___1_
// Entry    : 00249e30
// Prototype: undefined operator()({lambda()#1} * this)
// Body     : 00249e30 - 00249f94


/* juce::detail::ShapedTextOptions::fontsForRange::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
juce::detail::ShapedTextOptions::fontsForRange::{lambda()#1}::operator()(_lambda___1_ *this)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  void *local_50;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_88 = 0;
                    /* try { // try from 00249e5b to 00249e6e has its CatchHandler @ 00249fcf */
  FontOptions::FontOptions(DAT_005d906c,(FontOptions *)&local_80,0);
                    /* try { // try from 00249e6f to 00249e7d has its CatchHandler @ 00249fb1 */
  Font::Font((Font *)&local_a0,&local_80);
                    /* try { // try from 00249e7e to 00249e9b has its CatchHandler @ 00249f95 */
  RangedValues<juce::Font>::set<juce::detail::MergeEqualItemsYes>
            ((RangedValues<juce::Font> *)this,0,0x7fffffffffffffff,(long *)&local_a0,
             (long *)&local_98);
  if (local_a0 != (long *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_a0 + 8))();
    }
  }
  if (local_50 != (void *)0x0) {
    operator_delete(local_50);
  }
  plVar2 = local_68;
  if (local_68 != local_60) {
    do {
      piVar3 = (int *)(*plVar2 + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != local_60);
  }
  if (local_68 != (long *)0x0) {
    operator_delete(local_68);
  }
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_70 + 8))();
    }
  }
  piVar3 = (int *)(local_78 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(local_80 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  if (local_98 != (void *)0x0) {
    operator_delete(local_98);
  }
  return;
}


