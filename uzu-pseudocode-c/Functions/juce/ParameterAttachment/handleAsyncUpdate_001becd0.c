// Function : handleAsyncUpdate
// Namespace: juce:ParameterAttachment
// Entry    : 001becd0
// Prototype: undefined handleAsyncUpdate(ParameterAttachment * this)
// Body     : 001becd0 - 001bed08


/* non-virtual thunk to juce::ParameterAttachment::handleAsyncUpdate() */

void __thiscall juce::ParameterAttachment::handleAsyncUpdate(ParameterAttachment *this)

{
  ulong uVar1;
  undefined4 local_c;
  
  uVar1 = RangedAudioParameter::convertFrom0to1
                    ((ulong)*(uint *)(this + 0x18),*(RangedAudioParameter **)(this + 0x10));
  if (*(long *)(this + 0x38) != 0) {
    local_c = (undefined4)uVar1;
    (**(code **)(this + 0x40))(this + 0x28,&local_c);
  }
  return;
}


