// Function : setColour
// Namespace: juce:Graphics
// Entry    : 002f5db0
// Prototype: undefined setColour(Graphics * this, undefined4 param_1)
// Body     : 002f5db0 - 002f5e42


/* juce::Graphics::setColour(juce::Colour) */

void __thiscall juce::Graphics::setColour(Graphics *this,undefined4 param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined4 local_40 [2];
  void *local_38;
  long *plStack_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  if (this[0x10] != (Graphics)0x0) {
    this[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(this + 8) + 0x70))();
  }
  local_38 = (void *)0x0;
  plStack_30 = (long *)0x0;
  local_28 = ZEXT416(DAT_005d9038);
  local_18 = 0x3f800000;
                    /* try { // try from 002f5df8 to 002f5e02 has its CatchHandler @ 002f5e43 */
  local_40[0] = param_1;
  (**(code **)(**(long **)(this + 8) + 0x90))(*(long **)(this + 8),local_40);
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plStack_30 + 8))();
    }
  }
  pvVar2 = local_38;
  if (local_38 != (void *)0x0) {
    *(undefined4 *)((long)local_38 + 0x24) = 0;
    free(*(void **)((long)local_38 + 0x18));
    operator_delete(pvVar2);
  }
  return;
}


