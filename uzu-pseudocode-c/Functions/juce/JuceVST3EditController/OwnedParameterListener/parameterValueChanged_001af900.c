// Function : parameterValueChanged
// Namespace: juce:JuceVST3EditController:OwnedParameterListener
// Entry    : 001af900
// Prototype: undefined parameterValueChanged(float param_1, long param_2_00)
// Body     : 001af900 - 001af9e2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::OwnedParameterListener::parameterValueChanged(int, float) */

void __cdecl
juce::JuceVST3EditController::OwnedParameterListener::parameterValueChanged
          (float param_1,long param_2_00)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  MessageManager *this;
  ulong uVar6;
  long *plVar7;
  
  lVar5 = __tls_get_addr(&PTR_007153d8);
  if ((*(char *)(lVar5 + 8) != '\x01') &&
     (plVar4 = *(long **)(param_2_00 + 8), (char)plVar4[0xc56] == '\0')) {
    iVar2 = *(int *)(param_2_00 + 0x14);
    uVar3 = *(undefined4 *)(param_2_00 + 0x10);
    this = (MessageManager *)MessageManager::getInstance();
    uVar6 = MessageManager::isThisTheMessageThread(this);
    if ((char)uVar6 == '\0') {
      lVar5 = plVar4[0x1d];
      *(float *)(*(long *)(lVar5 + 0x30) + (long)iVar2 * 4) = param_1;
      LOCK();
      puVar1 = (uint *)(*(long *)(lVar5 + 0x48) + ((ulong)(long)iVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
      UNLOCK();
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar4 + 0x168))(plVar4,uVar3);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x98))((double)param_1,plVar7);
      }
      plVar4 = (long *)plVar4[8];
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001af9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x20))((double)param_1,plVar4,uVar3);
        return;
      }
    }
  }
  return;
}


