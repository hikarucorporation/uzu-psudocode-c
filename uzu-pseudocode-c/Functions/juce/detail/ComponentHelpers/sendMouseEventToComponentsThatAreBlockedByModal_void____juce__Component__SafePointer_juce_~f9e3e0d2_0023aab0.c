// Function : sendMouseEventToComponentsThatAreBlockedByModal<void(*)(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 0023aab0
// Prototype: void sendMouseEventToComponentsThatAreBlockedByModal<void(*)(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)>(long * param_1, undefined8 * param_2)
// Body     : 0023aab0 - 0023ac84


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::detail::ComponentHelpers::sendMouseEventToComponentsThatAreBlockedByModal<void
   (*)(juce::Component::SafePointer<juce::Component>, juce::MouseInputSource, juce::Point<float>,
   juce::Time)>(juce::Component&, void (*&&)(juce::Component::SafePointer<juce::Component>,
   juce::MouseInputSource, juce::Point<float>, juce::Time)) */

void __cdecl
juce::detail::ComponentHelpers::
sendMouseEventToComponentsThatAreBlockedByModal<void(*)(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)>
          (long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  char cVar8;
  Desktop *this;
  long *plVar9;
  long *plVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  long *local_68;
  long local_60;
  timeval local_58;
  undefined1 local_48 [16];
  
  if (Desktop::instance == (Desktop *)0x0) {
    this = operator_new(0x1d0);
                    /* try { // try from 0023aaef to 0023aaf6 has its CatchHandler @ 0023ac85 */
    Desktop::Desktop(this);
    lVar3 = *(long *)(this + 0x40);
    iVar2 = *(int *)(lVar3 + 0x44);
    Desktop::instance = this;
  }
  else {
    lVar3 = *(long *)(Desktop::instance + 0x40);
    iVar2 = *(int *)(lVar3 + 0x44);
  }
  if ((long)iVar2 != 0) {
    plVar10 = *(long **)(lVar3 + 0x38);
    plVar1 = plVar10 + iVar2;
    do {
      if (((*(long *)(*plVar10 + 0x48) != 0) &&
          (plVar4 = *(long **)(*(long *)(*plVar10 + 0x48) + 0x10), plVar4 != (long *)0x0)) &&
         (plVar4 != param_1)) {
        plVar9 = plVar4;
        do {
          if (plVar9 == (long *)0x0) {
            cVar8 = (**(code **)(*param_1 + 0x170))(param_1);
            if (cVar8 == '\0') {
              pcVar5 = (code *)*param_2;
              plVar9 = (long *)plVar4[0x1b];
              if (plVar9 == (long *)0x0) {
                plVar9 = operator_new(0x18);
                *(undefined4 *)(plVar9 + 1) = 0;
                *plVar9 = (long)&PTR__ReferenceCountedObject_00714b80;
                plVar9[2] = (long)plVar4;
                LOCK();
                *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                UNLOCK();
                plVar6 = (long *)plVar4[0x1b];
                plVar4[0x1b] = (long)plVar9;
                if (plVar6 == (long *)0x0) goto LAB_0023ab86;
                LOCK();
                plVar9 = plVar6 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)(*plVar6 + 8))();
                }
                local_68 = (long *)plVar4[0x1b];
                if (local_68 != (long *)0x0) goto LAB_0023ab8a;
              }
              else {
LAB_0023ab86:
                local_68 = plVar9;
LAB_0023ab8a:
                LOCK();
                *(int *)(local_68 + 1) = (int)local_68[1] + 1;
                UNLOCK();
              }
              local_60 = *plVar10;
              uVar7 = MouseInputSourceImpl::getScreenPosition((MouseInputSourceImpl *)*plVar10);
                    /* try { // try from 0023aba1 to 0023abf1 has its CatchHandler @ 0023ac92 */
              uVar7 = ScalingHelpers::screenPosToLocalPos(uVar7,plVar4);
              local_48._8_4_ = extraout_XMM0_Dc;
              local_48._0_8_ = uVar7;
              local_48._12_4_ = extraout_XMM0_Dd;
              gettimeofday(&local_58,(__timezone_ptr_t)0x0);
              (*pcVar5)(local_48._0_4_,&local_68,&local_60,
                        local_58.tv_usec / 1000 + local_58.tv_sec * 1000);
              if (local_68 != (long *)0x0) {
                LOCK();
                plVar4 = local_68 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)(*local_68 + 8))();
                }
              }
            }
            break;
          }
          plVar9 = (long *)plVar9[6];
        } while (plVar9 != param_1);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
  }
  return;
}


