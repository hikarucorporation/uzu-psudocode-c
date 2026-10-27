// Function : destroy<juce::DynamicChannelMapping>
// Namespace: std:allocator_traits_std__allocator_juce__DynamicChannelMapping__
// Entry    : 001adbc0
// Prototype: void destroy<juce::DynamicChannelMapping>(undefined8 param_1, BigInteger * param_2)
// Body     : 001adbc0 - 001adbda


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::allocator_traits<std::allocator<juce::DynamicChannelMapping>
   >::destroy<juce::DynamicChannelMapping>(std::allocator<juce::DynamicChannelMapping>&,
   juce::DynamicChannelMapping*) */

void __cdecl
std::allocator_traits<std::allocator<juce::DynamicChannelMapping>>::
destroy<juce::DynamicChannelMapping>(undefined8 param_1,BigInteger *param_2)

{
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(param_2 + 0x28));
  }
  juce::BigInteger::~BigInteger(param_2);
  return;
}


