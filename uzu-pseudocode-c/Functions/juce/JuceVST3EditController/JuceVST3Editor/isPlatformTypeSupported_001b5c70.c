// Function : isPlatformTypeSupported
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b5c70
// Prototype: undefined8 isPlatformTypeSupported(JuceVST3Editor * this, char * param_1)
// Body     : 001b5c70 - 001b5caa


/* juce::JuceVST3EditController::JuceVST3Editor::isPlatformTypeSupported(char const*) */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::isPlatformTypeSupported
          (JuceVST3Editor *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    cVar1 = (**(code **)(**(long **)(this + 0xd0) + 0xd0))();
    if (cVar1 != '\0') {
      iVar2 = strcmp(param_1,"X11EmbedWindowID");
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


