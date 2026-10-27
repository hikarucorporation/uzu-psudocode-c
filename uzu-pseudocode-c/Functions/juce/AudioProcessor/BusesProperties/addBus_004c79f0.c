// Function : addBus
// Namespace: juce:AudioProcessor:BusesProperties
// Entry    : 004c79f0
// Prototype: undefined addBus(BusesProperties * this, char param_1, long * param_2, BigInteger * param_3, undefined1 param_4)
// Body     : 004c79f0 - 004c7c0e


/* WARNING: Removing unreachable block (ram,0x004c7a68) */
/* WARNING: Removing unreachable block (ram,0x004c7a75) */
/* juce::AudioProcessor::BusesProperties::addBus(bool, juce::String const&, juce::AudioChannelSet
   const&, bool) */

void __thiscall
juce::AudioProcessor::BusesProperties::addBus
          (BusesProperties *this,char param_1,long *param_2,BigInteger *param_3,undefined1 param_4)

{
  size_t __size;
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> *this_00;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  void *__dest;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  uint local_40;
  undefined1 local_3c;
  undefined1 local_38;
  
  lVar11 = *param_2;
  piVar6 = (int *)(lVar11 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    lVar11 = *param_2;
  }
  LOCK();
  UNLOCK();
  local_3c = 0;
  local_40 = 0xffffffff;
  local_48 = 4;
  uStack_50 = 0;
  local_58 = 0;
  local_60 = (undefined8 *)0x0;
  BigInteger::operator=((BigInteger *)&local_60,param_3);
  this_00 = (ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> *)
            (this + 0x10);
  if (param_1 != '\0') {
    this_00 = (ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> *)this;
  }
  local_38 = param_4;
  iVar5 = *(int *)(this_00 + 0xc);
  if ((int)*(uint *)(this_00 + 8) <= iVar5) {
    uVar10 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this_00 + 8) != uVar10) {
      if ((int)uVar10 < 1) {
        free(*(void **)this_00);
        *(undefined8 *)this_00 = 0;
      }
      else {
        ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection>::
        setAllocatedSizeInternal(this_00,uVar10);
      }
    }
    *(uint *)(this_00 + 8) = uVar10;
    iVar5 = *(int *)(this_00 + 0xc);
  }
  *(int *)(this_00 + 0xc) = iVar5 + 1;
  lVar2 = *(long *)this_00;
  lVar9 = (long)iVar5 * 0x38;
  *(long *)(lVar2 + lVar9) = lVar11;
  piVar6 = (int *)(lVar11 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar2 + 8 + lVar9) = 0;
  *(ulong *)(lVar2 + 0x20 + lVar9) = local_48;
  puVar12 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    puVar12 = &local_58;
  }
  uVar10 = 0xffffffff;
  if (-1 < (int)local_40) {
    uVar8 = (local_40 >> 5) << 5;
    uVar4 = local_40 >> 5;
    do {
      uVar1 = *(uint *)((long)puVar12 + (ulong)uVar4 * 4);
      if (uVar1 != 0) {
        uVar10 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> uVar10 == 0; uVar10 = uVar10 - 1) {
          }
        }
        uVar10 = (uVar10 ^ 0x1f | uVar8) ^ 0x1f;
        break;
      }
      uVar8 = uVar8 - 0x20;
      bVar3 = 0 < (int)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar3);
  }
  *(uint *)(lVar9 + lVar2 + 0x28) = uVar10;
  *(undefined1 *)(lVar2 + 0x2c + lVar9) = local_3c;
  __size = local_48 * 4;
  if (local_48 < 5) {
    pvVar7 = (void *)0x0;
  }
  else {
    if (__size == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = malloc(__size);
    }
    *(void **)(lVar9 + lVar2 + 8) = pvVar7;
  }
  __dest = (void *)(lVar2 + 0x10 + lVar9);
  if (pvVar7 != (void *)0x0) {
    __dest = pvVar7;
  }
  puVar12 = &local_58;
  if (local_60 != (undefined8 *)0x0) {
    puVar12 = local_60;
  }
  memcpy(__dest,puVar12,__size);
  *(undefined1 *)(lVar2 + 0x30 + lVar9) = local_38;
  free(local_60);
  piVar6 = (int *)(lVar11 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(piVar6);
    }
  }
  return;
}


