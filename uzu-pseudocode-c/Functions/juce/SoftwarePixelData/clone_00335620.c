// Function : clone
// Namespace: juce:SoftwarePixelData
// Entry    : 00335620
// Prototype: undefined8 * clone(undefined8 * param_1, long param_2)
// Body     : 00335620 - 003356fa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SoftwarePixelData::clone() */

undefined8 * __cdecl juce::SoftwarePixelData::clone(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *__dest;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  size_t __size;
  
  puVar4 = operator_new(0x60);
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x14);
  iVar7 = 3;
  if (iVar1 != 1) {
    iVar7 = (uint)(iVar1 == 2) * 3 + 1;
  }
  iVar5 = 1;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  uVar6 = iVar5 * iVar7 + 3U & 0x7ffffffc;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(int *)((long)puVar4 + 0xc) = iVar1;
  *(int *)(puVar4 + 2) = iVar2;
  *(uint *)((long)puVar4 + 0x14) = uVar3;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 9) = 0;
  *puVar4 = &PTR__SoftwarePixelData_00711df0;
  *(int *)(puVar4 + 0xb) = iVar7;
  *(uint *)((long)puVar4 + 0x5c) = uVar6;
  uVar8 = 1;
  if (0 < (long)(int)uVar3) {
    uVar8 = (ulong)uVar3;
  }
  __size = uVar8 * uVar6;
  if (__size == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = malloc(__size);
  }
  puVar4[10] = __dest;
  memcpy(__dest,*(void **)(param_2 + 0x50),(long)(int)uVar3 * (long)*(int *)(param_2 + 0x5c));
  *param_1 = puVar4;
  LOCK();
  *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  UNLOCK();
  return param_1;
}


