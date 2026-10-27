// Function : timerCallback
// Namespace: AudioPluginAudioProcessorEditor
// Entry    : 001699a0
// Prototype: undefined timerCallback(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, AudioPluginAudioProcessorEditor * this)
// Body     : 001699a0 - 00169a43


/* AudioPluginAudioProcessorEditor::timerCallback() */

void __thiscall
AudioPluginAudioProcessorEditor::timerCallback
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          AudioPluginAudioProcessorEditor *this)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  updateParticles(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this);
  if (*(float *)(this + 0x3030) < DAT_005d9038) {
    fVar2 = *(float *)(this + 0x3030) + DAT_005d904c;
    fVar3 = DAT_005d9038;
    if (fVar2 <= DAT_005d9038) {
      fVar3 = fVar2;
    }
    *(float *)(this + 0x3030) = fVar3;
    uVar1 = juce::Colour::interpolatedWith
                      (DAT_005d9050,(Colour *)(this + 0x302c),(ulong)*(uint *)(this + 0x3028));
    *(int *)(this + 0x302c) = (int)uVar1;
    juce::Component::setColour((Component *)(this + 0x640),0x1001311,(int)uVar1);
    juce::Component::repaint((Component *)(this + 0x640));
    juce::Component::setColour((Component *)(this + 0xd30),0x1001311,*(undefined4 *)(this + 0x302c))
    ;
    juce::Component::repaint((Component *)(this + 0xd30));
  }
  juce::Component::repaint((Component *)this);
  return;
}


