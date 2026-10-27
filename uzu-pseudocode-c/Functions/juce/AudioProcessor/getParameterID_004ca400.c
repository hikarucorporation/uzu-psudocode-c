// Function : getParameterID
// Namespace: juce:AudioProcessor
// Entry    : 004ca400
// Prototype: undefined8 * getParameterID(undefined8 * param_1, long param_2, uint param_3)
// Body     : 004ca400 - 004ca4f8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::getParameterID(int) */

undefined8 * __cdecl
juce::AudioProcessor::getParameterID(undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_1b [11];
  
  if (((param_3 < *(uint *)(param_2 + 0x134)) &&
      (lVar1 = *(long *)(*(long *)(param_2 + 0x128) + (long)(int)param_3 * 8), lVar1 != 0)) &&
     (plVar2 = (long *)__dynamic_cast(lVar1,&AudioProcessorParameter::typeinfo,
                                      &HostedAudioProcessorParameter::typeinfo,0),
     plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x90))(param_1,plVar2);
  }
  else {
    if ((int)param_3 < 0) {
      pbVar5 = local_1b + 1;
      uVar4 = -param_3;
      do {
        *pbVar5 = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
        pbVar5 = pbVar5 + -1;
        bVar6 = 9 < uVar4;
        uVar4 = uVar4 / 10;
      } while (bVar6);
      *pbVar5 = 0x2d;
    }
    else {
      pbVar5 = local_1b + 2;
      do {
        pbVar5[-1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
        pbVar5 = pbVar5 + -1;
        bVar6 = 9 < param_3;
        param_3 = param_3 / 10;
      } while (bVar6);
    }
    local_1b[2] = 0;
    uVar3 = StringHolderUtils::createFromFixedLength(pbVar5,(long)(local_1b + ~(ulong)pbVar5 + 3));
    *param_1 = uVar3;
  }
  return param_1;
}


