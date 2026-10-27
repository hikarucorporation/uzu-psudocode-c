// Function : createCaretComponent
// Namespace: juce:LookAndFeel_V2
// Entry    : 00200310
// Prototype: undefined8 * createCaretComponent(undefined8 param_1_00, undefined8 param_2)
// Body     : 00200310 - 00200403


/* non-virtual thunk to juce::LookAndFeel_V2::createCaretComponent(juce::Component*) */

undefined8 * __thiscall
juce::LookAndFeel_V2::createCaretComponent(undefined8 param_1_00,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = operator_new(0x120);
  *puVar1 = &PTR__Component_00707878;
  puVar1[1] = &DAT_0061ac58;
  puVar1[2] = &DAT_0061ac58;
  puVar1[3] = &DAT_0061ac58;
  puVar1[4] = &DAT_0061ac58;
  puVar1[5] = &DAT_0061ac58;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  *(undefined8 *)((long)puVar1 + 0xe5) = 0;
  Timer::Timer((Timer *)(puVar1 + 0x1e));
  *puVar1 = &PTR__CaretComponent_00708600;
  puVar1[0x1e] = &PTR__CaretComponent_007087b8;
  puVar1[0x23] = param_2;
  uVar2 = *(uint3 *)(puVar1 + 0x1d) & 0xfeffe7 | 0x10008;
  *(short *)(puVar1 + 0x1d) = (short)uVar2;
  *(char *)((long)puVar1 + 0xea) = (char)(uVar2 >> 0x10);
  return puVar1;
}


