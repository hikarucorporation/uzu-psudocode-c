// Function : canUnderstand
// Namespace: juce:JPEGImageFormat
// Entry    : 00356680
// Prototype: bool canUnderstand(undefined8 param_1_00, long * param_2)
// Body     : 00356680 - 003566bc


/* juce::JPEGImageFormat::canUnderstand(juce::InputStream&) */

bool __thiscall juce::JPEGImageFormat::canUnderstand(undefined8 param_1_00,long *param_2)

{
  int iVar1;
  char local_18;
  char local_17;
  char local_16;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2,&local_18,0x18);
  return (local_16 == -1 && (local_17 == -0x28 && local_18 == -1)) && iVar1 == 0x18;
}


