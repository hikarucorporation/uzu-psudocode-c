// Function : perform
// Namespace: juce:TextEditor:RemoveAction
// Entry    : 00248930
// Prototype: undefined8 perform(undefined8 param_1, float param_2, RemoveAction * this)
// Body     : 00248930 - 0024894d


/* juce::TextEditor::RemoveAction::perform() */

undefined8 __thiscall
juce::TextEditor::RemoveAction::perform(undefined8 param_1,float param_2,RemoveAction *this)

{
  undefined8 uVar1;
  undefined8 *******in_R9;
  
  uVar1 = remove(param_1,param_2,*(TextEditor **)(this + 8),*(ulong *)(this + 0x10),
                 (UndoManager *)0x0,*(uint *)(this + 0x1c),
                 (vector<long_long,std::allocator<long_long>> *)(this + 0x20),in_R9);
  return CONCAT71((int7)((ulong)uVar1 >> 8),1);
}


