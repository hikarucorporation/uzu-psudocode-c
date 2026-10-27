// Function : TooltipWindow
// Namespace: juce:TooltipWindow
// Entry    : 002e7b70
// Prototype: undefined TooltipWindow(TooltipWindow * this, Component * param_1, undefined4 param_2)
// Body     : 002e7b70 - 002e7d6f


/* juce::TooltipWindow::TooltipWindow(juce::Component*, int) */

void __thiscall
juce::TooltipWindow::TooltipWindow(TooltipWindow *this,Component *param_1,undefined4 param_2)

{
  Timer *this_00;
  int iVar1;
  long *plVar2;
  int *piVar3;
  Desktop *this_01;
  
  piVar3 = operator_new__(0x1f);
  LOCK();
  *piVar3 = 0;
  UNLOCK();
  piVar3[2] = 8;
  piVar3[3] = 0;
  piVar3[4] = 0x6c6f6f74;
  piVar3[5] = 0x706974;
  *(undefined ***)this = &PTR__Component_00707878;
  *(int **)(this + 8) = piVar3 + 4;
  LOCK();
  *piVar3 = *piVar3 + 1;
  UNLOCK();
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
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar3);
  }
  this_00 = (Timer *)(this + 0xf0);
  Timer::Timer(this_00);
  *(undefined ***)this = &PTR__TooltipWindow_0070cd60;
  *(undefined ***)(this + 0xf0) = &PTR__TooltipWindow_0070cf18;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined1 **)(this + 0x128) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x130) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x138) = &DAT_0061ac58;
  *(undefined4 *)(this + 0x140) = param_2;
  *(undefined8 *)(this + 0x144) = 0;
  *(undefined2 *)(this + 0x14c) = 0;
                    /* try { // try from 002e7c9e to 002e7cb7 has its CatchHandler @ 002e7d87 */
  Component::setAlwaysOnTop((Component *)this,1);
  Component::setOpaque((Component *)this,1);
  this[0xea] = (TooltipWindow)((byte)this[0xea] | 0x20);
  plVar2 = *(long **)(this + 0xe0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (param_1 != (Component *)0x0) {
                    /* try { // try from 002e7ce1 to 002e7cf0 has its CatchHandler @ 002e7d87 */
    Component::addChildComponent(param_1,(Component *)this,0xffffffff);
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e7cfd to 002e7d06 has its CatchHandler @ 002e7d85 */
    this_01 = operator_new(0x1d0);
                    /* try { // try from 002e7d0a to 002e7d11 has its CatchHandler @ 002e7d78 */
    Desktop::Desktop(this_01);
    Desktop::instance = this_01;
  }
  if (*(int *)(**(long **)(*(long *)(Desktop::instance + 0x40) + 0x28) + 0x14) != 1) {
                    /* try { // try from 002e7d2a to 002e7d34 has its CatchHandler @ 002e7d85 */
    Desktop::addGlobalMouseListener(Desktop::instance,(long)this);
    iVar1 = *(int *)(this + 0x100);
    *(undefined4 *)(this + 0x100) = 0x7b;
    if (iVar1 != 0) {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x108),(long)this_00);
      return;
    }
                    /* try { // try from 002e7d5f to 002e7d66 has its CatchHandler @ 002e7d70 */
    Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x108),(long)this_00);
  }
  return;
}


