// Function : ~GlobalMouseListener
// Namespace: juce:TextEditor:GlobalMouseListener
// Entry    : 0026a290
// Prototype: undefined ~GlobalMouseListener(GlobalMouseListener * this)
// Body     : 0026a290 - 0026a2eb


/* juce::TextEditor::GlobalMouseListener::~GlobalMouseListener() */

void __thiscall
juce::TextEditor::GlobalMouseListener::~GlobalMouseListener(GlobalMouseListener *this)

{
  Desktop *pDVar1;
  
  *(undefined ***)this = &PTR__GlobalMouseListener_00710598;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0026a2ad to 0026a2b6 has its CatchHandler @ 0026a2ff */
    pDVar1 = operator_new(0x1d0);
                    /* try { // try from 0026a2ba to 0026a2c1 has its CatchHandler @ 0026a2ec */
    Desktop::Desktop(pDVar1);
    Desktop::instance = pDVar1;
  }
  pDVar1 = Desktop::instance;
  ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
  remove((ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
          *)(Desktop::instance + 0x48),(long)this);
                    /* try { // try from 0026a2d5 to 0026a2dc has its CatchHandler @ 0026a2ff */
  Desktop::resetTimer(pDVar1);
  operator_delete(this);
  return;
}


