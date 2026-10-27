// Function : ~JuceVST3Editor
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b5ba0
// Prototype: undefined ~JuceVST3Editor(JuceVST3Editor * this)
// Body     : 001b5ba0 - 001b5c42


/* juce::JuceVST3EditController::JuceVST3Editor::~JuceVST3Editor() */

void __thiscall juce::JuceVST3EditController::JuceVST3Editor::~JuceVST3Editor(JuceVST3Editor *this)

{
  ContentWrapperComponent *this_00;
  long *plVar1;
  MessageManagerLock local_b0 [160];
  
  this_00 = *(ContentWrapperComponent **)(this + 0xd8);
  if (this_00 != (ContentWrapperComponent *)0x0) {
                    /* try { // try from 001b5bb9 to 001b5bc4 has its CatchHandler @ 001b5c43 */
    MessageManagerLock::MessageManagerLock(local_b0,0);
    ContentWrapperComponent::~ContentWrapperComponent(this_00);
    operator_delete(this_00);
    MessageManagerLock::~MessageManagerLock(local_b0);
  }
  *(undefined8 *)(this + 0xd8) = 0;
  plVar1 = *(long **)(this + 200);
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
    UNLOCK();
    if ((int)plVar1[1] == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xfffffc18;
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  if (this[0xa8] != (JuceVST3Editor)0x0) {
    this[0xa8] = (JuceVST3Editor)0x0;
    ScopedRunLoop::~ScopedRunLoop((ScopedRunLoop *)(this + 0x78));
  }
  Timer::~Timer((Timer *)(this + 0x50));
  Steinberg::Vst::EditorView::~EditorView((EditorView *)this);
  return;
}


