// Function : setGradientFill
// Namespace: juce:Graphics
// Entry    : 002f5e60
// Prototype: undefined setGradientFill(Graphics * this, undefined8 * param_1)
// Body     : 002f5e60 - 002f5f8b


/* juce::Graphics::setGradientFill(juce::ColourGradient const&) */

void __thiscall juce::Graphics::setGradientFill(Graphics *this,undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  void *__src;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *__dest;
  uint uVar5;
  undefined4 local_60 [2];
  undefined8 *local_58;
  long *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  local_60[0] = 0xff000000;
  puVar4 = operator_new(0x28);
  uVar3 = param_1[1];
  *puVar4 = *param_1;
  puVar4[1] = uVar3;
  *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(param_1 + 2);
  puVar4[3] = 0;
  puVar4[4] = 0;
  uVar2 = *(uint *)((long)param_1 + 0x24);
  if (0 < (int)uVar2) {
    __src = (void *)param_1[3];
    uVar5 = (uVar2 >> 1) + uVar2 + 8 & 0xfffffff8;
    if ((int)uVar5 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc((ulong)uVar5 << 4);
      puVar4[3] = __dest;
    }
    *(uint *)(puVar4 + 4) = uVar5;
    memcpy(__dest,__src,(ulong)uVar2 << 4);
  }
  *(uint *)((long)puVar4 + 0x24) = uVar2;
  local_50 = (long *)0x0;
  local_48 = ZEXT416(DAT_005d9038);
  local_38 = 0x3f800000;
  local_58 = puVar4;
  if (this[0x10] != (Graphics)0x0) {
    this[0x10] = (Graphics)0x0;
                    /* try { // try from 002f5f2f to 002f5f43 has its CatchHandler @ 002f5f8c */
    (**(code **)(**(long **)(this + 8) + 0x70))();
  }
  (**(code **)(**(long **)(this + 8) + 0x90))(*(long **)(this + 8),local_60);
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_50 + 8))();
    }
  }
  puVar4 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    *(undefined4 *)((long)local_58 + 0x24) = 0;
    free((void *)local_58[3]);
    operator_delete(puVar4);
  }
  return;
}


