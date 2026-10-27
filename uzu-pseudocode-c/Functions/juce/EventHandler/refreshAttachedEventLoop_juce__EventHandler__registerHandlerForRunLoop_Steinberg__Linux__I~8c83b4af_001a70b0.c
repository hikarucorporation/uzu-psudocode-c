// Function : refreshAttachedEventLoop<juce::EventHandler::registerHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::{lambda()#1}>
// Namespace: juce:EventHandler
// Entry    : 001a70b0
// Prototype: void refreshAttachedEventLoop<juce::EventHandler::registerHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::{lambda()#1}>(EventHandler * this, long * param_1)
// Body     : 001a70b0 - 001a71d1


/* void 
   juce::EventHandler::refreshAttachedEventLoop<juce::EventHandler::registerHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::{lambda()#1}>(juce::EventHandler::registerHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::{lambda()#1}&&)
    */

void __thiscall
juce::EventHandler::
refreshAttachedEventLoop<juce::EventHandler::registerHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::_lambda()_1_>
          (EventHandler *this,long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  undefined4 *puVar8;
  bool bVar9;
  _Rb_tree_node_base *p_Var10;
  undefined4 *local_48;
  undefined4 *local_40;
  
  plVar1 = *(long **)(this + 0x58);
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a70dc to 001a70de has its CatchHandler @ 001a71da */
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  }
  lVar3 = *param_1;
  uVar4 = param_1[1];
  p_Var10 = (_Rb_tree_node_base *)(lVar3 + 0x30);
  p_Var6 = *(_Rb_tree_node_base **)(lVar3 + 0x38);
  if (*(_Rb_tree_node_base **)(lVar3 + 0x38) == (_Rb_tree_node_base *)0x0) {
    bVar9 = true;
    p_Var7 = p_Var10;
  }
  else {
    do {
      p_Var7 = p_Var6;
      p_Var6 = *(_Rb_tree_node_base **)
                (p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) <= uVar4) * 8 + 0x10);
    } while (*(_Rb_tree_node_base **)
              (p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) <= uVar4) * 8 + 0x10) !=
             (_Rb_tree_node_base *)0x0);
    bVar9 = p_Var7 == p_Var10 || uVar4 < *(ulong *)(p_Var7 + 0x20);
  }
  p_Var6 = operator_new(0x28);
  *(ulong *)(p_Var6 + 0x20) = uVar4;
  std::_Rb_tree_insert_and_rebalance(bVar9,p_Var6,p_Var7,p_Var10);
  *(long *)(lVar3 + 0x50) = *(long *)(lVar3 + 0x50) + 1;
  if (*(EventHandler **)(this + 0x40) != this + 0x30) {
    plVar1 = *(long **)(*(EventHandler **)(this + 0x40) + 0x20);
    LinuxEventLoopInternal::getRegisteredFds((LinuxEventLoopInternal *)&local_48);
    puVar8 = local_48;
    if (local_48 != local_40) {
      do {
                    /* try { // try from 001a7185 to 001a718d has its CatchHandler @ 001a71e2 */
        (**(code **)(*plVar1 + 0x18))(plVar1,this,*puVar8);
        puVar8 = puVar8 + 1;
      } while (puVar8 != local_40);
    }
    if (local_48 != (undefined4 *)0x0) {
      operator_delete(local_48);
    }
    plVar5 = *(long **)(this + 0x58);
    uVar2 = *(undefined8 *)(this + 0x60);
    *(long **)(this + 0x58) = plVar1;
    *(EventHandler **)(this + 0x60) = this;
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 001a71c0 to 001a71c2 has its CatchHandler @ 001a71d2 */
      (**(code **)(*plVar5 + 0x20))(plVar5,uVar2);
    }
  }
  return;
}


