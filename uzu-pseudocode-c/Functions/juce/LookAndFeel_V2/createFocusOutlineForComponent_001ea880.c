// Function : createFocusOutlineForComponent
// Namespace: juce:LookAndFeel_V2
// Entry    : 001ea880
// Prototype: undefined8 * createFocusOutlineForComponent(undefined8 * param_1)
// Body     : 001ea880 - 001ea8ce


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::createFocusOutlineForComponent(juce::Component&) */

undefined8 * __cdecl juce::LookAndFeel_V2::createFocusOutlineForComponent(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  *puVar1 = &PTR__OutlineWindowProperties_0070ef28;
                    /* try { // try from 001ea89e to 001ea8a7 has its CatchHandler @ 001ea8cf */
  puVar2 = operator_new(0x30);
  *puVar2 = &PTR__FocusOutline_0070be80;
  puVar2[1] = puVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((long)puVar2 + 0x19) = 0;
  *(undefined8 *)((long)puVar2 + 0x21) = 0;
  *param_1 = puVar2;
  return param_1;
}


