// Function : operator<<
// Namespace: juce
// Entry    : 004a18d0
// Prototype: String * operator<<(String * param_1, undefined1 param_2)
// Body     : 004a18d0 - 004a190b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TEMPNAMEPLACEHOLDERVALUE(juce::String&, char) */

String * __cdecl juce::operator<<(String *param_1,undefined1 param_2)

{
  undefined8 in_RAX;
  size_t sVar1;
  undefined8 uStack_18;
  
  uStack_18 = (ulong)CONCAT16(param_2,(int6)in_RAX);
  sVar1 = strlen((char *)((long)&uStack_18 + 6));
  String::appendCharPointer(param_1,(char *)((long)&uStack_18 + 6),(long)&uStack_18 + sVar1 + 6);
  return param_1;
}


