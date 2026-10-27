// Function : fillAll
// Namespace: juce:Graphics
// Entry    : 0032c120
// Prototype: undefined fillAll(Graphics * this, uint param_1)
// Body     : 0032c120 - 0032c1cb


/* juce::Graphics::fillAll(juce::Colour) const */

void __thiscall juce::Graphics::fillAll(Graphics *this,uint param_1)

{
  long *plVar1;
  void *pvVar2;
  uint local_40 [2];
  void *local_38;
  long *plStack_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  if (0xffffff < param_1) {
    (**(code **)(**(long **)(this + 8) + 0x70))();
    local_38 = (void *)0x0;
    plStack_30 = (long *)0x0;
    local_28 = ZEXT416(DAT_005d9038);
    local_18 = 0x3f800000;
                    /* try { // try from 0032c16a to 0032c174 has its CatchHandler @ 0032c1cc */
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
    (**(code **)(**(long **)(this + 8) + 0xa8))();
    (**(code **)(**(long **)(this + 8) + 0x78))();
  }
  return;
}


