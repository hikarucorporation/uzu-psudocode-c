// Function : handleAsyncUpdate
// Namespace: juce:ParameterAttachment
// Entry    : 001bec60
// Prototype: undefined handleAsyncUpdate(ParameterAttachment * this)
// Body     : 001bec60 - 001bec94


/* juce::ParameterAttachment::handleAsyncUpdate() */

void __thiscall juce::ParameterAttachment::handleAsyncUpdate(ParameterAttachment *this)

{
  ulong uVar1;
  undefined4 local_c;
  
  uVar1 = RangedAudioParameter::convertFrom0to1
                    ((ulong)*(uint *)(this + 0x20),*(RangedAudioParameter **)(this + 0x18));
  if (*(long *)(this + 0x40) != 0) {
    local_c = (undefined4)uVar1;
    (**(code **)(this + 0x48))(this + 0x30,&local_c);
  }
  return;
}


