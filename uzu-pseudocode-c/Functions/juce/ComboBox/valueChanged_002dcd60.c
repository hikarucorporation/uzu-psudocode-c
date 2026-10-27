// Function : valueChanged
// Namespace: juce:ComboBox
// Entry    : 002dcd60
// Prototype: undefined valueChanged(ComboBox * param_1)
// Body     : 002dcd60 - 002dcdee


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComboBox::valueChanged(juce::Value&) */

void __cdecl juce::ComboBox::valueChanged(ComboBox *param_1)

{
  int iVar1;
  int iVar2;
  long local_30;
  undefined1 local_28 [8];
  
  iVar2 = *(int *)(param_1 + 0x180);
  (**(code **)(**(long **)(param_1 + 0x150) + 0x10))(&local_30);
                    /* try { // try from 002dcd90 to 002dcd95 has its CatchHandler @ 002dce25 */
  iVar1 = (**(code **)(local_30 + 0x10))(local_28);
                    /* try { // try from 002dcd9d to 002dcda2 has its CatchHandler @ 002dce1d */
  (**(code **)(local_30 + 0x58))(local_28);
  if (iVar2 != iVar1) {
    (**(code **)(**(long **)(param_1 + 0x150) + 0x10))(&local_30);
                    /* try { // try from 002dcdc4 to 002dcdc9 has its CatchHandler @ 002dce15 */
    iVar2 = (**(code **)(local_30 + 0x10))(local_28);
                    /* try { // try from 002dcdca to 002dcdd8 has its CatchHandler @ 002dcdf7 */
    setSelectedId(param_1,iVar2,3);
                    /* try { // try from 002dcdde to 002dcde3 has its CatchHandler @ 002dcdef */
    (**(code **)(local_30 + 0x58))(local_28);
  }
  return;
}


