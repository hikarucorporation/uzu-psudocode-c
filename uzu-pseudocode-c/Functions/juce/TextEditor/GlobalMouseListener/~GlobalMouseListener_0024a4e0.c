// Function : ~GlobalMouseListener
// Namespace: juce:TextEditor:GlobalMouseListener
// Entry    : 0024a4e0
// Prototype: undefined ~GlobalMouseListener(GlobalMouseListener * this)
// Body     : 0024a4e0 - 0024a534


/* juce::TextEditor::GlobalMouseListener::~GlobalMouseListener() */

void __thiscall
juce::TextEditor::GlobalMouseListener::~GlobalMouseListener(GlobalMouseListener *this)

{
  Desktop *pDVar1;
  
  *(undefined ***)this = &PTR__GlobalMouseListener_00710598;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0024a4fd to 0024a506 has its CatchHandler @ 0024a548 */
    pDVar1 = operator_new(0x1d0);
                    /* try { // try from 0024a50a to 0024a511 has its CatchHandler @ 0024a535 */
    Desktop::Desktop(pDVar1);
    Desktop::instance = pDVar1;
  }
  pDVar1 = Desktop::instance;
  ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
  remove((ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
          *)(Desktop::instance + 0x48),(long)this);
                    /* try { // try from 0024a525 to 0024a52c has its CatchHandler @ 0024a548 */
  Desktop::resetTimer(pDVar1);
  return;
}


