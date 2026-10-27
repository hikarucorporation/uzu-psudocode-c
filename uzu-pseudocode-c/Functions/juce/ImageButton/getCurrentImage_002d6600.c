// Function : getCurrentImage
// Namespace: juce:ImageButton
// Entry    : 002d6600
// Prototype: undefined getCurrentImage(long * param_1, long param_2)
// Body     : 002d6600 - 002d66bc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ImageButton::getCurrentImage() const */

void __cdecl juce::ImageButton::getCurrentImage(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long local_30;
  undefined1 local_28 [8];
  
  if (*(int *)(param_2 + 0x1b8) == 2) {
LAB_002d664d:
    if (*(long *)(param_2 + 0x220) != 0) {
      lVar1 = *(long *)(param_2 + 0x220);
      *param_1 = lVar1;
      goto joined_r0x002d6667;
    }
  }
  else {
                    /* try { // try from 002d6623 to 002d662a has its CatchHandler @ 002d66cd */
    (**(code **)(**(long **)(param_2 + 0x1c0) + 0x10))(&local_30);
                    /* try { // try from 002d6635 to 002d663a has its CatchHandler @ 002d66c5 */
    cVar2 = (**(code **)(local_30 + 0x30))(local_28);
                    /* try { // try from 002d6642 to 002d6647 has its CatchHandler @ 002d66bd */
    (**(code **)(local_30 + 0x58))(local_28);
    if (cVar2 != '\0') goto LAB_002d664d;
    if (*(int *)(param_2 + 0x1b8) == 0) {
      lVar1 = *(long *)(param_2 + 0x210);
      *param_1 = lVar1;
      goto joined_r0x002d6667;
    }
  }
  plVar3 = (long *)(param_2 + 0x218);
  if (*(long *)(param_2 + 0x218) == 0) {
    plVar3 = (long *)(param_2 + 0x210);
  }
  lVar1 = *plVar3;
  *param_1 = lVar1;
joined_r0x002d6667:
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}


