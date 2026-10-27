// Function : readIntoMemoryBlock
// Namespace: juce:InputStream
// Entry    : 0049ed00
// Prototype: long readIntoMemoryBlock(InputStream * this, MemoryOutputStream * param_1, ulong param_2)
// Body     : 0049ed00 - 0049ee97


/* juce::InputStream::readIntoMemoryBlock(juce::MemoryBlock&, long) */

long __thiscall
juce::InputStream::readIntoMemoryBlock(InputStream *this,MemoryOutputStream *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  bool bVar11;
  undefined **local_2080;
  undefined4 *local_2078;
  MemoryOutputStream *local_2070;
  void *local_2068;
  undefined8 uStack_2060;
  undefined8 local_2058;
  long lStack_2050;
  long local_2048;
  undefined8 uStack_2040;
  undefined1 local_2038 [8200];
  
  local_2080 = &PTR__OutputStream_00713440;
  puVar3 = operator_new__(0x1b);
  LOCK();
  *puVar3 = 0;
  UNLOCK();
  *(undefined8 *)(puVar3 + 2) = 4;
  local_2078 = puVar3 + 4;
  *(undefined2 *)(puVar3 + 4) = 0xa0d;
  *(undefined1 *)((long)puVar3 + 0x12) = 0;
  local_2080 = &PTR__MemoryOutputStream_00713378;
  uStack_2040 = 0;
  local_2058 = 0;
  local_2068 = (void *)0x0;
  uStack_2060 = 0;
  lVar10 = *(long *)(param_1 + 8);
                    /* try { // try from 0049ed83 to 0049edbb has its CatchHandler @ 0049eeb5 */
  local_2070 = param_1;
  lStack_2050 = lVar10;
  local_2048 = lVar10;
  lVar4 = (**(code **)(*(long *)this + 0x10))(this);
  lVar5 = (**(code **)(*(long *)this + 0xb0))(this);
  uVar7 = lVar4 - lVar5;
  if (uVar7 != 0 && lVar5 <= lVar4) {
    uVar6 = param_2;
    if ((long)uVar7 < (long)param_2) {
      uVar6 = uVar7;
    }
    bVar11 = (long)param_2 < 0;
    param_2 = uVar6;
    if (bVar11) {
      param_2 = uVar7;
    }
    MemoryOutputStream::preallocate(param_1,lVar10 + param_2);
  }
  uVar7 = 0x7fffffffffffffff;
  if (param_2 < 0x7fffffffffffffff) {
    uVar7 = param_2;
  }
  lVar10 = 0;
  if (uVar7 != 0) {
    do {
      uVar6 = uVar7 & 0xffffffff;
      if (0x1fff < uVar7) {
        uVar6 = 0x2000;
      }
                    /* try { // try from 0049ee03 to 0049ee22 has its CatchHandler @ 0049eeb7 */
      uVar2 = (**(code **)(*(long *)this + 0x20))(this,local_2038,uVar6);
      if ((int)uVar2 < 1) break;
      uVar6 = (ulong)uVar2;
      (*(code *)local_2080[5])(&local_2080,local_2038,uVar6);
      lVar10 = lVar10 + uVar6;
      uVar8 = uVar7 - uVar6;
      bVar11 = (long)uVar6 <= (long)uVar7;
      uVar7 = uVar8;
    } while (uVar8 != 0 && bVar11);
  }
  local_2080 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 0049ee3c to 0049ee45 has its CatchHandler @ 0049ee98 */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_2080);
  free(local_2068);
  local_2080 = &PTR__OutputStream_00713440;
  piVar9 = local_2078 + -4;
  if (piVar9 != &emptyString) {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar9);
    }
  }
  return lVar10;
}


