// Function : readEntireStreamAsString
// Namespace: juce:InputStream
// Entry    : 0049e500
// Prototype: String * readEntireStreamAsString(String * param_1, undefined8 param_2)
// Body     : 0049e500 - 0049e5cf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::InputStream::readEntireStreamAsString() */

String * __cdecl juce::InputStream::readEntireStreamAsString(String *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined **local_60;
  long local_58;
  long *local_50;
  void *local_48;
  long local_38 [2];
  uint local_28;
  undefined4 uStack_24;
  
  MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_60,0x100);
                    /* try { // try from 0049e526 to 0049e56f has its CatchHandler @ 0049e5ef */
  (**(code **)((long)local_60 + 0xb0))((MemoryOutputStream *)&local_60,param_2,0xffffffffffffffff);
  if (local_50 == (long *)0x0) {
    local_50 = local_38;
  }
  else if (CONCAT44(uStack_24,local_28) < (ulong)local_50[1]) {
    *(undefined1 *)(*local_50 + CONCAT44(uStack_24,local_28)) = 0;
  }
  juce::String::createStringFromData(param_1,(byte *)*local_50,local_28);
  local_60 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 0049e57c to 0049e585 has its CatchHandler @ 0049e5d0 */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_60);
  free(local_48);
  local_60 = &PTR__OutputStream_00713440;
  piVar2 = (int *)(local_58 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  return param_1;
}


