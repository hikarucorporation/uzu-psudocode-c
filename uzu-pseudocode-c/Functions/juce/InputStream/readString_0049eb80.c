// Function : readString
// Namespace: juce:InputStream
// Entry    : 0049eb80
// Prototype: undefined8 * readString(undefined8 * param_1, long * param_2)
// Body     : 0049eb80 - 0049ecc8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::InputStream::readString() */

undefined8 * __cdecl juce::InputStream::readString(undefined8 *param_1,long *param_2)

{
  int iVar1;
  char *__src;
  char cVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *__dest;
  int *piVar5;
  char local_71;
  undefined **local_70;
  long local_68;
  long *local_60;
  void *local_58;
  char *local_48;
  ulong local_38;
  
  MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_70,0x100);
  do {
                    /* try { // try from 0049ebb4 to 0049ebd2 has its CatchHandler @ 0049ecea */
    cVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    local_71 = cVar2;
    (**(code **)((long)local_70 + 0x28))((MemoryOutputStream *)&local_70,&local_71,1);
  } while (cVar2 != '\0');
  __src = local_48;
  if (local_60 != (long *)0x0) {
    if (local_38 < (ulong)local_60[1]) {
      *(undefined1 *)(*local_60 + local_38) = 0;
    }
    __src = (char *)*local_60;
  }
  __dest = (undefined4 *)&DAT_0061ac58;
  if ((__src != (char *)0x0) && (__dest = (undefined4 *)&DAT_0061ac58, *__src != '\0')) {
    uVar4 = local_38 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 0049ec35 to 0049ec39 has its CatchHandler @ 0049ecc9 */
    puVar3 = operator_new__(uVar4 + 0x17);
    LOCK();
    *puVar3 = 0;
    UNLOCK();
    *(ulong *)(puVar3 + 2) = uVar4;
    __dest = puVar3 + 4;
    memcpy(__dest,__src,local_38);
    *(undefined1 *)((long)puVar3 + local_38 + 0x10) = 0;
  }
  *param_1 = __dest;
  local_70 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 0049ec71 to 0049ec7a has its CatchHandler @ 0049eccb */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_70);
  free(local_58);
  local_70 = &PTR__OutputStream_00713440;
  piVar5 = (int *)(local_68 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  return param_1;
}


