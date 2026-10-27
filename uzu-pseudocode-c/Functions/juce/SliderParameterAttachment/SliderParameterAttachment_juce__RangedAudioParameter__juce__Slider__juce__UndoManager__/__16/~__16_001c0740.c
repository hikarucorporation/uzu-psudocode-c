// Function : ~$_16
// Namespace: juce:SliderParameterAttachment:SliderParameterAttachment_juce__RangedAudioParameter__juce__Slider__juce__UndoManager__:__16
// Entry    : 001c0740
// Prototype: undefined ~$_16($_16 * this)
// Body     : 001c0740 - 001c078d


/* ~$_16() */

void __thiscall
juce::SliderParameterAttachment::
SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_16::~__16
          (__16 *this)

{
  if (*(code **)(this + 0x68) != (code *)0x0) {
                    /* try { // try from 001c0751 to 001c075a has its CatchHandler @ 001c079e */
    (**(code **)(this + 0x68))(this + 0x58,this + 0x58,3);
  }
  if (*(code **)(this + 0x48) != (code *)0x0) {
                    /* try { // try from 001c0768 to 001c0771 has its CatchHandler @ 001c0796 */
    (**(code **)(this + 0x48))(this + 0x38,this + 0x38,3);
  }
  if (*(code **)(this + 0x28) != (code *)0x0) {
                    /* try { // try from 001c077f to 001c078b has its CatchHandler @ 001c078e */
    (**(code **)(this + 0x28))(this + 0x18,this + 0x18,3);
  }
  return;
}


