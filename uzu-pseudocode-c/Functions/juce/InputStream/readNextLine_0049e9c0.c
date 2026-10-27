// Function : readNextLine
// Namespace: juce:InputStream
// Entry    : 0049e9c0
// Prototype: undefined8 * readNextLine(undefined8 * param_1, long * param_2)
// Body     : 0049e9c0 - 0049eb3a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::InputStream::readNextLine() */

undefined8 * __cdecl juce::InputStream::readNextLine(undefined8 *param_1,long *param_2)

{
  int iVar1;
  char *__src;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *__dest;
  int *piVar6;
  char local_71;
  undefined **local_70;
  long local_68;
  long *local_60;
  void *local_58;
  char *local_48;
  ulong local_38;
  
  MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_70,0x100);
  while( true ) {
                    /* try { // try from 0049e9f3 to 0049ea1b has its CatchHandler @ 0049eb5e */
    cVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    if ((cVar2 == '\0') || (cVar2 == '\n')) goto LAB_0049ea49;
    if (cVar2 == '\r') break;
    local_71 = cVar2;
    (**(code **)((long)local_70 + 0x28))((MemoryOutputStream *)&local_70,&local_71,1);
  }
                    /* try { // try from 0049ea21 to 0049ea48 has its CatchHandler @ 0049eb3d */
  uVar3 = (**(code **)(*param_2 + 0xb0))(param_2);
  cVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar2 != '\n') {
    (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
  }
LAB_0049ea49:
  __src = local_48;
  if (local_60 != (long *)0x0) {
    if (local_38 < (ulong)local_60[1]) {
      *(undefined1 *)(*local_60 + local_38) = 0;
    }
    __src = (char *)*local_60;
  }
  __dest = (undefined4 *)&DAT_0061ac58;
  if ((__src != (char *)0x0) && (__dest = (undefined4 *)&DAT_0061ac58, *__src != '\0')) {
    uVar5 = local_38 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 0049eaa7 to 0049eaab has its CatchHandler @ 0049eb3b */
    puVar4 = operator_new__(uVar5 + 0x17);
    LOCK();
    *puVar4 = 0;
    UNLOCK();
    *(ulong *)(puVar4 + 2) = uVar5;
    __dest = puVar4 + 4;
    memcpy(__dest,__src,local_38);
    *(undefined1 *)((long)puVar4 + local_38 + 0x10) = 0;
  }
  *param_1 = __dest;
  local_70 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 0049eae3 to 0049eaec has its CatchHandler @ 0049eb3f */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_70);
  free(local_58);
  local_70 = &PTR__OutputStream_00713440;
  piVar6 = (int *)(local_68 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
  }
  return param_1;
}


