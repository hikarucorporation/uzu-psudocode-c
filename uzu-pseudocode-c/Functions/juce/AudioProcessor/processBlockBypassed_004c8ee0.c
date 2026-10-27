// Function : processBlockBypassed
// Namespace: juce:AudioProcessor
// Entry    : 004c8ee0
// Prototype: undefined processBlockBypassed(long param_1, long param_2)
// Body     : 004c8ee0 - 004c8f78


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::processBlockBypassed(juce::AudioBuffer<float>&, juce::MidiBuffer&) */

void __cdecl juce::AudioProcessor::processBlockBypassed(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  if ((*(int *)(param_1 + 0xcc) != 0) && (**(long **)(param_1 + 0xc0) != 0)) {
    iVar1 = *(int *)(**(long **)(param_1 + 0xc0) + 0x8c);
  }
  if ((*(int *)(param_1 + 0xf4) <= iVar1) || (*(char *)(param_2 + 0x120) != '\0')) {
    return;
  }
  lVar2 = (long)iVar1 + 1;
  do {
    memset(*(void **)(*(long *)(param_2 + 0x10) + -8 + lVar2 * 8),0,(long)*(int *)(param_2 + 4) << 2
          );
    do {
      if (*(int *)(param_1 + 0xf4) <= lVar2) {
        return;
      }
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_2 + 0x120) != '\0');
  } while( true );
}


