// Function : ~AudioBus
// Namespace: Steinberg:Vst:AudioBus
// Entry    : 001a0550
// Prototype: undefined ~AudioBus(AudioBus * this)
// Body     : 001a0550 - 001a0578


/* Steinberg::Vst::AudioBus::~AudioBus() */

void __thiscall Steinberg::Vst::AudioBus::~AudioBus(AudioBus *this)

{
  *(undefined ***)this = &PTR_queryInterface_007030c0;
  if (*(AudioBus **)(this + 0x10) != this + 0x20) {
    operator_delete(*(AudioBus **)(this + 0x10));
  }
  operator_delete(this);
  return;
}


