// Function : __cxx_global_var_init.261
// Namespace: 
// Entry    : 00162520
// Prototype: undefined __cxx_global_var_init.261(void)
// Body     : 00162520 - 001625e7


void __cxx_global_var_init_261(void)

{
  int iVar1;
  
  if (juce::Ambisonics::mappings == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::Ambisonics::mappings);
    if (iVar1 != 0) {
      juce::Ambisonics::mappings = 0xfffffffff;
                    /* try { // try from 0016255f to 0016256f has its CatchHandler @ 001625e8 */
      juce::AudioChannelSet::ambisonic((AudioChannelSet *)&DAT_0071b698,5);
      DAT_0071b6c0 = 0x1ffffffffffff;
                    /* try { // try from 00162588 to 001625bb has its CatchHandler @ 001625ed */
      juce::AudioChannelSet::ambisonic((AudioChannelSet *)&DAT_0071b6c8,6);
      DAT_0071b6f0 = 0xffffffffffffffff;
      juce::AudioChannelSet::ambisonic((AudioChannelSet *)&DAT_0071b6f8,7);
      __cxa_atexit(__cxx_global_array_dtor,0,&__dso_handle);
      __cxa_guard_release(&juce::Ambisonics::mappings);
      return;
    }
  }
  return;
}


