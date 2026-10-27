// Function : copyState
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c4a10
// Prototype: undefined8 * copyState(undefined8 * param_1, long param_2)
// Body     : 001c4a10 - 001c4af6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorValueTreeState::copyState() */

undefined8 * __cdecl juce::AudioProcessorValueTreeState::copyState(undefined8 *param_1,long param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  _Rb_tree_node_base *p_Var2;
  SharedObject *this;
  
  __mutex = (pthread_mutex_t *)(param_2 + 0xb8);
  pthread_mutex_lock(__mutex);
  pthread_mutex_lock(__mutex);
  p_Var2 = *(_Rb_tree_node_base **)(param_2 + 0xa0);
  if (p_Var2 != (_Rb_tree_node_base *)(param_2 + 0x90)) {
    do {
                    /* try { // try from 001c4a69 to 001c4a70 has its CatchHandler @ 001c4b09 */
      ParameterAdapter::flushToTree
                (*(ParameterAdapter **)(p_Var2 + 0x28),(UndoManager *)(param_2 + 0x78),
                 *(UndoManager **)(param_2 + 0x68));
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2);
    } while (p_Var2 != (_Rb_tree_node_base *)(param_2 + 0x90));
  }
  pthread_mutex_unlock(__mutex);
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 == 0) {
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
                    /* try { // try from 001c4a93 to 001c4a9c has its CatchHandler @ 001c4b04 */
    this = operator_new(0x50);
                    /* try { // try from 001c4aa0 to 001c4aaa has its CatchHandler @ 001c4af7 */
    ValueTree::SharedObject::SharedObject(this,lVar1);
    *param_1 = this;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  pthread_mutex_unlock(__mutex);
  return param_1;
}


