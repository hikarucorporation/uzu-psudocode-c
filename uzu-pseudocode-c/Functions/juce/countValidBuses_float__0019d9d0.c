// Function : countValidBuses<float>
// Namespace: juce
// Entry    : 0019d9d0
// Prototype: int countValidBuses<float>(int * param_1, int param_2)
// Body     : 0019d9d0 - 0019daee


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int juce::countValidBuses<float>(Steinberg::Vst::AudioBusBuffers*, int) */

int __cdecl juce::countValidBuses<float>(int *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = (long)param_2 * 0x18;
  piVar2 = param_1;
  uVar3 = uVar1;
  if (0x48 < (long)uVar1) {
    lVar4 = uVar1 / 0x60 + 1;
    do {
      if ((*(long *)(piVar2 + 4) == 0) && (0 < *piVar2)) goto LAB_0019daac;
      if ((*(long *)(piVar2 + 10) == 0) && (0 < piVar2[6])) {
        return (int)((ulong)((long)piVar2 + (0x18 - (long)param_1)) >> 3) * -0x55555555;
      }
      if ((*(long *)(piVar2 + 0x10) == 0) && (0 < piVar2[0xc])) {
        return (int)((ulong)((long)piVar2 + (0x30 - (long)param_1)) >> 3) * -0x55555555;
      }
      if ((*(long *)(piVar2 + 0x16) == 0) && (0 < piVar2[0x12])) {
        piVar2 = piVar2 + 0x12;
        goto LAB_0019daac;
      }
      piVar2 = piVar2 + 0x18;
      lVar4 = lVar4 + -1;
      uVar3 = uVar3 - 0x60;
    } while (1 < lVar4);
  }
  lVar4 = ((long)uVar3 >> 3) * -0x5555555555555555;
  if (lVar4 != 1) {
    if (lVar4 != 2) {
      if (lVar4 != 3) goto LAB_0019daba;
      if ((*(long *)(piVar2 + 4) == 0) && (0 < *piVar2)) goto LAB_0019daac;
      piVar2 = piVar2 + 6;
    }
    if ((*(long *)(piVar2 + 4) == 0) && (0 < *piVar2)) goto LAB_0019daac;
    piVar2 = piVar2 + 6;
  }
  if ((*(long *)(piVar2 + 4) != 0) || (*piVar2 < 1)) {
LAB_0019daba:
    return (int)(uVar1 >> 3) * -0x55555555;
  }
LAB_0019daac:
  return (int)((ulong)((long)piVar2 - (long)param_1) >> 3) * -0x55555555;
}


