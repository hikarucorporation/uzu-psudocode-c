// Function : setGradientFill
// Namespace: juce:Graphics
// Entry    : 002f5fb0
// Prototype: undefined setGradientFill(Graphics * this, undefined8 * param_1)
// Body     : 002f5fb0 - 002f608b


/* juce::Graphics::setGradientFill(juce::ColourGradient&&) */

void __thiscall juce::Graphics::setGradientFill(Graphics *this,undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_40 [2];
  undefined8 *local_38;
  long *local_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_40[0] = 0xff000000;
  local_38 = operator_new(0x28);
  uVar2 = param_1[1];
  *local_38 = *param_1;
  local_38[1] = uVar2;
  *(undefined1 *)(local_38 + 2) = *(undefined1 *)(param_1 + 2);
  local_38[3] = param_1[3];
  param_1[3] = 0;
  *(undefined4 *)(local_38 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((long)local_38 + 0x24) = *(undefined4 *)((long)param_1 + 0x24);
  param_1[4] = 0;
  local_30 = (long *)0x0;
  local_28 = ZEXT416(DAT_005d9038);
  local_18 = 0x3f800000;
  if (this[0x10] != (Graphics)0x0) {
    this[0x10] = (Graphics)0x0;
                    /* try { // try from 002f6036 to 002f604a has its CatchHandler @ 002f608c */
    (**(code **)(**(long **)(this + 8) + 0x70))();
  }
  (**(code **)(**(long **)(this + 8) + 0x90))(*(long **)(this + 8),local_40);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_30 + 8))();
    }
  }
  puVar3 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    *(undefined4 *)((long)local_38 + 0x24) = 0;
    free((void *)local_38[3]);
    operator_delete(puVar3);
  }
  return;
}


