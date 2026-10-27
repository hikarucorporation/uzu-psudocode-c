// Function : sliderValueChanged
// Namespace: juce:SliderParameterAttachment
// Entry    : 001c0a80
// Prototype: undefined sliderValueChanged(long param_1)
// Body     : 001c0a80 - 001c0b68


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SliderParameterAttachment::sliderValueChanged(juce::Slider*) */

void __cdecl juce::SliderParameterAttachment::sliderValueChanged(long param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  long local_20;
  undefined1 local_18 [8];
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x1a0) + 0x50) + 0x10))(&local_20);
                    /* try { // try from 001c0abc to 001c0ac6 has its CatchHandler @ 001c0b71 */
    dVar3 = (double)(**(code **)(local_20 + 0x20))(local_18);
                    /* try { // try from 001c0acc to 001c0ad1 has its CatchHandler @ 001c0b69 */
    (**(code **)(local_20 + 0x58))(local_18);
    fVar1 = RangedAudioParameter::convertTo0to1
                      (CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3),
                       *(RangedAudioParameter **)(param_1 + 0x28));
    fVar2 = (float)(**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    fVar5 = (float)((uint)fVar2 & _DAT_005d91c0);
    if ((fVar5 == DAT_005d94c8) ||
       (fVar4 = (float)(_DAT_005d91c0 & (uint)fVar1), fVar4 == DAT_005d94c8)) {
      if ((fVar2 != fVar1) || (NAN(fVar2) || NAN(fVar1))) {
LAB_001c0b56:
        AudioProcessorParameter::setValueNotifyingHost
                  (fVar1,*(AudioProcessorParameter **)(param_1 + 0x28));
        return;
      }
    }
    else {
      fVar2 = (float)((uint)(fVar2 - fVar1) & _DAT_005d91c0);
      if (DAT_005d94cc < fVar2) {
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
        if (fVar4 * DAT_005d94d0 < fVar2) goto LAB_001c0b56;
      }
    }
  }
  return;
}


