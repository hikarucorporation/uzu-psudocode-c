// Function : resized
// Namespace: AudioPluginAudioProcessorEditor
// Entry    : 0016a2e0
// Prototype: undefined resized(AudioPluginAudioProcessorEditor * this)
// Body     : 0016a2e0 - 0016a4f3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioPluginAudioProcessorEditor::resized() */

void __thiscall AudioPluginAudioProcessorEditor::resized(AudioPluginAudioProcessorEditor *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  AffineTransform local_50 [24];
  float local_38 [6];
  
  juce::Component::setBounds((Component *)(this + 0x1a70),0,0,0x1a9,0x21c);
  fVar2 = (float)(int)*(undefined8 *)(this + 0x40);
  fVar3 = (float)(int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20);
  auVar4._4_4_ = fVar3;
  auVar4._0_4_ = fVar2;
  auVar4._8_8_ = 0;
  auVar4 = divps(auVar4,_DAT_005d91a0);
  fVar1 = auVar4._4_4_;
  if (auVar4._0_4_ <= auVar4._4_4_) {
    fVar1 = auVar4._0_4_;
  }
  fVar2 = (DAT_005d907c * fVar1 + fVar2) * DAT_005d9044;
  fVar3 = (DAT_005d9080 * fVar1 + fVar3) * DAT_005d9044;
  juce::AffineTransform::scale(fVar1,local_50);
  juce::AffineTransform::translated(fVar2,fVar3,(undefined8 *)local_38,(undefined8 *)local_50);
  juce::Component::setTransform((Component *)(this + 0x1a70),local_38);
  juce::Component::setBounds((Component *)(this + 0x1a0),0x1e,0x104,0x61,0x61);
  juce::Component::setBounds((Component *)(this + 0x3f0),0x12a,0x104,0x61,0x61);
  juce::Component::setBounds((Component *)(this + 0x640),0x1e,0x195,0x61,0x61);
  juce::Component::setBounds((Component *)(this + 0x890),0xa4,0x195,0x61,0x61);
  juce::Component::setBounds((Component *)(this + 0xae0),0x12a,0x195,0x61,0x61);
  juce::Component::setBounds((Component *)(this + 0xd30),0x99,0xfa,0x77,0x77);
  juce::Component::setBounds((Component *)(this + 0xf80),0x43,0xd1,0x123,0xc);
  juce::Component::setBounds((Component *)(this + 0x1418),0x97,5,0x5a,0x1e);
  juce::Component::setBounds((Component *)(this + 0x1730),0x103,5,0x22,0x1e);
  juce::Component::setBounds((Component *)(this + 0x11b0),0x136,5,0x6e,0x1e);
  return;
}


