// Function : create
// Namespace: juce:NativeImageType
// Entry    : 003c14e0
// Prototype: undefined8 * create(undefined8 * param_1, undefined8 param_2, int param_3, int param_4, uint param_5, int param_6)
// Body     : 003c14e0 - 003c15b9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::NativeImageType::create(juce::Image::PixelFormat, int, int, bool) const */

undefined8 * __cdecl
juce::NativeImageType::create
          (undefined8 *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,int param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  size_t __size;
  
  puVar1 = operator_new(0x60);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(int *)((long)puVar1 + 0xc) = param_3;
  *(int *)(puVar1 + 2) = param_4;
  *(uint *)((long)puVar1 + 0x14) = param_5;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  *puVar1 = &PTR__SoftwarePixelData_00711df0;
  iVar3 = 3;
  if (param_3 != 1) {
    iVar3 = (uint)(param_3 == 2) * 3 + 1;
  }
  *(int *)(puVar1 + 0xb) = iVar3;
  if (param_4 < 1) {
    param_4 = 1;
  }
  uVar4 = param_4 * iVar3 + 3U & 0x7ffffffc;
  *(uint *)((long)puVar1 + 0x5c) = uVar4;
  uVar5 = 1;
  if (0 < (int)param_5) {
    uVar5 = (ulong)param_5;
  }
  __size = uVar5 * uVar4;
  if (param_6 == 0) {
    if (__size != 0) {
      pvVar2 = malloc(__size);
      goto LAB_003c159c;
    }
  }
  else if (__size != 0) {
    pvVar2 = calloc(__size,1);
    goto LAB_003c159c;
  }
  pvVar2 = (void *)0x0;
LAB_003c159c:
  puVar1[10] = pvVar2;
  *param_1 = puVar1;
  LOCK();
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  UNLOCK();
  return param_1;
}


