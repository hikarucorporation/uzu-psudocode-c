// Function : withFonts
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 0023fde0
// Prototype: undefined withFonts(undefined8 * param_1, undefined8 * param_2, vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> * param_3)
// Body     : 0023fde0 - 0023ff09


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ShapedTextOptions::withFonts(juce::detail::RangedValues<juce::Font> const&) const
    */

void __cdecl
juce::detail::ShapedTextOptions::withFonts
          (undefined8 *param_1,undefined8 *param_2,
          vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  RangedValues<juce::Font>::RangedValues((RangedValues<juce::Font> *)&local_80,param_2 + 5);
  local_40 = param_2[0xd];
  local_50 = param_2[0xb];
  uStack_48 = param_2[0xc];
  local_38 = param_2[0xe];
  piVar6 = (int *)(local_38 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
                    /* try { // try from 0023fe55 to 0023fe70 has its CatchHandler @ 0023ff0a */
  std::vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>>::operator=
            ((vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *)&local_80,
             param_3);
  std::vector<juce::Font,std::allocator<juce::Font>>::operator=
            ((vector<juce::Font,std::allocator<juce::Font>> *)&local_68,
             (vector<juce::Font,std::allocator<juce::Font>> *)(param_3 + 0x18));
  *(undefined4 *)(param_1 + 4) = uVar1;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[5] = local_80;
  param_1[6] = uStack_78;
  param_1[7] = local_70;
  param_1[8] = local_68;
  param_1[9] = uStack_60;
  param_1[10] = local_58;
  param_1[0xd] = local_40;
  param_1[0xb] = local_50;
  param_1[0xc] = uStack_48;
  param_1[0xe] = local_38;
  return;
}


