// Function : setComponentState
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3a50
// Prototype: undefined8 setComponentState(long * param_1)
// Body     : 001b3a50 - 001b3c36


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::setComponentState(Steinberg::IBStream*) */

undefined8 __cdecl juce::JuceVST3EditController::setComponentState(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  float fVar9;
  double local_30;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(EventHandler::hostMessageThreadState + 8));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(EventHandler::hostMessageThreadState + 8));
  lVar5 = param_1[0x1d];
  if ((lVar5 != 0) && ((long)*(int *)(lVar5 + 0x14) != 0)) {
    puVar8 = *(uint **)(lVar5 + 8);
    plVar6 = *(long **)(lVar5 + 0xd8);
    puVar1 = puVar8 + *(int *)(lVar5 + 0x14);
    if (plVar6 == (long *)0x0) {
      while( true ) {
        uVar2 = *puVar8;
        lVar7 = *(long *)(lVar5 + 0x150);
        lVar5 = lVar5 + 0x148;
        do {
          plVar6 = (long *)(lVar7 + 0x18);
          if (uVar2 <= *(uint *)(lVar7 + 0x20)) {
            plVar6 = (long *)(lVar7 + 0x10);
            lVar5 = lVar7;
          }
          lVar7 = *plVar6;
        } while (lVar7 != 0);
        fVar9 = (float)(**(code **)(**(long **)(lVar5 + 0x28) + 0x10))();
        plVar6 = (long *)(**(code **)(*param_1 + 0x168))(param_1,uVar2);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x98))((double)fVar9,plVar6);
        }
        puVar8 = puVar8 + 1;
        if (puVar8 == puVar1) break;
        lVar5 = param_1[0x1d];
      }
    }
    else {
      while( true ) {
        uVar2 = *puVar8;
        if (uVar2 == *(uint *)(lVar5 + 100)) {
          iVar3 = (**(code **)(*plVar6 + 0xe8))(plVar6);
          local_30 = (double)iVar3;
          plVar4 = (long *)(**(code **)(*param_1 + 0x168))(param_1,uVar2);
          if (plVar4 != (long *)0x0) {
            local_30 = (double)(**(code **)(*plVar4 + 0xb8))(local_30,plVar4);
          }
        }
        else {
          lVar7 = *(long *)(lVar5 + 0x150);
          lVar5 = lVar5 + 0x148;
          do {
            plVar4 = (long *)(lVar7 + 0x18);
            if (uVar2 <= *(uint *)(lVar7 + 0x20)) {
              plVar4 = (long *)(lVar7 + 0x10);
              lVar5 = lVar7;
            }
            lVar7 = *plVar4;
          } while (lVar7 != 0);
          fVar9 = (float)(**(code **)(**(long **)(lVar5 + 0x28) + 0x10))();
          local_30 = (double)fVar9;
        }
        plVar4 = (long *)(**(code **)(*param_1 + 0x168))(param_1,uVar2);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x98))(local_30,plVar4);
        }
        puVar8 = puVar8 + 1;
        if (puVar8 == puVar1) break;
        lVar5 = param_1[0x1d];
      }
    }
  }
  plVar6 = (long *)param_1[8];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x30))(plVar6,4);
  }
  return 0;
}


