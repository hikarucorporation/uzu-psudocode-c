// Function : componentParentHierarchyChanged
// Namespace: juce:ComponentMovementWatcher
// Entry    : 00224e80
// Prototype: undefined componentParentHierarchyChanged(ComponentMovementWatcher * param_1)
// Body     : 00224e80 - 0022501c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComponentMovementWatcher::componentParentHierarchyChanged(juce::Component&) */

void __cdecl
juce::ComponentMovementWatcher::componentParentHierarchyChanged(ComponentMovementWatcher *param_1)

{
  Desktop *this;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (lVar2 == 0) {
    return;
  }
  if (param_1[0x28] != (ComponentMovementWatcher)0x0) {
    return;
  }
  param_1[0x28] = (ComponentMovementWatcher)0x1;
  do {
    if ((*(ushort *)(lVar2 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00224ee2 to 00224eeb has its CatchHandler @ 00225030 */
        this = operator_new(0x1d0);
                    /* try { // try from 00224eef to 00224ef6 has its CatchHandler @ 0022501d */
        Desktop::Desktop(this);
        Desktop::instance = this;
      }
      if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
        lVar3 = 0;
        goto LAB_00224f20;
      }
      break;
    }
    lVar2 = *(long *)(lVar2 + 0x30);
  } while (lVar2 != 0);
  goto LAB_00224f33;
  while (lVar3 = lVar3 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar3) {
LAB_00224f20:
    if (*(long *)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar3) + 8) == lVar2) {
      iVar1 = *(int *)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar3) + 0xa8);
      if (iVar1 == *(int *)(param_1 + 0x10)) goto LAB_00224f6e;
      goto LAB_00224f3b;
    }
  }
LAB_00224f33:
  iVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
LAB_00224f3b:
                    /* try { // try from 00224f3e to 0022500d has its CatchHandler @ 00225038 */
    (**(code **)(*(long *)param_1 + 0x58))(param_1);
    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0))
    goto LAB_0022500e;
    *(int *)(param_1 + 0x10) = iVar1;
  }
LAB_00224f6e:
  iVar1 = *(int *)(param_1 + 0x24);
  if ((long)iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    lVar3 = 0;
    do {
      ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
      ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(*(long *)(lVar2 + lVar3) + 0xa0),(long)param_1);
      lVar3 = lVar3 + 8;
    } while ((long)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    free(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  registerWithParentComps(param_1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),1,1)
  ;
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0)) {
    (**(code **)(*(long *)param_1 + 0x20))(param_1);
  }
LAB_0022500e:
  param_1[0x28] = (ComponentMovementWatcher)0x0;
  return;
}


