// Function : addArray<juce::var>
// Namespace: juce:ArrayBase_juce__var_juce__DummyCriticalSection_
// Entry    : 004acd60
// Prototype: void addArray<juce::var>(ArrayBase<juce::var,juce::DummyCriticalSection> * this, long param_1, int param_2)
// Body     : 004acd60 - 004acecd


/* void juce::ArrayBase<juce::var, juce::DummyCriticalSection>::addArray<juce::var>(juce::var
   const*, int) */

void __thiscall
juce::ArrayBase<juce::var,juce::DummyCriticalSection>::addArray<juce::var>
          (ArrayBase<juce::var,juce::DummyCriticalSection> *this,long param_1,int param_2)

{
  int iVar1;
  void *__ptr;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  uVar6 = *(uint *)(this + 0xc);
  iVar1 = uVar6 + param_2;
  if ((int)*(uint *)(this + 8) < iVar1) {
    uVar8 = iVar1 + iVar1 / 2 + 8U & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar8) {
      if ((int)uVar8 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
      }
      else {
        pvVar3 = malloc((ulong)uVar8 << 4);
        if (0 < (int)uVar6) {
          lVar7 = *(long *)this;
          if (uVar6 == 1) {
            uVar4 = 0;
          }
          else {
            lVar5 = 0;
            uVar4 = 0;
            do {
              *(undefined8 *)((long)pvVar3 + lVar5) = *(undefined8 *)(lVar7 + lVar5);
              *(undefined8 *)((long)pvVar3 + lVar5 + 8) = *(undefined8 *)(lVar7 + 8 + lVar5);
              *(undefined1 **)(lVar7 + lVar5) = &var::Instance::attributesVoid;
              *(undefined8 *)((long)pvVar3 + lVar5 + 0x10) = *(undefined8 *)(lVar7 + 0x10 + lVar5);
              *(undefined8 *)((long)pvVar3 + lVar5 + 0x18) = *(undefined8 *)(lVar7 + 0x18 + lVar5);
              *(undefined1 **)(lVar7 + 0x10 + lVar5) = &var::Instance::attributesVoid;
              uVar4 = uVar4 + 2;
              lVar5 = lVar5 + 0x20;
            } while ((uVar6 & 0xfffffffe) != uVar4);
          }
          if ((uVar6 & 1) != 0) {
            lVar5 = uVar4 * 0x10;
            *(undefined8 *)((long)pvVar3 + lVar5) = *(undefined8 *)(lVar7 + lVar5);
            *(undefined8 *)((long)pvVar3 + lVar5 + 8) = *(undefined8 *)(lVar7 + 8 + lVar5);
            *(undefined1 **)(lVar7 + lVar5) = &var::Instance::attributesVoid;
          }
        }
        __ptr = *(void **)this;
        *(void **)this = pvVar3;
        free(__ptr);
      }
    }
    *(uint *)(this + 8) = uVar8;
  }
  if (0 < param_2) {
    lVar5 = (long)*(int *)(this + 0xc) * 0x10 + *(long *)this;
    uVar6 = param_2 + 1;
    lVar7 = 0;
    do {
      lVar2 = *(long *)(param_1 + lVar7);
      *(long *)(lVar5 + lVar7) = lVar2;
      (**(code **)(lVar2 + 0x60))(lVar7 + 8 + lVar5,param_1 + lVar7 + 8);
      lVar7 = lVar7 + 0x10;
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
  return;
}


