// Function : ~UndoManager
// Namespace: juce:UndoManager
// Entry    : 004c6320
// Prototype: undefined ~UndoManager(UndoManager * this)
// Body     : 004c6320 - 004c6331


/* juce::UndoManager::~UndoManager() */

void __thiscall juce::UndoManager::~UndoManager(UndoManager *this)

{
  ~UndoManager(this);
  operator_delete(this);
  return;
}


