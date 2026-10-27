// Function : createScrollBarComponent
// Namespace: juce:Viewport
// Entry    : 00263880
// Prototype: undefined8 * createScrollBarComponent(undefined8 param_1_00, undefined1 param_2)
// Body     : 00263880 - 00263a43


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Viewport::createScrollBarComponent(bool) */

undefined8 * __thiscall
juce::Viewport::createScrollBarComponent(undefined8 param_1_00,undefined1 param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = operator_new(0x1b8);
  *puVar4 = &PTR__Component_00707878;
  puVar4[1] = &DAT_0061ac58;
  puVar4[2] = &DAT_0061ac58;
  puVar4[3] = &DAT_0061ac58;
  puVar4[4] = &DAT_0061ac58;
  puVar4[5] = &DAT_0061ac58;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1c] = 0;
  *(undefined8 *)((long)puVar4 + 0xe5) = 0;
  puVar4[0x1e] = &PTR__AsyncUpdater_00712b58;
  puVar4[0x1f] = 0;
                    /* try { // try from 00263926 to 0026392f has its CatchHandler @ 00263a44 */
  puVar5 = operator_new(0x20);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar5[2] = puVar4 + 0x1e;
  *(undefined4 *)(puVar5 + 3) = 0;
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  pvVar2 = (void *)puVar4[0x1f];
  puVar4[0x1f] = puVar5;
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar2);
    }
  }
  Timer::Timer((Timer *)(puVar4 + 0x20));
  *puVar4 = &PTR__ScrollBar_00708bc0;
  puVar4[0x1e] = &PTR__ScrollBar_00708d78;
  puVar4[0x20] = &PTR__ScrollBar_00708da0;
  uVar3 = _DAT_005d9000;
  puVar4[0x25] = 0;
  puVar4[0x26] = uVar3;
  puVar4[0x27] = 0;
  puVar4[0x28] = uVar3;
  puVar4[0x29] = 0x3fb999999999999a;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 0x3200000064;
  *(undefined4 *)(puVar4 + 0x2f) = 10;
  *(undefined1 *)((long)puVar4 + 0x17c) = param_2;
  *(undefined2 *)((long)puVar4 + 0x17d) = 0x100;
  *(undefined8 *)((long)puVar4 + 0x17f) = 0;
  *(undefined8 *)((long)puVar4 + 0x187) = 0;
  *(undefined8 *)((long)puVar4 + 399) = 0;
  *(undefined8 *)((long)puVar4 + 0x197) = 0;
  *(undefined8 *)((long)puVar4 + 0x19f) = 0;
  *(undefined8 *)((long)puVar4 + 0x1a7) = 0;
  *(undefined8 *)((long)puVar4 + 0x1ac) = 0;
  *(ushort *)(puVar4 + 0x1d) = *(ushort *)(puVar4 + 0x1d) | 0x40c0;
  return puVar4;
}


