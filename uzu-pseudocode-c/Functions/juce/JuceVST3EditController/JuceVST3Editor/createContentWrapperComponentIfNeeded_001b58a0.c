// Function : createContentWrapperComponentIfNeeded
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b58a0
// Prototype: undefined createContentWrapperComponentIfNeeded(JuceVST3Editor * this)
// Body     : 001b58a0 - 001b5996


/* juce::JuceVST3EditController::JuceVST3Editor::createContentWrapperComponentIfNeeded() */

void __thiscall
juce::JuceVST3EditController::JuceVST3Editor::createContentWrapperComponentIfNeeded
          (JuceVST3Editor *this)

{
  ContentWrapperComponent *this_00;
  ContentWrapperComponent *this_01;
  MessageManagerLock aMStack_158 [160];
  MessageManagerLock local_b8 [160];
  
  if (*(long *)(this + 0xd8) == 0) {
    MessageManagerLock::MessageManagerLock(aMStack_158,0);
                    /* try { // try from 001b58c7 to 001b58d0 has its CatchHandler @ 001b59e9 */
    this_01 = operator_new(0x120);
    Component::Component((Component *)this_01);
    *(undefined ***)this_01 = &PTR__ContentWrapperComponent_00706540;
    *(undefined8 *)(this_01 + 0xf0) = 0;
    *(JuceVST3Editor **)(this_01 + 0xf8) = this;
    *(undefined8 *)(this_01 + 0x100) = 0;
    *(undefined8 *)(this_01 + 0x108) = 0;
    *(undefined8 *)(this_01 + 0x10a) = 0;
    *(undefined8 *)(this_01 + 0x112) = 0;
                    /* try { // try from 001b5913 to 001b591f has its CatchHandler @ 001b599f */
    Component::setOpaque((Component *)this_01,1);
    Component::setBroughtToFrontOnMouseClick((Component *)this_01,1);
    this_00 = *(ContentWrapperComponent **)(this + 0xd8);
    *(ContentWrapperComponent **)(this + 0xd8) = this_01;
    if (this_00 != (ContentWrapperComponent *)0x0) {
                    /* try { // try from 001b5940 to 001b594e has its CatchHandler @ 001b5997 */
      MessageManagerLock::MessageManagerLock(local_b8,0);
      ContentWrapperComponent::~ContentWrapperComponent(this_00);
      operator_delete(this_00);
      MessageManagerLock::~MessageManagerLock(local_b8);
      this_01 = *(ContentWrapperComponent **)(this + 0xd8);
    }
                    /* try { // try from 001b597a to 001b5981 has its CatchHandler @ 001b59e9 */
    ContentWrapperComponent::createEditor(this_01,*(AudioProcessor **)(this + 0xd0));
    MessageManagerLock::~MessageManagerLock(aMStack_158);
  }
  return;
}


