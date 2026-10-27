// Function : update
// Namespace: juce:DropShadower:VirtualDesktopWatcher
// Entry    : 0028de80
// Prototype: undefined update(VirtualDesktopWatcher * this)
// Body     : 0028de80 - 0028e06b


/* juce::DropShadower::VirtualDesktopWatcher::update() */

void __thiscall juce::DropShadower::VirtualDesktopWatcher::update(VirtualDesktopWatcher *this)

{
  VirtualDesktopWatcher VVar1;
  int iVar2;
  long *plVar3;
  _Rb_tree_node_base *p_Var4;
  long lVar5;
  long *plVar6;
  Desktop *this_00;
  long lVar7;
  
  if ((((*(long *)(this + 0x30) == 0) ||
       (lVar5 = *(long *)(*(long *)(this + 0x30) + 0x10), lVar5 == 0)) ||
      (this[0x38] == (VirtualDesktopWatcher)0x0)) || ((*(ushort *)(lVar5 + 0xe8) & 1) == 0)) {
    Timer::stopTimer((Timer *)(this + 8));
    goto LAB_0028deba;
  }
  iVar2 = *(int *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = 200;
  if (iVar2 == 0) {
                    /* try { // try from 0028df30 to 0028df34 has its CatchHandler @ 0028e0a8 */
    Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x20),(long)(this + 8));
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x20),(long)(this + 8));
  }
  plVar6 = *(long **)(this + 0x70);
  if (plVar6 == (long *)0x0) {
    plVar6 = operator_new(0x18);
    *(undefined4 *)(plVar6 + 1) = 0;
    *plVar6 = (long)&PTR__ReferenceCountedObject_0070fbe0;
    plVar6[2] = (long)this;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar3 = *(long **)(this + 0x70);
    *(long **)(this + 0x70) = plVar6;
    if (plVar3 == (long *)0x0) goto LAB_0028df3f;
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar6 = *(long **)(this + 0x70);
    if (plVar6 != (long *)0x0) goto LAB_0028df3f;
    plVar6 = (long *)0x0;
    lVar5 = *(long *)(this + 0x30);
    if (lVar5 != 0) goto LAB_0028df4f;
LAB_0028dfb0:
    lVar5 = 0;
  }
  else {
LAB_0028df3f:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    lVar5 = *(long *)(this + 0x30);
    if (lVar5 == 0) goto LAB_0028dfb0;
LAB_0028df4f:
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  do {
    if ((*(ushort *)(lVar5 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028dfe2 to 0028dfeb has its CatchHandler @ 0028e0a0 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 0028dfef to 0028dff6 has its CatchHandler @ 0028e08d */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
        lVar7 = 0;
        goto LAB_0028e020;
      }
      break;
    }
    lVar5 = *(long *)(lVar5 + 0x30);
  } while (lVar5 != 0);
  goto LAB_0028e03b;
  while (lVar7 = lVar7 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar7) {
LAB_0028e020:
    if ((*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar7))[1] == lVar5) {
                    /* try { // try from 0028e038 to 0028e03a has its CatchHandler @ 0028e06c */
      (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar7) + 0x18))();
      break;
    }
  }
LAB_0028e03b:
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar5 = plVar6[2];
  LOCK();
  plVar3 = plVar6 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  if (lVar5 == 0) {
    return;
  }
LAB_0028deba:
  VVar1 = this[0x39];
  this[0x39] = (VirtualDesktopWatcher)0x0;
  if (VVar1 != (VirtualDesktopWatcher)0x0) {
    for (p_Var4 = *(_Rb_tree_node_base **)(this + 0x58);
        p_Var4 != (_Rb_tree_node_base *)(this + 0x48);
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4)) {
      if (*(long *)(p_Var4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_function_call();
      }
      (**(code **)(p_Var4 + 0x40))(p_Var4 + 0x28);
    }
  }
  return;
}


