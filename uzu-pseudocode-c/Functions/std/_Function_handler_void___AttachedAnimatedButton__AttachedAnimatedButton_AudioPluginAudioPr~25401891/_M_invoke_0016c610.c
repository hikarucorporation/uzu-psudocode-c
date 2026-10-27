// Function : _M_invoke
// Namespace: std:_Function_handler_void___AttachedAnimatedButton__AttachedAnimatedButton_AudioPluginAudioPr~25401891
// Entry    : 0016c610
// Prototype: undefined _M_invoke(long * param_1)
// Body     : 0016c610 - 0016c614


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   AttachedAnimatedButton::AttachedAnimatedButton(AudioPluginAudioProcessor&, param::PID,
   juce::Image const&, int, juce::Range<int>, juce::Range<int>,
   int)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void __cdecl
std::
_Function_handler<void(),AttachedAnimatedButton::AttachedAnimatedButton(AudioPluginAudioProcessor&,param::PID,juce::Image_const&,int,juce::Range<int>,juce::Range<int>,int)::{lambda()#1}>
::_M_invoke(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  var avStack_28 [16];
  
  lVar3 = *param_1;
  juce::Value::getValue(avStack_28,(undefined8 *)(lVar3 + 0x1c0));
  bVar4 = juce::var::operator_cast_to_bool(avStack_28);
  juce::var::~var(avStack_28);
  if ((bool)*(char *)(lVar3 + 0x310) != bVar4) {
    piVar5 = (int *)(lVar3 + 0x28c);
    if (bVar4) {
      piVar5 = (int *)(lVar3 + 0x284);
    }
    iVar1 = *piVar5;
    *(int *)(lVar3 + 0x274) = iVar1;
    piVar5 = (int *)(lVar3 + 0x290);
    if (bVar4) {
      piVar5 = (int *)(lVar3 + 0x288);
    }
    iVar2 = *piVar5;
    *(int *)(lVar3 + 0x278) = iVar2;
    *(uint *)(lVar3 + 0x27c) = (uint)(iVar1 < iVar2) * 2 + -1;
    juce::Timer::startTimerHz((Timer *)(lVar3 + 0x240),*(uint *)(lVar3 + 0x280));
    *(bool *)(lVar3 + 0x310) = bVar4;
  }
  return;
}


