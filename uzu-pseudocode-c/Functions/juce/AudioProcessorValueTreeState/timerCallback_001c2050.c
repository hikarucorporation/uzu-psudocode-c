// Function : timerCallback
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c2050
// Prototype: undefined timerCallback(AudioProcessorValueTreeState * this)
// Body     : 001c2050 - 001c214a


/* juce::AudioProcessorValueTreeState::timerCallback() */

void __thiscall
juce::AudioProcessorValueTreeState::timerCallback(AudioProcessorValueTreeState *this)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  TimerThread *this_00;
  ulong uVar2;
  _Rb_tree_node_base *p_Var3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  __mutex = (pthread_mutex_t *)(this + 0xb8);
  pthread_mutex_lock(__mutex);
  p_Var3 = *(_Rb_tree_node_base **)(this + 0xa0);
  if (p_Var3 == (_Rb_tree_node_base *)(this + 0x90)) {
    pthread_mutex_unlock(__mutex);
  }
  else {
    bVar6 = 0;
    do {
                    /* try { // try from 001c2098 to 001c209f has its CatchHandler @ 001c2153 */
      uVar2 = ParameterAdapter::flushToTree
                        (*(ParameterAdapter **)(p_Var3 + 0x28),(UndoManager *)(this + 0x78),
                         *(UndoManager **)(this + 0x68));
      bVar6 = bVar6 | (byte)uVar2;
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var3);
    } while (p_Var3 != (_Rb_tree_node_base *)(this + 0x90));
    pthread_mutex_unlock(__mutex);
    if ((bVar6 & 1) != 0) {
      iVar1 = *(int *)(this + 0x10);
      *(undefined4 *)(this + 0x10) = 0x14;
      this_00 = *(TimerThread **)(this + 0x18);
      goto joined_r0x001c2121;
    }
  }
  iVar1 = *(int *)(this + 0x10);
  iVar5 = 0x1e0;
  if (iVar1 < 0x1e0) {
    iVar5 = iVar1;
  }
  iVar4 = 0x32;
  if (0x1d < iVar1) {
    iVar4 = iVar5 + 0x14;
  }
  if (iVar4 < 2) {
    *(undefined4 *)(this + 0x10) = 1;
    this_00 = *(TimerThread **)(this + 0x18);
  }
  else {
    *(int *)(this + 0x10) = iVar4;
    this_00 = *(TimerThread **)(this + 0x18);
  }
joined_r0x001c2121:
  if (iVar1 == 0) {
                    /* try { // try from 001c20d4 to 001c20db has its CatchHandler @ 001c214b */
    Timer::TimerThread::addTimer(this_00,(long)this);
    return;
  }
  Timer::TimerThread::resetTimerCounter(this_00,(long)this);
  return;
}


