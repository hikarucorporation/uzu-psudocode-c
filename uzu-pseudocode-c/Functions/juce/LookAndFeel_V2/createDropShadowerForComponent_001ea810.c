// Function : createDropShadowerForComponent
// Namespace: juce:LookAndFeel_V2
// Entry    : 001ea810
// Prototype: undefined8 * createDropShadowerForComponent(undefined8 * param_1)
// Body     : 001ea810 - 001ea87a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::createDropShadowerForComponent(juce::Component&) */

undefined8 * __cdecl juce::LookAndFeel_V2::createDropShadowerForComponent(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
  puVar1 = operator_new(0x58);
  *puVar1 = &PTR__DropShadower_0070be20;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(uint *)(puVar1 + 4) = uVar2 | 0x66000000;
  *(undefined4 *)((long)puVar1 + 0x24) = 10;
  puVar1[5] = 0x200000000;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *param_1 = puVar1;
  return param_1;
}


