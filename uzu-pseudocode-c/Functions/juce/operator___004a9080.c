// Function : operator<<
// Namespace: juce
// Entry    : 004a9080
// Prototype: long * operator<<(long * param_1, char * param_2)
// Body     : 004a9080 - 004a90ab


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TEMPNAMEPLACEHOLDERVALUE(juce::OutputStream&, char const*) */

long * __cdecl juce::operator<<(long *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  (**(code **)(*param_1 + 0x28))(param_1,param_2,sVar1);
  return param_1;
}


