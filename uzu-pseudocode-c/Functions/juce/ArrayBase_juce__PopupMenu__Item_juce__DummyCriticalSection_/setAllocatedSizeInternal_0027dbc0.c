// Function : setAllocatedSizeInternal
// Namespace: juce:ArrayBase_juce__PopupMenu__Item_juce__DummyCriticalSection_
// Entry    : 0027dbc0
// Prototype: undefined setAllocatedSizeInternal(ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> * this, int param_1)
// Body     : 0027dbc0 - 0027dd21


/* juce::ArrayBase<juce::PopupMenu::Item, juce::DummyCriticalSection>::setAllocatedSizeInternal(int)
    */

void __thiscall
juce::ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
          (ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *__ptr;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  pvVar4 = malloc((long)param_1 * 0x70);
  if (0 < *(int *)(this + 0xc)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(long *)this;
      *(undefined8 *)((long)pvVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
      *(undefined1 **)(lVar2 + lVar5) = &DAT_0061ac58;
      *(undefined4 *)((long)pvVar4 + lVar5 + 8) = *(undefined4 *)(lVar2 + 8 + lVar5);
      puVar1 = (undefined8 *)((long)pvVar4 + lVar5 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x20) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x28) = *(undefined8 *)(lVar2 + 0x28 + lVar5);
      if (*(long *)(lVar2 + 0x20 + lVar5) != 0) {
        puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar5);
        uVar3 = puVar1[1];
        *(undefined8 *)((long)pvVar4 + lVar5 + 0x10) = *puVar1;
        *(undefined8 *)((long)pvVar4 + lVar5 + 0x18) = uVar3;
        *(undefined8 *)((long)pvVar4 + lVar5 + 0x20) = *(undefined8 *)(lVar2 + 0x20 + lVar5);
        puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar5);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x30) = *(undefined8 *)(lVar2 + 0x30 + lVar5);
      *(undefined8 *)(lVar2 + 0x30 + lVar5) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x38) = *(undefined8 *)(lVar2 + 0x38 + lVar5);
      *(undefined8 *)(lVar2 + 0x38 + lVar5) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x40) = *(undefined8 *)(lVar2 + 0x40 + lVar5);
      *(undefined8 *)(lVar2 + 0x40 + lVar5) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x48) = *(undefined8 *)(lVar2 + 0x48 + lVar5);
      *(undefined8 *)(lVar2 + 0x48 + lVar5) = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x50) = *(undefined8 *)(lVar2 + 0x50 + lVar5);
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x58) = *(undefined8 *)(lVar2 + 0x58 + lVar5);
      *(undefined1 **)(lVar2 + 0x58 + lVar5) = &DAT_0061ac58;
      *(undefined1 *)((long)pvVar4 + lVar5 + 0x68) = *(undefined1 *)(lVar2 + 0x68 + lVar5);
      *(undefined8 *)((long)pvVar4 + lVar5 + 0x60) = *(undefined8 *)(lVar2 + 0x60 + lVar5);
      PopupMenu::Item::~Item((Item *)(*(long *)this + lVar5));
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x70;
    } while (lVar6 < *(int *)(this + 0xc));
  }
  __ptr = *(void **)this;
  *(void **)this = pvVar4;
  free(__ptr);
  return;
}


