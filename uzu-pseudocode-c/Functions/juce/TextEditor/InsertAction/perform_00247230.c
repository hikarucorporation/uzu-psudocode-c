// Function : perform
// Namespace: juce:TextEditor:InsertAction
// Entry    : 00247230
// Prototype: undefined8 perform(undefined8 param_1, float param_2, InsertAction * this)
// Body     : 00247230 - 00247258


/* juce::TextEditor::InsertAction::perform() */

undefined8 __thiscall
juce::TextEditor::InsertAction::perform(undefined8 param_1,float param_2,InsertAction *this)

{
  undefined8 uVar1;
  
  uVar1 = insert(param_1,param_2,*(TextEditor **)(this + 8),(String *)(this + 0x10),
                 *(int *)(this + 0x18),(uint *)(this + 0x28),*(undefined4 *)(this + 0x30),
                 (UndoManager *)0x0,*(uint *)(this + 0x20));
  return CONCAT71((int7)((ulong)uVar1 >> 8),1);
}


