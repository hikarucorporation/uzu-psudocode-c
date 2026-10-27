// Function : countValidBuses<double>
// Namespace: juce
// Entry    : 0019daf0
// Prototype: int countValidBuses<double>(int * param_1, int param_2)
// Body     : 0019daf0 - 0019dc0e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int juce::countValidBuses<double>(Steinberg::Vst::AudioBusBuffers*, int) */

int __cdecl juce::countValidBuses<double>(int *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = (long)param_2 * 0x18;
  piVar3 = param_1;
  uVar4 = uVar1;
  if (0x48 < (long)uVar1) {
    lVar5 = uVar1 / 0x60 + 1;
    piVar2 = param_1 + 0xc;
    do {
      piVar3 = piVar2;
      if ((*(long *)(piVar3 + -8) == 0) && (0 < piVar3[-0xc])) {
        return (int)((ulong)((long)piVar3 + (-0x30 - (long)param_1)) >> 3) * -0x55555555;
      }
      if ((*(long *)(piVar3 + -2) == 0) && (0 < piVar3[-6])) {
        return (int)((ulong)((long)piVar3 + (-0x18 - (long)param_1)) >> 3) * -0x55555555;
      }
      if ((*(long *)(piVar3 + 4) == 0) && (0 < *piVar3)) goto LAB_0019dbf0;
      if ((*(long *)(piVar3 + 10) == 0) && (0 < piVar3[6])) {
        piVar3 = piVar3 + 6;
        goto LAB_0019dbf0;
      }
      lVar5 = lVar5 + -1;
      uVar4 = uVar4 - 0x60;
      piVar2 = piVar3 + 0x18;
    } while (1 < lVar5);
    piVar3 = piVar3 + 0xc;
  }
  lVar5 = ((long)uVar4 >> 3) * -0x5555555555555555;
  if (lVar5 != 1) {
    if (lVar5 != 2) {
      if (lVar5 != 3) goto LAB_0019dbfe;
      if ((*(long *)(piVar3 + 4) == 0) && (0 < *piVar3)) goto LAB_0019dbf0;
      piVar3 = piVar3 + 6;
    }
    if ((*(long *)(piVar3 + 4) == 0) && (0 < *piVar3)) goto LAB_0019dbf0;
    piVar3 = piVar3 + 6;
  }
  if ((*(long *)(piVar3 + 4) != 0) || (*piVar3 < 1)) {
LAB_0019dbfe:
    return (int)(uVar1 >> 3) * -0x55555555;
  }
LAB_0019dbf0:
  return (int)((ulong)((long)piVar3 - (long)param_1) >> 3) * -0x55555555;
}


