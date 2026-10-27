// Function : navigateFocus
// Namespace: juce:detail:FocusHelpers
// Entry    : 0022b430
// Prototype: long navigateFocus(long param_1, long param_2, int param_3, undefined * param_4, int param_5)
// Body     : 0022b430 - 0022b575


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::FocusHelpers::navigateFocus(juce::Component const*, juce::Component const*,
   juce::detail::FocusHelpers::NavigationDirection, bool (juce::Component::*)() const,
   juce::FocusTraverser::SkipDisabledComponents) */

long __cdecl
juce::detail::FocusHelpers::navigateFocus
          (long param_1,long param_2,int param_3,undefined *param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *local_28;
  long *plStack_20;
  undefined8 local_18;
  
  if (param_2 == 0) {
    return 0;
  }
  local_28 = (long *)0x0;
  plStack_20 = (long *)0x0;
  local_18 = 0;
                    /* try { // try from 0022b454 to 0022b467 has its CatchHandler @ 0022b576 */
  findAllComponents(param_2,(vector<juce::Component*,std::allocator<juce::Component*>> *)&local_28,
                    param_4,param_5);
  uVar3 = (long)plStack_20 - (long)local_28;
  if ((long)uVar3 < 0x20) {
    lVar4 = (long)uVar3 >> 3;
    plVar2 = local_28;
    if (lVar4 != 1) goto LAB_0022b4e9;
LAB_0022b507:
    if (*plVar2 == param_1) {
joined_r0x0022b548:
      if (plVar2 != plStack_20) {
        if (param_3 == 1) {
          lVar4 = -1;
          plVar1 = local_28;
        }
        else {
          if (param_3 != 0) goto LAB_0022b560;
          lVar4 = 1;
          plVar1 = plStack_20 + -1;
        }
        if (plVar2 != plVar1) {
          lVar4 = plVar2[lVar4];
          goto joined_r0x0022b53d;
        }
      }
    }
  }
  else {
    lVar4 = (uVar3 >> 5) + 1;
    plVar1 = local_28 + 2;
    do {
      plVar2 = plVar1;
      if (plVar2[-2] == param_1) {
        plVar2 = plVar2 + -2;
        goto joined_r0x0022b548;
      }
      if (plVar2[-1] == param_1) {
        plVar2 = plVar2 + -1;
        goto joined_r0x0022b548;
      }
      if (*plVar2 == param_1) goto joined_r0x0022b548;
      if (plVar2[1] == param_1) {
        plVar2 = plVar2 + 1;
        goto joined_r0x0022b548;
      }
      lVar4 = lVar4 + -1;
      uVar3 = uVar3 - 0x20;
      plVar1 = plVar2 + 4;
    } while (1 < lVar4);
    plVar2 = plVar2 + 2;
    lVar4 = (long)uVar3 >> 3;
    if (lVar4 == 1) goto LAB_0022b507;
LAB_0022b4e9:
    if (lVar4 == 2) {
LAB_0022b4fe:
      if (*plVar2 != param_1) {
        plVar2 = plVar2 + 1;
        goto LAB_0022b507;
      }
      goto joined_r0x0022b548;
    }
    if (lVar4 == 3) {
      if (*plVar2 != param_1) {
        plVar2 = plVar2 + 1;
        goto LAB_0022b4fe;
      }
      goto joined_r0x0022b548;
    }
  }
LAB_0022b560:
  lVar4 = 0;
joined_r0x0022b53d:
  if (local_28 != (long *)0x0) {
    operator_delete(local_28);
  }
  return lVar4;
}


