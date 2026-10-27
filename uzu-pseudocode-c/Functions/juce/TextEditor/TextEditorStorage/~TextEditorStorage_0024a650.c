// Function : ~TextEditorStorage
// Namespace: juce:TextEditor:TextEditorStorage
// Entry    : 0024a650
// Prototype: undefined ~TextEditorStorage(TextEditorStorage * this)
// Body     : 0024a650 - 0024a7f4


/* juce::TextEditor::TextEditorStorage::~TextEditorStorage() */

void __thiscall juce::TextEditor::TextEditorStorage::~TextEditorStorage(TextEditorStorage *this)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  
  piVar7 = (int *)(*(long *)(this + 0x108) + -0x10);
  if (piVar7 == &emptyString) {
LAB_0024a680:
    plVar6 = *(long **)(this + 0xd8);
    plVar8 = *(long **)(this + 0xe0);
    if (plVar6 == plVar8) goto joined_r0x0024a7ea;
  }
  else {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 != 0) goto LAB_0024a680;
    operator_delete__(piVar7);
    plVar6 = *(long **)(this + 0xd8);
    plVar8 = *(long **)(this + 0xe0);
    if (plVar6 == plVar8) goto joined_r0x0024a7ea;
  }
  do {
    plVar4 = (long *)*plVar6;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    plVar6 = plVar6 + 1;
  } while (plVar6 != plVar8);
  plVar6 = *(long **)(this + 0xd8);
joined_r0x0024a7ea:
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6);
  }
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xc0));
  }
  puVar5 = *(undefined8 **)(this + 0x80);
  puVar3 = *(undefined8 **)(this + 0x88);
  if (puVar5 != puVar3) {
    do {
      if ((default_delete<juce::TextEditor::ParagraphStorage> *)*puVar5 !=
          (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
        std::default_delete<juce::TextEditor::ParagraphStorage>::operator()
                  ((default_delete<juce::TextEditor::ParagraphStorage> *)*puVar5);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar3);
    puVar5 = *(undefined8 **)(this + 0x80);
  }
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x68));
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x48));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x30));
  }
  plVar6 = *(long **)(this + 0x18);
  plVar8 = *(long **)(this + 0x20);
  if (plVar6 != plVar8) {
    do {
      plVar4 = (long *)*plVar6;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar8);
    plVar6 = *(long **)(this + 0x18);
  }
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


