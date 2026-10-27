// Function : getText
// Namespace: juce:AudioParameterBool
// Entry    : 004d1530
// Prototype: undefined8 getText(float param_1, undefined8 param_2, long param_3, undefined4 param_4)
// Body     : 004d1530 - 004d1579


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioParameterBool::getText(float, int) const */

undefined8 __cdecl
juce::AudioParameterBool::getText(float param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined1 local_d;
  undefined4 local_c;
  
  local_d = DAT_005d9044 <= param_1;
  local_c = param_4;
  if (*(long *)(param_3 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
  (**(code **)(param_3 + 0x118))(param_2,param_3 + 0x100,&local_d,&local_c);
  return param_2;
}


