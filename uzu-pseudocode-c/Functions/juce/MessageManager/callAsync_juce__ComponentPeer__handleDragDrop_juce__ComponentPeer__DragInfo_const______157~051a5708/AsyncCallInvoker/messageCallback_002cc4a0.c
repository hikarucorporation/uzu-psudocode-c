// Function : messageCallback
// Namespace: juce:MessageManager:callAsync_juce__ComponentPeer__handleDragDrop_juce__ComponentPeer__DragInfo_const______157~051a5708:AsyncCallInvoker
// Entry    : 002cc4a0
// Prototype: undefined messageCallback(AsyncCallInvoker * this)
// Body     : 002cc4a0 - 002cc50f


/* messageCallback() */

void __thiscall
juce::MessageManager::
callAsync<juce::ComponentPeer::handleDragDrop(juce::ComponentPeer::DragInfo_const&)::$_157>(juce::ComponentPeer::handleDragDrop(juce::ComponentPeer::DragInfo_const&)::$_157&&)
::AsyncCallInvoker::messageCallback(AsyncCallInvoker *this)

{
  long lVar1;
  long *plVar2;
  AsyncCallInvoker *pAVar3;
  
  if ((*(long *)(this + 0x10) == 0) ||
     (lVar1 = *(long *)(*(long *)(this + 0x10) + 0x10), lVar1 == 0)) {
    return;
  }
  if (*(int *)(this + 0x24) == 0) {
    plVar2 = (long *)__dynamic_cast(lVar1,&Component::typeinfo,&TextDragAndDropTarget::typeinfo,
                                    0xfffffffffffffffe);
    pAVar3 = this + 0x48;
  }
  else {
    plVar2 = (long *)__dynamic_cast(lVar1,&Component::typeinfo,&FileDragAndDropTarget::typeinfo,
                                    0xfffffffffffffffe);
    pAVar3 = this + 0x38;
  }
                    /* WARNING: Could not recover jumptable at 0x002cc50d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))
            (plVar2,pAVar3,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54),
             *(code **)(*plVar2 + 0x30));
  return;
}


