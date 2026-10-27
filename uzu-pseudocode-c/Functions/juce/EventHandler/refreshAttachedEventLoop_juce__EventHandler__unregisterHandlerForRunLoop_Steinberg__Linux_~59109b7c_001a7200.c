// Function : refreshAttachedEventLoop<juce::EventHandler::unregisterHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::{lambda()#1}>
// Namespace: juce:EventHandler
// Entry    : 001a7200
// Prototype: void refreshAttachedEventLoop<juce::EventHandler::unregisterHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::{lambda()#1}>(EventHandler * this, long * param_1)
// Body     : 001a7200 - 001a730e


/* void 
   juce::EventHandler::refreshAttachedEventLoop<juce::EventHandler::unregisterHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::{lambda()#1}>(juce::EventHandler::unregisterHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::{lambda()#1}&&)
    */

void __thiscall
juce::EventHandler::
refreshAttachedEventLoop<juce::EventHandler::unregisterHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::_lambda()_1_>
          (EventHandler *this,long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  _Rb_tree_node_base *p_Var5;
  void *pvVar6;
  _Rb_tree_node_base *p_Var7;
  undefined4 *puVar8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  undefined4 *local_38;
  undefined4 *local_30;
  
  plVar1 = *(long **)(this + 0x58);
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a7229 to 001a722b has its CatchHandler @ 001a7317 */
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  }
  lVar3 = *param_1;
  p_Var5 = *(_Rb_tree_node_base **)(lVar3 + 0x38);
  if (p_Var5 != (_Rb_tree_node_base *)0x0) {
    p_Var9 = (_Rb_tree_node_base *)(lVar3 + 0x30);
    p_Var10 = p_Var9;
    do {
      p_Var7 = p_Var5 + 0x18;
      if ((ulong)param_1[1] <= *(ulong *)(p_Var5 + 0x20)) {
        p_Var7 = p_Var5 + 0x10;
        p_Var10 = p_Var5;
      }
      p_Var5 = *(_Rb_tree_node_base **)p_Var7;
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    if (p_Var10 != p_Var9) {
      if ((ulong)param_1[1] < *(ulong *)(p_Var10 + 0x20)) {
        p_Var10 = p_Var9;
      }
      if (p_Var10 != p_Var9) {
        pvVar6 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var10,p_Var9);
        operator_delete(pvVar6);
        *(long *)(lVar3 + 0x50) = *(long *)(lVar3 + 0x50) + -1;
      }
    }
  }
  if (*(EventHandler **)(this + 0x40) != this + 0x30) {
    plVar1 = *(long **)(*(EventHandler **)(this + 0x40) + 0x20);
    LinuxEventLoopInternal::getRegisteredFds((LinuxEventLoopInternal *)&local_38);
    puVar8 = local_38;
    if (local_38 != local_30) {
      do {
                    /* try { // try from 001a72c5 to 001a72cd has its CatchHandler @ 001a731f */
        (**(code **)(*plVar1 + 0x18))(plVar1,this,*puVar8);
        puVar8 = puVar8 + 1;
      } while (puVar8 != local_30);
    }
    if (local_38 != (undefined4 *)0x0) {
      operator_delete(local_38);
    }
    plVar4 = *(long **)(this + 0x58);
    uVar2 = *(undefined8 *)(this + 0x60);
    *(long **)(this + 0x58) = plVar1;
    *(EventHandler **)(this + 0x60) = this;
    if (plVar4 != (long *)0x0) {
                    /* try { // try from 001a7300 to 001a7302 has its CatchHandler @ 001a730f */
      (**(code **)(*plVar4 + 0x20))(plVar4,uVar2);
    }
  }
  return;
}


