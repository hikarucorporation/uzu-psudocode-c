// Function : mouseUp
// Namespace: juce:Viewport:DragToScrollListener
// Entry    : 00269cb0
// Prototype: undefined mouseUp(DragToScrollListener * this, long param_1)
// Body     : 00269cb0 - 00269e75


/* juce::Viewport::DragToScrollListener::mouseUp(juce::MouseEvent const&) */

void __thiscall
juce::Viewport::DragToScrollListener::mouseUp(DragToScrollListener *this,long param_1)

{
  DragToScrollListener DVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *__ptr;
  Desktop *pDVar4;
  long lVar5;
  uint uVar6;
  
  if ((this[0x169] == (DragToScrollListener)0x0) ||
     (*(long *)(param_1 + 0x50) != *(long *)(this + 0x160))) {
    return;
  }
  DVar1 = this[0x168];
  this[0x168] = (DragToScrollListener)0x0;
  if (DVar1 != (DragToScrollListener)0x0) {
    iVar2 = *(int *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = 0x10;
    if (iVar2 == 0) {
                    /* try { // try from 00269cfe to 00269d02 has its CatchHandler @ 00269e7e */
      Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x30),(long)(this + 0x18));
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x30),(long)(this + 0x18));
    }
    iVar2 = *(int *)(this + 200);
    *(undefined4 *)(this + 200) = 0x10;
    if (iVar2 == 0) {
                    /* try { // try from 00269d2b to 00269d2f has its CatchHandler @ 00269e76 */
      Timer::TimerThread::addTimer(*(TimerThread **)(this + 0xd0),(long)(this + 0xb8));
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0xd0),(long)(this + 0xb8));
    }
  }
  lVar5 = *(long *)(this + 0x10);
  puVar3 = *(undefined8 **)(lVar5 + 0x1a0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = operator_new(0x18);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined8 **)(lVar5 + 0x1a0) = puVar3;
    __ptr = (undefined8 *)*puVar3;
    iVar2 = *(int *)((long)puVar3 + 0xc);
  }
  else {
    __ptr = (undefined8 *)*puVar3;
    iVar2 = *(int *)((long)puVar3 + 0xc);
  }
  if ((long)iVar2 != 0) {
    lVar5 = 0;
    do {
      if (*(DragToScrollListener **)((long)__ptr + lVar5) == this) goto LAB_00269e2e;
      lVar5 = lVar5 + 8;
    } while ((long)iVar2 * 8 != lVar5);
  }
  if ((int)*(uint *)(puVar3 + 1) <= iVar2) {
    uVar6 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar3 + 1) != uVar6) {
      if ((int)uVar6 < 1) {
        free(__ptr);
        *puVar3 = 0;
        __ptr = (undefined8 *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar6 << 3);
        *puVar3 = __ptr;
      }
    }
    *(uint *)(puVar3 + 1) = uVar6;
    iVar2 = *(int *)((long)puVar3 + 0xc);
  }
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    memmove(__ptr + 1,__ptr,(long)iVar2 << 3);
    __ptr = (undefined8 *)*puVar3;
    iVar2 = *(int *)((long)puVar3 + 0xc) + 1;
  }
  *__ptr = this;
  *(int *)((long)puVar3 + 0xc) = iVar2;
  *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
LAB_00269e2e:
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar4 = operator_new(0x1d0);
                    /* try { // try from 00269e47 to 00269e4e has its CatchHandler @ 00269e86 */
    Desktop::Desktop(pDVar4);
    Desktop::instance = pDVar4;
  }
  pDVar4 = Desktop::instance;
  ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
  remove((ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
          *)(Desktop::instance + 0x48),(long)this);
  Desktop::resetTimer(pDVar4);
  this[0x169] = (DragToScrollListener)0x0;
  return;
}


