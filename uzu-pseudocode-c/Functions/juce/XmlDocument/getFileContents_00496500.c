// Function : getFileContents
// Namespace: juce:XmlDocument
// Entry    : 00496500
// Prototype: undefined getFileContents(XmlDocument * this, long * param_1, long * param_2)
// Body     : 00496500 - 004965cf


/* juce::XmlDocument::getFileContents(juce::String const&) const */

void __thiscall juce::XmlDocument::getFileContents(XmlDocument *this,long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long local_28;
  long local_20;
  
  if (param_1 == (long *)0x0) goto LAB_004965bc;
  juce::String::trim(&local_20,param_2);
                    /* try { // try from 00496528 to 00496532 has its CatchHandler @ 00496609 */
  juce::String::unquoted(&local_28,&local_20);
                    /* try { // try from 00496536 to 0049653e has its CatchHandler @ 004965de */
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1,&local_28);
  piVar3 = (int *)(local_28 + -0x10);
  if (piVar3 == &emptyString) {
LAB_00496563:
    piVar3 = (int *)(local_20 + -0x10);
    if (piVar3 != &emptyString) {
LAB_00496571:
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar3);
      }
    }
  }
  else {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_00496563;
    operator_delete__(piVar3);
    piVar3 = (int *)(local_20 + -0x10);
    if (piVar3 != &emptyString) goto LAB_00496571;
  }
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 00496586 to 00496591 has its CatchHandler @ 004965d0 */
    (**(code **)(*plVar2 + 0xa0))(this,plVar2);
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
LAB_004965bc:
  *(undefined1 **)this = &DAT_0061ac58;
  return;
}


