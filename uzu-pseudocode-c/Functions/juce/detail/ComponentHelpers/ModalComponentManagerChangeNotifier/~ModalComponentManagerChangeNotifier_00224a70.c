// Function : ~ModalComponentManagerChangeNotifier
// Namespace: juce:detail:ComponentHelpers:ModalComponentManagerChangeNotifier
// Entry    : 00224a70
// Prototype: undefined ~ModalComponentManagerChangeNotifier(ModalComponentManagerChangeNotifier * this)
// Body     : 00224a70 - 00224acb


/* juce::detail::ComponentHelpers::ModalComponentManagerChangeNotifier::~ModalComponentManagerChangeNotifier()
    */

void __thiscall
juce::detail::ComponentHelpers::ModalComponentManagerChangeNotifier::
~ModalComponentManagerChangeNotifier(ModalComponentManagerChangeNotifier *this)

{
  ModalComponentManagerChangeNotifier *pMVar1;
  ModalComponentManagerChangeNotifier *pMVar2;
  
  *(undefined4 *)(this + 0x24) = 0;
  free(*(void **)(this + 0x18));
  pMVar2 = *(ModalComponentManagerChangeNotifier **)this;
  while (pMVar2 != this) {
    pMVar1 = *(ModalComponentManagerChangeNotifier **)pMVar2;
    if (*(code **)(pMVar2 + 0x20) != (code *)0x0) {
                    /* try { // try from 00224ac0 to 00224ac9 has its CatchHandler @ 00224acc */
      (**(code **)(pMVar2 + 0x20))(pMVar2 + 0x10,pMVar2 + 0x10,3);
    }
    operator_delete(pMVar2);
    pMVar2 = pMVar1;
  }
  return;
}


