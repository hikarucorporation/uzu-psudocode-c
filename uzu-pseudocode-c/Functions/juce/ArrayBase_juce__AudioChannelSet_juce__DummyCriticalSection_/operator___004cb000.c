// Function : operator==
// Namespace: juce:ArrayBase_juce__AudioChannelSet_juce__DummyCriticalSection_
// Entry    : 004cb000
// Prototype: bool operator==(ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> * this, int param_1, long * param_2, int param_3)
// Body     : 004cb000 - 004cb213


/* bool juce::ArrayBase<juce::AudioChannelSet,
   juce::DummyCriticalSection>::TEMPNAMEPLACEHOLDERVALUE(juce::Array<juce::AudioChannelSet,
   juce::DummyCriticalSection, 0> const&) const */

bool __thiscall
juce::ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::operator==
          (ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *this,int param_1,
          long *param_2,int param_3)

{
  long *plVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *__src;
  long *__src_00;
  uint uVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 *local_80;
  undefined1 local_78 [16];
  ulong local_68;
  uint local_60;
  undefined1 local_5c;
  undefined1 *local_58;
  undefined1 local_50 [16];
  ulong local_40;
  uint local_38;
  ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> local_34;
  
  if (param_1 == param_3) {
    if (param_1 == 0) {
      bVar8 = true;
    }
    else {
      plVar1 = param_2 + (long)param_1 * 5;
      do {
        local_58 = (undefined1 *)0x0;
        local_40 = *(ulong *)(this + 0x18);
        __src = this + 8;
        if (*(ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> **)this !=
            (ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)0x0) {
          __src = *(ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> **)this;
        }
        local_38 = 0xffffffff;
        if (-1 < (int)*(uint *)(this + 0x20)) {
          uVar6 = *(uint *)(this + 0x20) >> 5;
          uVar5 = uVar6 << 5;
LAB_004cb080:
          uVar3 = *(uint *)(__src + (ulong)uVar6 * 4);
          if (uVar3 == 0) goto code_r0x004cb089;
          uVar6 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          local_38 = (uVar6 ^ 0x1f | uVar5) ^ 0x1f;
        }
LAB_004cb0ab:
        local_34 = this[0x24];
        sVar2 = local_40 * 4;
        if (4 < local_40) {
          if (sVar2 == 0) {
            local_58 = (undefined1 *)0x0;
          }
          else {
            local_58 = malloc(sVar2);
          }
        }
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_50;
        }
        memcpy(puVar7,__src,sVar2);
        local_80 = (undefined1 *)0x0;
        local_68 = param_2[3];
        __src_00 = param_2 + 1;
        if ((long *)*param_2 != (long *)0x0) {
          __src_00 = (long *)*param_2;
        }
        local_60 = 0xffffffff;
        if (-1 < (int)*(uint *)(param_2 + 4)) {
          uVar6 = *(uint *)(param_2 + 4) >> 5;
          uVar5 = uVar6 << 5;
LAB_004cb140:
          uVar3 = *(uint *)((long)__src_00 + (ulong)uVar6 * 4);
          if (uVar3 == 0) goto code_r0x004cb149;
          uVar6 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          local_60 = (uVar6 ^ 0x1f | uVar5) ^ 0x1f;
        }
LAB_004cb16b:
        local_5c = *(undefined1 *)((long)param_2 + 0x24);
        sVar2 = local_68 * 4;
        if (4 < local_68) {
          if (sVar2 == 0) {
            local_80 = (undefined1 *)0x0;
          }
          else {
            local_80 = malloc(sVar2);
          }
        }
        puVar7 = local_80;
        if (local_80 == (undefined1 *)0x0) {
          puVar7 = local_78;
        }
        memcpy(puVar7,__src_00,sVar2);
        iVar4 = BigInteger::compare((BigInteger *)&local_58,(long *)&local_80);
        free(local_80);
        free(local_58);
        bVar8 = iVar4 == 0;
        if (!bVar8) {
          return bVar8;
        }
        this = this + 0x28;
        param_2 = param_2 + 5;
      } while (param_2 != plVar1);
    }
  }
  else {
    bVar8 = false;
  }
  return bVar8;
code_r0x004cb089:
  uVar5 = uVar5 - 0x20;
  bVar8 = (int)uVar6 < 1;
  uVar6 = uVar6 - 1;
  if (bVar8) goto LAB_004cb0ab;
  goto LAB_004cb080;
code_r0x004cb149:
  uVar5 = uVar5 - 0x20;
  bVar8 = (int)uVar6 < 1;
  uVar6 = uVar6 - 1;
  if (bVar8) goto LAB_004cb16b;
  goto LAB_004cb140;
}


