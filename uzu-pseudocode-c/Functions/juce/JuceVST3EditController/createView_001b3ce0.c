// Function : createView
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3ce0
// Prototype: JuceVST3Editor * createView(JuceVST3EditController * this, char * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001b3ce0 - 001b3dec


/* juce::JuceVST3EditController::createView(char const*) */

JuceVST3Editor * __thiscall
juce::JuceVST3EditController::createView
          (JuceVST3EditController *this,char *param_1,undefined8 param_2,undefined8 param_3,
          uint *param_4,undefined8 param_5)

{
  AudioProcessor *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  JuceVST3Editor *this_01;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar4;
  undefined1 *puVar5;
  
  if ((*(long *)(this + 0xe8) != 0) &&
     (this_00 = *(AudioProcessor **)(*(long *)(this + 0xe8) + 0xd8),
     this_00 != (AudioProcessor *)0x0)) {
    cVar1 = (**(code **)(*(long *)this_00 + 0xd0))(this_00);
    if (param_1 == (char *)0x0) {
      return (JuceVST3Editor *)0x0;
    }
    if (cVar1 == '\0') {
      return (JuceVST3Editor *)0x0;
    }
    pcVar4 = "editor";
    iVar2 = strcmp(param_1,"editor");
    if (iVar2 == 0) {
      lVar3 = AudioProcessor::getActiveEditor(this_00);
      if (lVar3 != 0) {
        if (detail::PluginUtilities::getHostType()::hostType == '\0') {
          puVar5 = &detail::PluginUtilities::getHostType()::hostType;
          iVar2 = __cxa_guard_acquire();
          if (iVar2 != 0) {
                    /* try { // try from 001b3dab to 001b3daf has its CatchHandler @ 001b3def */
            detail::PluginUtilities::getHostType()::hostType =
                 PluginHostType::getHostType(puVar5,pcVar4,extraout_RDX,param_3,param_4,param_5);
            __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
          }
        }
        if (detail::PluginUtilities::getHostType()::hostType != 8) {
          if (detail::PluginUtilities::getHostType()::hostType == '\0') {
            puVar5 = &detail::PluginUtilities::getHostType()::hostType;
            iVar2 = __cxa_guard_acquire();
            if (iVar2 != 0) {
                    /* try { // try from 001b3dd4 to 001b3dd8 has its CatchHandler @ 001b3ded */
              detail::PluginUtilities::getHostType()::hostType =
                   PluginHostType::getHostType
                             (puVar5,pcVar4,extraout_RDX_00,param_3,param_4,param_5);
              __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
            }
          }
          if (detail::PluginUtilities::getHostType()::hostType != 9) {
            return (JuceVST3Editor *)0x0;
          }
        }
      }
      this_01 = operator_new(0xf0);
                    /* try { // try from 001b3d8a to 001b3d94 has its CatchHandler @ 001b3e06 */
      JuceVST3Editor::JuceVST3Editor(this_01,(long *)this,*(long *)(this + 0xe8));
      return this_01 + 0x10;
    }
  }
  return (JuceVST3Editor *)0x0;
}


