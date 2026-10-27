// Function : refreshAttachedEventLoop<juce::EventHandler::fdCallbacksChanged()::{lambda()#1}>
// Namespace: juce:EventHandler
// Entry    : 001a6f90
// Prototype: void refreshAttachedEventLoop<juce::EventHandler::fdCallbacksChanged()::{lambda()#1}>(long param_1)
// Body     : 001a6f90 - 001a702e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   juce::EventHandler::refreshAttachedEventLoop<juce::EventHandler::fdCallbacksChanged()::{lambda()#1}>(juce::EventHandler::fdCallbacksChanged()::{lambda()#1}&&)
    */

void __cdecl
juce::EventHandler::refreshAttachedEventLoop<juce::EventHandler::fdCallbacksChanged()::_lambda()_1_>
          (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *local_38;
  undefined4 *local_30;
  
  plVar1 = *(long **)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a6fb6 to 001a6fb8 has its CatchHandler @ 001a7037 */
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  }
  if (*(long *)(param_1 + 0x40) != param_1 + 0x30) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x40) + 0x20);
    LinuxEventLoopInternal::getRegisteredFds((LinuxEventLoopInternal *)&local_38);
    puVar4 = local_38;
    if (local_38 != local_30) {
      do {
                    /* try { // try from 001a6fe5 to 001a6fed has its CatchHandler @ 001a703f */
        (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*puVar4);
        puVar4 = puVar4 + 1;
      } while (puVar4 != local_30);
    }
    if (local_38 != (undefined4 *)0x0) {
      operator_delete(local_38);
    }
    plVar3 = *(long **)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(long **)(param_1 + 0x58) = plVar1;
    *(long *)(param_1 + 0x60) = param_1;
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 001a7020 to 001a7022 has its CatchHandler @ 001a702f */
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar2);
    }
  }
  return;
}


