// Function : readAllProcessOutput
// Namespace: juce:ChildProcess
// Entry    : 004be5f0
// Prototype: undefined readAllProcessOutput(String * param_1, undefined8 * param_2)
// Body     : 004be5f0 - 004be779


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ChildProcess::readAllProcessOutput() */

void __cdecl juce::ChildProcess::readAllProcessOutput(String *param_1,undefined8 *param_2)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  int *piVar3;
  void *__dest;
  int *piVar4;
  undefined **local_280;
  long local_278;
  long *local_270;
  void *local_268;
  long local_258 [2];
  uint local_248;
  undefined4 uStack_244;
  undefined1 local_238 [520];
  
  MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_280,0x100);
  piVar4 = (int *)*param_2;
  if (piVar4 != (int *)0x0) {
    do {
      __stream = *(FILE **)(piVar4 + 4);
      if ((__stream == (FILE *)0x0) && (*piVar4 != 0)) {
        __stream = fdopen(piVar4[1],"r");
        *(FILE **)(piVar4 + 4) = __stream;
      }
      if (__stream == (FILE *)0x0) break;
      while (sVar2 = fread(local_238,1,0x200,__stream), (int)sVar2 < 1) {
        iVar1 = feof(*(FILE **)(piVar4 + 4));
        if (iVar1 != 0) goto LAB_004be6de;
        __stream = *(FILE **)(piVar4 + 4);
        iVar1 = ferror(__stream);
        if ((iVar1 == 0) || (piVar3 = __errno_location(), *piVar3 != 4)) goto LAB_004be6de;
      }
                    /* try { // try from 004be6b2 to 004be6be has its CatchHandler @ 004be77a */
      __dest = (void *)MemoryOutputStream::prepareToWrite
                                 ((MemoryOutputStream *)&local_280,sVar2 & 0xffffffff);
      if (__dest != (void *)0x0) {
        memcpy(__dest,local_238,sVar2 & 0xffffffff);
      }
      piVar4 = (int *)*param_2;
    } while (piVar4 != (int *)0x0);
  }
LAB_004be6de:
  if (local_270 == (long *)0x0) {
    local_270 = local_258;
  }
  else if (CONCAT44(uStack_244,local_248) < (ulong)local_270[1]) {
    *(undefined1 *)(*local_270 + CONCAT44(uStack_244,local_248)) = 0;
  }
                    /* try { // try from 004be70d to 004be714 has its CatchHandler @ 004be79b */
  juce::String::createStringFromData(param_1,(byte *)*local_270,local_248);
  local_280 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 004be721 to 004be72a has its CatchHandler @ 004be77c */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_280);
  free(local_268);
  local_280 = &PTR__OutputStream_00713440;
  piVar4 = (int *)(local_278 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  return;
}


