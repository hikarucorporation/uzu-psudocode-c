// Function : componentParentHierarchyChanged
// Namespace: juce:AudioProcessorEditor:AudioProcessorEditorListener
// Entry    : 001bdf10
// Prototype: undefined componentParentHierarchyChanged(long param_1)
// Body     : 001bdf10 - 001bdfb5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorEditor::AudioProcessorEditorListener::componentParentHierarchyChanged(juce::Component&)
    */

void __cdecl
juce::AudioProcessorEditor::AudioProcessorEditorListener::componentParentHierarchyChanged
          (long param_1)

{
  long lVar1;
  Desktop *this;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar1 + 0xe8) & 1) != 0) {
    lVar2 = lVar1;
    do {
      if ((*(ushort *)(lVar2 + 0xe8) & 1) != 0) {
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001bdf56 to 001bdf5f has its CatchHandler @ 001bdfc9 */
          this = operator_new(0x1d0);
                    /* try { // try from 001bdf63 to 001bdf6a has its CatchHandler @ 001bdfb6 */
          Desktop::Desktop(this);
          Desktop::instance = this;
        }
        if ((long)*(int *)(Desktop::instance + 0xdc) == 0) {
          return;
        }
        lVar3 = 0;
        do {
          if (*(long *)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar3) + 8) == lVar2) {
            *(undefined8 *)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar3) + 0x28) =
                 *(undefined8 *)(lVar1 + 0x140);
            return;
          }
          lVar3 = lVar3 + 8;
        } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar3);
        return;
      }
      lVar2 = *(long *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  return;
}


