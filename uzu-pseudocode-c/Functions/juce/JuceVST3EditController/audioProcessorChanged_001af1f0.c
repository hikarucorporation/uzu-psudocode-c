// Function : audioProcessorChanged
// Namespace: juce:JuceVST3EditController
// Entry    : 001af1f0
// Prototype: undefined audioProcessorChanged(JuceVST3EditController * this, undefined8 param_2_00, char * param_2)
// Body     : 001af1f0 - 001af5d7


/* juce::JuceVST3EditController::audioProcessorChanged(juce::AudioProcessor*,
   juce::AudioProcessorListener::ChangeDetails const&) */

void __thiscall
juce::JuceVST3EditController::audioProcessorChanged
          (JuceVST3EditController *this,undefined8 param_2_00,char *param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  Param *this_00;
  long lVar4;
  long *plVar5;
  MessageManager *pMVar6;
  JuceVST3EditController JVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  AsyncUpdater *this_01;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 uVar17;
  double dVar16;
  double local_40;
  int local_34;
  
  uVar13 = 0;
  if ((param_2[1] != '\0') && (plVar14 = *(long **)(this + 0x50), plVar14 != (long *)0x0)) {
    uVar12 = 0;
    uVar13 = 0;
    do {
      uVar10 = plVar14[1] - *plVar14;
      iVar3 = (int)(uVar10 >> 3);
      if ((long)iVar3 <= (long)uVar12) break;
      if ((long)uVar12 < (long)iVar3) {
        if ((ulong)((long)uVar10 >> 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          std::__throw_out_of_range_fmt
                    ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",
                     uVar12);
        }
        lVar4 = *(long *)(*plVar14 + uVar12 * 8);
        if ((lVar4 != 0) &&
           (this_00 = (Param *)__dynamic_cast(lVar4,&Steinberg::Vst::Parameter::typeinfo,
                                              &Param::typeinfo,0), this_00 != (Param *)0x0)) {
          bVar2 = Param::updateParameterInfo(this_00);
          if (bVar2) {
            uVar13 = 0x10;
          }
          plVar14 = *(long **)(this + 0x50);
        }
      }
      uVar12 = uVar12 + 1;
    } while (plVar14 != (long *)0x0);
  }
  lVar4 = *(long *)(this + 0xe8);
  if ((lVar4 != 0) && (plVar14 = *(long **)(lVar4 + 0xd8), plVar14 != (long *)0x0)) {
    if ((param_2[2] != '\0') && (lVar11 = *(long *)(lVar4 + 0x150), lVar11 != 0)) {
      uVar8 = *(uint *)(lVar4 + 100);
      lVar4 = lVar4 + 0x148;
      lVar9 = lVar4;
      do {
        plVar5 = (long *)(lVar11 + 0x18);
        if (uVar8 <= *(uint *)(lVar11 + 0x20)) {
          plVar5 = (long *)(lVar11 + 0x10);
          lVar9 = lVar11;
        }
        lVar11 = *plVar5;
      } while (lVar11 != 0);
      if (lVar9 != lVar4) {
        if (uVar8 < *(uint *)(lVar9 + 0x20)) {
          lVar9 = lVar4;
        }
        if ((lVar9 != lVar4) && (*(long *)(lVar9 + 0x28) != 0)) {
          iVar3 = (**(code **)(*plVar14 + 0xe8))(plVar14);
          lVar4 = (**(code **)(*(long *)this + 0x168))(this,uVar8);
          if (lVar4 == 0) {
            uVar15 = 0;
            uVar17 = 0;
          }
          else {
            uVar15 = (undefined4)*(undefined8 *)(lVar4 + 0x328);
            uVar17 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x328) >> 0x20);
          }
          dVar16 = (double)CONCAT44(uVar17,uVar15);
          plVar5 = (long *)(**(code **)(*(long *)this + 0x168))(this,uVar8);
          if (plVar5 != (long *)0x0) {
            dVar16 = (double)(**(code **)(*plVar5 + 0xb0))(uVar15,plVar5);
          }
          if (iVar3 != SUB84(dVar16 + DAT_005d9098,0)) {
            if (this[0x62b0] == (JuceVST3EditController)0x0) {
              pMVar6 = (MessageManager *)MessageManager::getInstance();
              uVar12 = MessageManager::isThisTheMessageThread(pMVar6);
              if (((char)uVar12 != '\0') &&
                 (plVar5 = *(long **)(this + 0x40), plVar5 != (long *)0x0)) {
                (**(code **)(*plVar5 + 0x18))(plVar5,uVar8);
              }
            }
            lVar4 = (long)*(int *)(*(long *)(this + 0xe8) + 0x14);
            if (lVar4 != 0) {
              lVar4 = lVar4 << 2;
              lVar11 = 0;
              do {
                if (*(uint *)(*(long *)(*(long *)(this + 0xe8) + 8) + lVar11 * 4) == uVar8) {
                  local_34 = (int)lVar11;
                  goto LAB_001af414;
                }
                lVar11 = lVar11 + 1;
                lVar4 = lVar4 + -4;
              } while (lVar4 != 0);
            }
            local_34 = -1;
LAB_001af414:
            local_40 = (double)iVar3;
            plVar5 = (long *)(**(code **)(*(long *)this + 0x168))(this,uVar8);
            if (plVar5 != (long *)0x0) {
              local_40 = (double)(**(code **)(*plVar5 + 0xb8))(SUB84(local_40,0),plVar5);
            }
            lVar4 = __tls_get_addr(&PTR_007153d8);
            JVar7 = this[0x62b0];
            if ((*(char *)(lVar4 + 8) != '\x01') && (JVar7 == (JuceVST3EditController)0x0)) {
              pMVar6 = (MessageManager *)MessageManager::getInstance();
              uVar12 = MessageManager::isThisTheMessageThread(pMVar6);
              if ((char)uVar12 == '\0') {
                lVar4 = *(long *)(this + 0xe8);
                *(float *)(*(long *)(lVar4 + 0x30) + (long)local_34 * 4) = (float)local_40;
                LOCK();
                puVar1 = (uint *)(*(long *)(lVar4 + 0x48) + ((ulong)(long)local_34 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)local_34 & 0x1f);
                UNLOCK();
              }
              else {
                plVar5 = (long *)(**(code **)(*(long *)this + 0x168))(this,uVar8);
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x98))(SUB84(local_40,0),plVar5);
                }
                plVar5 = *(long **)(this + 0x40);
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x20))(SUB84(local_40,0),plVar5,uVar8);
                }
              }
              JVar7 = this[0x62b0];
            }
            if (JVar7 == (JuceVST3EditController)0x0) {
              pMVar6 = (MessageManager *)MessageManager::getInstance();
              uVar12 = MessageManager::isThisTheMessageThread(pMVar6);
              if (((char)uVar12 != '\0') &&
                 (plVar5 = *(long **)(this + 0x40), plVar5 != (long *)0x0)) {
                (**(code **)(*plVar5 + 0x28))(plVar5,uVar8);
              }
            }
            uVar13 = uVar13 | 4;
          }
        }
      }
    }
    if ((*param_2 != '\0') && (*(int *)((long)plVar14 + 0x3c) != *(int *)(this + 0x62b4))) {
      uVar13 = uVar13 | 8;
      *(int *)(this + 0x62b4) = *(int *)((long)plVar14 + 0x3c);
    }
  }
  uVar8 = uVar13 | 0x10000;
  if (param_2[3] == '\0') {
    uVar8 = uVar13;
  }
  uVar13 = uVar8 & 8;
  if (((byte)this[0x62b2] & 1) == 0) {
    uVar13 = uVar8;
  }
  if (uVar13 == 0) {
    return;
  }
  LOCK();
  *(uint *)(this + 0x108) = *(uint *)(this + 0x108) | uVar13;
  UNLOCK();
  this_01 = (AsyncUpdater *)(this + 0xf0);
  pMVar6 = (MessageManager *)MessageManager::getInstance();
  uVar12 = MessageManager::isThisTheMessageThread(pMVar6);
  if ((char)uVar12 == '\0') {
    AsyncUpdater::triggerAsyncUpdate(this_01);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001af59f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this_01 + 0x10))(this_01);
  return;
}


