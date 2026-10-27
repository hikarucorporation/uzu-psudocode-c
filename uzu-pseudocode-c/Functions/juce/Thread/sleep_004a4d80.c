// Function : sleep
// Namespace: juce:Thread
// Entry    : 004a4d80
// Prototype: undefined sleep(uint param_1)
// Body     : 004a4d80 - 004a4ddf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Thread::sleep(int) */

void __cdecl juce::Thread::sleep(uint param_1)

{
  int iVar1;
  int *piVar2;
  timespec local_18;
  
  if (0 < (int)param_1) {
    local_18.tv_sec = (ulong)param_1 / 1000;
    local_18.tv_nsec = ((ulong)param_1 % 1000) * 1000000;
    do {
      iVar1 = nanosleep(&local_18,&local_18);
      if (iVar1 != -1) {
        return;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
  }
  return;
}


