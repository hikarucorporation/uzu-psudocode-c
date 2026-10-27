// Function : parameterChanged
// Namespace: AudioPluginAudioProcessorEditor
// Entry    : 00169e80
// Prototype: undefined parameterChanged(float param_1, AudioPluginAudioProcessorEditor * this, undefined8 * param_3)
// Body     : 00169e80 - 00169f66


/* AudioPluginAudioProcessorEditor::parameterChanged(juce::String const&, float) */

void __thiscall
AudioPluginAudioProcessorEditor::parameterChanged
          (float param_1,AudioPluginAudioProcessorEditor *this,undefined8 *param_3)

{
  bool bVar1;
  undefined8 local_48;
  float local_3c;
  String local_38 [8];
  String local_30 [8];
  byte *local_28;
  
  local_3c = param_1;
  juce::String::String(local_38,(byte *)"1x/5x");
                    /* try { // try from 00169eab to 00169eb5 has its CatchHandler @ 00169f74 */
  juce::String::toLowerCase(&local_48,(undefined8 *)local_38);
  juce::StringRef::StringRef((StringRef *)&local_28,&DAT_005e3c3c);
                    /* try { // try from 00169ecc to 00169ed8 has its CatchHandler @ 00169f67 */
  juce::String::removeCharacters((undefined8 *)local_30,&local_48,local_28);
  juce::String::~String((String *)&local_48);
  juce::String::~String(local_38);
  bVar1 = juce::operator==(param_3,(undefined8 *)local_30);
  juce::String::~String(local_30);
  if (bVar1) {
    if (local_3c <= DAT_005d9044) {
      local_48._0_4_ = juce::Colours::white;
    }
    else {
      juce::Colour::Colour((Colour *)&local_48,(Colour)0x33,(Colour)0x99,(Colour)0xff);
    }
    *(undefined4 *)(this + 0x3028) = (undefined4)local_48;
    *(undefined4 *)(this + 0x3030) = 0;
    juce::Component::repaint((Component *)(this + 0x640));
  }
  return;
}


