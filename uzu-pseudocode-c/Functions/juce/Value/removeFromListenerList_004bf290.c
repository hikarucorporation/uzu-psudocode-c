// Function : removeFromListenerList
// Namespace: juce:Value
// Entry    : 004bf290
// Prototype: undefined removeFromListenerList(Value * this)
// Body     : 004bf290 - 004bf379


/* juce::Value::removeFromListenerList() */

void __thiscall juce::Value::removeFromListenerList(Value *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((((*(int *)(this + 0x28) == 2) && (0 < *(int *)(*(long *)(this + 8) + 0xc))) &&
      (lVar2 = *(long *)this, lVar2 != 0)) && (uVar1 = *(uint *)(lVar2 + 0x2c), 0 < (int)uVar1)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    uVar8 = uVar1;
    uVar5 = 0;
    do {
      while( true ) {
        if (*(Value **)(lVar3 + (long)(int)uVar5 * 8) == this) {
          if (uVar1 <= uVar5) {
            return;
          }
          pvVar4 = (void *)(lVar3 + (long)(int)uVar5 * 8);
          memmove(pvVar4,(void *)((long)pvVar4 + 8),(long)(int)(uVar1 + ~uVar5) << 3);
          iVar9 = *(int *)(lVar2 + 0x2c);
          uVar1 = iVar9 - 1;
          *(uint *)(lVar2 + 0x2c) = uVar1;
          iVar6 = iVar9 * 2 + -2;
          iVar9 = 0;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          if (*(int *)(lVar2 + 0x28) <= iVar9) {
            return;
          }
          uVar8 = 8;
          if (8 < (int)uVar1) {
            uVar8 = uVar1;
          }
          if ((int)uVar8 < *(int *)(lVar2 + 0x28)) {
            pvVar4 = realloc(*(void **)(lVar2 + 0x20),(ulong)uVar8 << 3);
            *(void **)(lVar2 + 0x20) = pvVar4;
            *(uint *)(lVar2 + 0x28) = uVar8;
            return;
          }
          return;
        }
        uVar7 = (int)(uVar5 + uVar8) / 2;
        if (uVar7 == uVar5) {
          return;
        }
        if (*(Value **)(lVar3 + (long)(int)uVar7 * 8) <= this) break;
        uVar8 = uVar7;
        if ((int)uVar7 <= (int)uVar5) {
          return;
        }
      }
      uVar5 = uVar7;
    } while ((int)uVar7 < (int)uVar8);
  }
  return;
}


