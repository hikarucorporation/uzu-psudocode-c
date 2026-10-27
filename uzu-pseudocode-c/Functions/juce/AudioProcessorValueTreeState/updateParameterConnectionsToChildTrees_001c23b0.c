// Function : updateParameterConnectionsToChildTrees
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c23b0
// Prototype: undefined updateParameterConnectionsToChildTrees(AudioProcessorValueTreeState * this)
// Body     : 001c23b0 - 001c2711


/* juce::AudioProcessorValueTreeState::updateParameterConnectionsToChildTrees() */

void __thiscall
juce::AudioProcessorValueTreeState::updateParameterConnectionsToChildTrees
          (AudioProcessorValueTreeState *this)

{
  ValueTree *this_00;
  pthread_mutex_t *__mutex;
  _Rb_tree_node_base *p_Var1;
  long lVar2;
  long lVar3;
  _Rb_tree_node_base *p_Var4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 *local_b0;
  long local_a8;
  AudioProcessorValueTreeState *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  __mutex = (pthread_mutex_t *)(this + 0xb8);
  pthread_mutex_lock(__mutex);
  p_Var4 = *(_Rb_tree_node_base **)(this + 0xa0);
  p_Var1 = (_Rb_tree_node_base *)(this + 0x90);
  if (p_Var4 != p_Var1) {
    do {
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      local_7c = 0;
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
                    /* try { // try from 001c240a to 001c2411 has its CatchHandler @ 001c2738 */
      ValueTree::operator=((ValueTree *)(*(long *)(p_Var4 + 0x28) + 8),(long *)&local_98);
      ValueTree::~ValueTree((ValueTree *)&local_98);
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4);
    } while (p_Var4 != p_Var1);
  }
  lVar2 = *(long *)(this + 0x38);
  if (lVar2 == 0) {
    plVar7 = (long *)0x0;
    plVar8 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(lVar2 + 0x28);
    plVar8 = plVar7 + *(int *)(lVar2 + 0x34);
  }
  local_a0 = this + 0x88;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
    local_98 = (undefined8 *)*plVar7;
    if (local_98 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_98 + 1) = *(int *)(local_98 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_98 + 1) = *(int *)(local_98 + 1) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    local_7c = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = 0;
    local_60 = local_98;
                    /* try { // try from 001c24d9 to 001c24e3 has its CatchHandler @ 001c2747 */
    setNewState(this,(long *)&local_60);
    ValueTree::~ValueTree((ValueTree *)&local_60);
    ValueTree::~ValueTree((ValueTree *)&local_98);
  }
  p_Var4 = *(_Rb_tree_node_base **)(local_a0 + 0x18);
  if (p_Var4 != p_Var1) {
    do {
      lVar2 = *(long *)(p_Var4 + 0x28);
      if (*(long *)(lVar2 + 8) == 0) {
                    /* try { // try from 001c2561 to 001c256a has its CatchHandler @ 001c2726 */
        local_98 = operator_new(0x50);
        this_00 = (ValueTree *)(lVar2 + 8);
        *(undefined4 *)(local_98 + 1) = 0;
        *local_98 = &PTR__SharedObject_00713ff0;
        lVar3 = *(long *)(this + 0x70);
        local_98[2] = lVar3;
        piVar6 = (int *)(lVar3 + -0x10);
        if (piVar6 != &emptyString) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        local_98[7] = 0;
        local_98[8] = 0;
        local_98[5] = 0;
        local_98[6] = 0;
        local_98[3] = 0;
        local_98[4] = 0;
        local_98[9] = 0;
        LOCK();
        *(int *)(local_98 + 1) = *(int *)(local_98 + 1) + 1;
        UNLOCK();
        uStack_80 = 0;
        local_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
                    /* try { // try from 001c25ce to 001c25d8 has its CatchHandler @ 001c2721 */
        ValueTree::operator=(this_00,(long *)&local_98);
        ValueTree::~ValueTree((ValueTree *)&local_98);
        local_b0 = &var::Instance::attributesString;
        local_a8 = *(long *)(*(long *)(lVar2 + 0x38) + 0x60);
        piVar6 = (int *)(local_a8 + -0x10);
        if (piVar6 != &emptyString) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        puVar9 = *(undefined8 **)this_00;
                    /* try { // try from 001c2616 to 001c2622 has its CatchHandler @ 001c2714 */
        if ((puVar9 != (undefined8 *)0x0) &&
           (uVar5 = NamedValueSet::set((NamedValueSet *)(puVar9 + 3),(long *)(this + 0x80),
                                       (long *)&local_b0), (char)uVar5 != '\0')) {
          LOCK();
          *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
          UNLOCK();
          uStack_80 = 0;
          local_7c = 0;
          uStack_78 = 0;
          uStack_74 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_70 = 0;
          local_98 = puVar9;
          do {
                    /* try { // try from 001c2650 to 001c265f has its CatchHandler @ 001c2760 */
            ValueTree::SharedObject::
            callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_>
                      ((long)puVar9,(long *)0x0,(ValueTree *)&local_98,this + 0x80);
            puVar9 = (undefined8 *)puVar9[9];
          } while (puVar9 != (undefined8 *)0x0);
          ValueTree::~ValueTree((ValueTree *)&local_98);
        }
                    /* try { // try from 001c2676 to 001c267d has its CatchHandler @ 001c2719 */
        (**(code **)(local_b0 + 0x58))(&local_a8);
        if (*(SharedObject **)(this + 0x38) != (SharedObject *)0x0) {
                    /* try { // try from 001c2696 to 001c26a1 has its CatchHandler @ 001c2712 */
          ValueTree::SharedObject::addChild
                    (*(SharedObject **)(this + 0x38),*(SharedObject **)this_00,0xffffffff,
                     (UndoManager *)0x0);
        }
      }
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4);
    } while (p_Var4 != p_Var1);
  }
  pthread_mutex_lock(__mutex);
  p_Var4 = *(_Rb_tree_node_base **)(local_a0 + 0x18);
  if (p_Var4 != p_Var1) {
    do {
                    /* try { // try from 001c26d8 to 001c26df has its CatchHandler @ 001c272b */
      ParameterAdapter::flushToTree
                (*(ParameterAdapter **)(p_Var4 + 0x28),(UndoManager *)(this + 0x78),
                 *(UndoManager **)(this + 0x68));
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var4);
    } while (p_Var4 != p_Var1);
  }
  pthread_mutex_unlock(__mutex);
  pthread_mutex_unlock(__mutex);
  return;
}


